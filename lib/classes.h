#ifndef CLASSES_H
#define CLASSES_H

#include "common.h"

class Entity
{
    private:
    int x;
    int y;
    int health;
    int maxHealth;

    public:
    Entity(int x, int y, int maxHealth);
    void setPos(int x, int y);
    void setHealth(int health);
    int getHealth();
    int getX();
    int getY();
    void Move(int dx, int dy);
    void modHealth(int dhealth);
};

class Player : public Entity
{
    private:
    int speed;

    public:
    Player(int x, int y, int maxHealth, int speed);
    int getSpeed();
    void printPos();
    void printHP();
};

#endif
