#include "classes.h"

Entity::Entity(int x, int y, int maxHealth)
{
    this->x = x;
    this->y = y;
    this->maxHealth = maxHealth;
    this->health = this->maxHealth;
}

void Entity::setHealth(int health)
{
    this->health = health;
}

int Entity::getHealth()
{
    return health;
}

void Entity::setPos(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Entity::getX()
{
    return x;
}

int Entity::getY()
{
    return y;
}

void Entity::Move(int dx, int dy)
{
    x+=dx;
    y+=dy;
}

void Entity::modHealth(int dhealth)
{
    health+=dhealth;
    if (health > maxHealth)
    {
        health = maxHealth;
    }
    else if (health < 0)
    {
        health = 0;
    }
    
}