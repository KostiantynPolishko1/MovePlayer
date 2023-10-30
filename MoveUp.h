#pragma once

#ifndef MOVEUP_H
#define MOVEUP_H

#include "IMove.h"

class MoveUp final :
    public IMove
{
    virtual void move(short& row, short& col) override final{
        std::cout << "\nmoveup:\t\t";
        row--;
    }
}
;
#endif