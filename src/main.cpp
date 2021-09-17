#include "main.h"

int main()
{
    Player player(0,0,10,1);
    player.printPos();
    player.printHP();

    bool quit_flag = false;
    char c = 0;
    while(!quit_flag)
    {
        c = _getch();
        parseInput(c, &quit_flag, &player);
    }
    

    return 0;
}