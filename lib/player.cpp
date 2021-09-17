#include "classes.h"

Player::Player(int x, int y, int maxHealth, int speed)
    : Entity(x, y, maxHealth)
    {
        this->speed = speed;
    }

int Player::getSpeed()
{
    return speed;
}

void Player::printPos()
{
       printf("My coordinates are (%d, %d)\n", this->getX(), this->getY());
}

void Player::printHP()
{
    printf("My current health is %d\n", this->getHealth());
}