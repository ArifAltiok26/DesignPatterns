#include "TetrisAdapter.hpp"
#include "Tetris.hpp"
namespace YGV{
    TetrisAdapter::TetrisAdapter(OtherWorld::Tetris* tetris) : tetris(tetris){ }
    void TetrisAdapter::play()const{
        tetris->start();
    }
}