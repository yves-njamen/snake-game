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

// define position an the part of snake
struct snake_node
{
   int pos_x, pos_y, part;
};

typedef vector<snake_node> tuple_list;

void move_snake(tuple_list& snake_body, string dir)
// to encapsulate snake move during the game and also manage game board wall
{

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
    string direction;
    while(stop)
    {

        switch(getch()) {
        case KEY_UP:
            direction = "UP";
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
        default:
            cout << endl << "[Unknown Touch]" << endl;  // not arrow
            break;
        }

    }

    return EXIT_SUCCESS;
}