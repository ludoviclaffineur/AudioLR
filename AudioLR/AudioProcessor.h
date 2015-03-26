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

    static int AudioCallback( const void *inputBuffer, void *outputBuffer,
                       unsigned long framesPerBuffer,
                       const PaStreamCallbackTimeInfo* timeInfo,
                       PaStreamCallbackFlags statusFlags,
                       void *userData );
};

#endif /* defined(__AudioLR__AudioProcessor__) */
