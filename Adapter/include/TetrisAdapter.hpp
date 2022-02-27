#include "Playable.hpp"
namespace OtherWorld{
    class Tetris;
}
namespace YGV{
    class TetrisAdapter : public Playable{
        OtherWorld::Tetris* tetris;
        public:
        TetrisAdapter(OtherWorld::Tetris* tetris);
        void play()const override;
    };
}