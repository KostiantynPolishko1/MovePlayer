#pragma once

#ifndef MOVE_H
#define MOVE_H

#include <iostream>

class IMove
{
public:
	virtual void move(short& row, short& col) = 0;
}
;
#endif