#ifndef SOUNDCONTROLLER_H
#define SOUNDCONTROLLER_H
#include <windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <color.h>
#include <iostream>
#include <cmath>
#include <mmsystem.h>

using namespace std;
class SoundController
{
    public:
        /** Default constructor */
        SoundController();
        void startTheme();
        void heroShoot();
        void enemyShoot();
        void background();
        void heroDead(bool);
        void enemyDead();
        void clickStart();
        bool heroDeadTrigger;
        bool mute;
    protected:
    private:
};

#endif // SOUNDCONTROLLER_H
