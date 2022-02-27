#include "Player.hpp"
#include "Playable.hpp"
namespace YGV{
    void Player::playSomeOne(Playable* playable){
        playable->play();
    }
}