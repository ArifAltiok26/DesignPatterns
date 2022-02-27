#include "PlayableAdapter.hpp"
namespace OtherWorld{
    class Tetris;
}
namespace YGV{
    class TetrisAdapter : public PlayableAdapter{
        OtherWorld::Tetris* tetris;
        public:
        TetrisAdapter(OtherWorld::Tetris* tetris);
        void play()const override;
    };
}