#pragma once

#ifndef MOVEDOWN_H
#define MOVEDOWN_H

#include "IMove.h"

class MoveDown final :
    public IMove
{
public:
    virtual void move(short& row, short& col) override final {
        std::cout << "\nmovedown:\t";
        row++;
    }
}
;
#endif