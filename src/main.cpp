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

// define position an the part osf snake
struct snake_node
{
   int pos_x, pos_y, part;
};

typedef vector<snake_node> tuple_list;

bool move_snake(tuple_list& snake_body, int key)
// to encapsulate snake move during the game and also manage game board wall

{
    string direction;
    bool stop = true;
    switch(key){
        case KEY_UP:
            direction = "UP";
            cout << "UP" << endl;
            break;
        case KEY_DOWN:
            direction = "DOWN";
            break;
        case KEY_LEFT:
            direction = "LEFT";
            break;
        case KEY_RIGHT:
            direction = "RIGHT";
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
    return stop;
}

void display(tuple_list& snake_body)
// display our board during game
{       
    // we create our game board
    const int board_size_x = 10;
    const int board_size_y = 10;
    int board [board_size_x][board_size_y];
    string cell = ".   ";
        // display board 
    for (int i = 1; i < board_size_y+1 ; i++)
    {
        for (int j = 1; j < board_size_x+1; j++)
        {
            for (int k = 0; k < snake_body.size(); k++)
            {
                if (snake_body[k].pos_y == i and snake_body[k].pos_x==j)
                {
                    cell = "X   ";
                }else
                {
                    cell = ".   ";
                }
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

    // diplay our snake 
    display(snake);

    // game loop 
    bool stop = true;
    while(stop)
    {
        stop = move_snake(snake, getch());

    }

    return EXIT_SUCCESS;
}