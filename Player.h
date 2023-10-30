#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "MoveUp.h"
#include "MoveDown.h"
#include "MoveLeft.h"
#include "MoveRight.h"

class Player
{
private:
	char symbol;
	short row;
	short col;

public:
	Player() : symbol{'x'}, row{}, col{} {}

	void move(IMove* moveplayer) {
		moveplayer->move(this->row, this->col);
		setRow(this->row);
		setCol(this->col);
	}

public:
#pragma region getters
	short getRow() const {
		return this->row;
	}
	short getCol() const {
		return this->col;
	}
#pragma endregion

private:
#pragma region setters
	void setRow(short row) {
		this->row = row;
	}

	void setCol(short col) {
		this->col = col;
	}
#pragma endregion
}
;
#endif