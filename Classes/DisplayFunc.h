#ifndef __DISPLAY_FUNC_H__
#define __DISPLAY_FUNC_H__

#include "cocos2d.h"

class DisplayFunc : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    void coupleParticleAction(int, int);
    
    // implement the "static create()" method manually
    CREATE_FUNC(DisplayFunc);
};

#endif // __DISPLAY_FUNC_H__