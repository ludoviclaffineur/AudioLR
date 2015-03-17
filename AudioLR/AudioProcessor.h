//
//  AudioProcessor.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__AudioProcessor__
#define __AudioLR__AudioProcessor__

#include <stdio.h>
#include "AudioChain.h"
#include "portaudio.h"

class AudioProcessor{
public:
    AudioProcessor();
    void play();
    void stop();
    void addChain(AudioChain* chain);
    AudioChain* mAudioChain;
};

#endif /* defined(__AudioLR__AudioProcessor__) */
