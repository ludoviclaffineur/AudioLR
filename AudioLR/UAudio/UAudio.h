//
//  UAudio.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__UAudio__
#define __AudioLR__UAudio__

#include <stdio.h>
#include "portaudio.h"

class UAudio{
public:
    virtual void process() = 0;
    float* mAudioBufferIn;
    float* mAudioBufferOut;
protected:

};

#endif /* defined(__AudioLR__UAudio__) */
