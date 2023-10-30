#include "Player.h"

int main()
{
    MoveUp moveUp;
    MoveDown moveDown;
    MoveLeft moveLeft;
    MoveRight moveRight;

    Player player;
    std::cout << "default:\t";
    std::cout << "row = " << player.getRow() << " | " << "col = " << player.getCol();

    player.move(&moveDown);
    std::cout << "row = " << player.getRow() << " | " << "col = " << player.getCol();

    player.move(&moveUp);
    std::cout << "row = " << player.getRow() << " | " << "col = " << player.getCol();

    player.move(&moveRight);
    std::cout << "row = " << player.getRow() << " | " << "col = " << player.getCol();
    
    player.move(&moveLeft);
    std::cout << "row = " << player.getRow() << " | " << "col = " << player.getCol();

    std::cout << "\n";

    return 0;
}
