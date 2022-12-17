#include <cstdlib>
#include <iostream>
#include <vector>
#include <tuple>
#include <conio.h>
// #include <QApplication>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_STOP 27
#define KEY_SKIP 224

#define board_size_x 10
#define board_size_y 10

// define position an the part osf snake
struct snake_node
{
   int pos_x, pos_y, part;
};

typedef vector<snake_node> tuple_list;


tuple<bool, bool> move_snake(tuple_list& snake_body, int key)
// to encapsulate snake move during the game and also manage game board wall

{
    string direction;
    tuple <bool, bool> check_status(true, false);  // <stop, lose> status
    int dx = 0;
    int dy = 0;
    switch(key){
        case KEY_UP:
            direction = "UP";
            dy = -1;
            dx = 0;
            cout << "UP" << endl;
            break;
        case KEY_DOWN:
            direction = "DOWN";
            dy = 1;
            dx = 0;
            cout << "DOWN" << endl;
            break;
        case KEY_LEFT:
            direction = "LEFT";
            dy = 0;
            dx = -1;
            cout << "LEFT" << endl;
            break;
        case KEY_RIGHT:
            dy = 0;
            dx = 1;
            direction = "RIGHT";
            cout << "RIGHT" << endl;
            break;
        case KEY_STOP:
            cout << endl << "Game is stopped" << endl;  // not arrow
            get<0>(check_status) = false;
            break;
        case KEY_SKIP: // because c++ getch() probrem with 2 chars on arrows touch 
            break;
        default:
            cout << endl << "[Unknown Touch]" << endl;  // not arrow
            break;
        }

        // and snake body follow
        if (dx!=0 or dy!=0)
        {
            for (int k = snake_body.size()-1; k > 0; k--)  // to move all snake [TODO]
            {
                snake_body[k].pos_x = snake_body[k - 1].pos_x;
                snake_body[k].pos_y = snake_body[k - 1].pos_y;
                
            }

            // we give direction to snake head
            snake_body[0].pos_x += dx;
            snake_body[0].pos_y += dy;

            // here we catch failed move : bit knock a wall
            if(snake_body[0].pos_x == board_size_x + 1 or snake_body[0].pos_x == 0)
            {
                get<1>(check_status) = true;
            }else if (snake_body[0].pos_y == board_size_y + 1 or snake_body[0].pos_y == 0)
            {
               get<1>(check_status) = true;
            }
            
            // here we catch failed move : snake eat itself
            for (int k = 1; k < snake_body.size(); k++)  
            {
                if (snake_body[0].pos_x == snake_body[k].pos_x and snake_body[0].pos_y == snake_body[k].pos_y)
                {
                    get<0>(check_status) = true;
                }
                             
            }
            
        }

    return check_status;
}

void generate_meal(snake_node& meal)
// here snake eat is created
{
    meal.pos_x = (rand() % board_size_x) + 1;
    meal.pos_y = (rand() % board_size_y) + 1;
    meal.part = -1;
}

void display(tuple_list& snake_body, snake_node& meal)
// display our board during game
{       
    // we create our game board
    int board [board_size_x][board_size_y];
    string cell = ".   ";
        // display board 
    for (int i = 1; i < board_size_y+1 ; i++)
    {
        for (int j = 1; j < board_size_x+1; j++)
        {
            cell = ".   ";
            for (int k = 0; k < snake_body.size(); k++)
            {
                if (snake_body[k].pos_y == i and snake_body[k].pos_x==j)
                {
                    cell = "X   ";
                }
            }
            if (meal.pos_x == j and meal.pos_y == i)
            {
                cell = "O   ";
            }
            std::cout << cell;

        }
        
        std::cout << std::endl;
        
    }

}

int main()
{
    std::cout << "SNAKE GAME" << std::endl;
    std::cout << "" << std::endl;

    // create snake at position (5, 5)
    tuple_list snake{{5, 6, 0}};

    // create first meal
    snake_node meal{2,2,0};
    int score=0;
    int state=10;

    // game loop 
    tuple <bool, bool> status(true, false);

    // first menu
    system("cls");
    cout << "1. Play" << std::endl;
    cin >> state;

    if (state == 1)
    {
        // clear screen [TODO]
        system("cls");

        // second menu
        cout << "1. Start       ||" << std::endl;
        cout << "2. Quit        ||" << std::endl;
        cin >> state;

        if (state == 1)
        {    
            // clear screen [TODO]
            system("cls");

            // third menu
            cout << "1. Start       ||  OK" << std::endl;
            cout << "2. Stop        ||" << std::endl;
            cout << "ESC. Quit      ||" << std::endl;

            // diplay our snake 
            display(snake, meal);

            while(get<0>(status))
            {
                status = move_snake(snake, getch());
                // clear screen [TODO]
                system("cls");

                // continuous generate meal if the previous meal have been eaten
                if (snake[0].pos_x == meal.pos_x and snake[0].pos_y == meal.pos_y)
                {
                    snake.insert(snake.begin() + 1, meal);
                    score++;
                    generate_meal(meal);
                }


                if (!get<0>(status))
                {
                    // third menu
                    cout << "1. Start       ||" << std::endl;
                    cout << "2. Stop        ||" << std::endl;
                    cout << "3. Score       ||  " << score << endl;
                    cout << "ESC. Quit      ||  OK" << std::endl;
                }else
                {
                    // third menu
                    cout << "1. Start       ||  OK" << std::endl;
                    cout << "2. Stop        ||" << std::endl;
                    cout << "3. Score       ||  " << score << endl;
                    cout << "ESC. Quit      ||" << std::endl;
                }

                if (get<1>(status))
                {
                    system("cls");
                    // third menu
                    cout << "1. Start       ||" << std::endl;
                    cout << "2. Stop        ||  OK" << std::endl;
                    cout << "3. Score       ||  " << score << endl;
                    cout << "ESC. Quit      ||" << std::endl;
                    cout << "You lost, good bye!" << endl;
                }
                
                // diplay our snake 
                display(snake, meal);


            }
        }else if (state == 2)
        {
            // clear screen [TODO]
            system("cls");

            // second menu
            cout << "1. Start       ||" << std::endl;
            cout << "2. Quit        ||  OK" << std::endl;
        }
        
    }else
    {
        cout << "your chosen number is not in the menu list" << endl;
    }
    return EXIT_SUCCESS;
}