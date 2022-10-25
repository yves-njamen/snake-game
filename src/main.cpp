#include <cstdlib>
#include <iostream>
#include <vector>
#include <tuple>
#include <conio.h>

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

// snake grow here
void snake_grow(tuple_list& snake_body, snake_node& meal)
//[TODO]
{

}

bool move_snake(tuple_list& snake_body, int key)
// to encapsulate snake move during the game and also manage game board wall

{
    string direction;
    bool stop = true;
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
            stop = false;
            break;
        case KEY_SKIP: // because c++ getch() probrem with 2 chars on arrows touch 
            break;
        default:
            cout << endl << "[Unknown Touch]" << endl;  // not arrow
            break;
        }

        for (int k = 0; k < snake_body.size(); k++)  // to move all snake [TODO]
        {
            snake_body[k].pos_x += dx;
            snake_body[k].pos_y += dy;
        }

    return stop;
}

void generate_meal(snake_node& meal)
// here snake eat is created
{
    meal.pos_x = (rand() % board_size_x) + 1;
    meal.pos_y = (rand() % board_size_y) + 1;
    // cout << "meal x =" << meal.pos_x << "meal y =" << meal.pos_y << endl;
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
    std::cout << "snake game board" << std::endl;

    // create snake at position (5, 5)
    tuple_list snake{{5, 6, 0}};

    // create first meal
    snake_node meal{2,2,0};

    // diplay our snake 
    display(snake, meal);

    // game loop 
    bool stop = true;
    while(stop)
    {
        stop = move_snake(snake, getch());

        // diplay our snake 
        display(snake, meal);

        // continuous generate meal if the previous meal have been eaten
        if (snake[0].pos_x == meal.pos_x and snake[0].pos_y == meal.pos_y)
        {
            generate_meal(meal);
            snake.push_back(meal);
            cout << "length snake :" << snake.size() << endl;  // [TODO]
        }
        
    }

    return EXIT_SUCCESS;
}