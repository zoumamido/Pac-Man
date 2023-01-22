#include "soundcontroller.h"

SoundController::SoundController()
{
    mute = false;
    heroDeadTrigger = false;
}

void SoundController::startTheme(){
    if(!mute)
       PlaySound("converted_AlanWalker-Alone(MP3_160K).wav", NULL, SND_FILENAME | SND_LOOP);
}
