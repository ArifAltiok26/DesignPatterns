#pragma once
#include "Playable.hpp"
namespace YGV{
    class Gamepad : public Playable{
        public:
        void play()const override;
    };
}
