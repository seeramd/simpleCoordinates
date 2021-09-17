#include "input.h"
#include "classes.h"

void parseInput(char c, bool* quit, Player* player)
{

    switch (c)
    {
    case 'w':
        player->Move(0, player->getSpeed());
        player->printPos();
        break;
    case 'a':
        player->Move(-player->getSpeed(),0);
        player->printPos();
        break;
    case 's':
        player->Move(0, -player->getSpeed());
        player->printPos();
        break;
    case 'd':
        player->Move(player->getSpeed(), 0);
        player->printPos();
        break;
    case 'e':
        player->modHealth(-1);
        printf("Ouch!\n");
        player->printHP();
        break;
    case 'r':
        player->modHealth(1);
        printf("Ooh...\n");
        player->printHP();
        break;
    case 'q':
        *quit = true;
        break;
    default:
        break;
    }
}