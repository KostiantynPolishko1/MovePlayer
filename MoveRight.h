#pragma once

#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include "IMove.h"

class MoveRight final :
    public IMove
{
public:
    virtual void move(short& row, short& col) override final {
        std::cout << "\nmoveright:\t";
        col++;
    }
}
;
#endif