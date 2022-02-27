#include "Player.hpp"
#include "Gamepad.hpp"
#include "Tetris.hpp"
#include "TetrisAdapter.hpp"


using namespace YGV;
int main(){
    Player* player = new Player;
    Playable* gamepad = new Gamepad;
    OtherWorld::Tetris* tetris = new OtherWorld::Tetris;



    player->playSomeOne(gamepad);
    
    //player->playSomeOne(tetris); 
    // This is where it throws an error.
    // Because tetris is not of the expected parameter type.


    player->playSomeOne(new TetrisAdapter(tetris)); // There are no errors. Because tetris adapts.


    return 0;
}