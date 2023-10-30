#pragma once
#include "IMove.h"

#ifndef MOVELEFT_H
#define MOVELEFT_H

class MoveLeft final :
    public IMove
{
public:
    virtual void move(short& row, short& col) override final {
        std::cout << "\nmoveleft:\t";
        col--;
    }
}
;
#endif