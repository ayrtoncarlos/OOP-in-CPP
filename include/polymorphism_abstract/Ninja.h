#ifndef NINJA_H
#define NINJA_H

#include "Enemy.h"

class Ninja : public Enemy
{
    public:
        Ninja();
        ~Ninja();
        void attack();
    protected:
    private:
};

#endif