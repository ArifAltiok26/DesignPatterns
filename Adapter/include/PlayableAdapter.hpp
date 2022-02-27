#pragma once
#include "Playable.hpp"
namespace YGV{
    class PlayableAdapter : public Playable{
        public:
        virtual void play()const = 0;
    };
}