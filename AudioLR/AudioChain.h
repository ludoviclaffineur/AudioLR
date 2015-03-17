//
//  AudioChain.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__AudioChain__
#define __AudioLR__AudioChain__

#include <stdio.h>
#include "UAudio.h"
#include <vector>

class AudioChain{
public:
    AudioChain();
    AudioChain* link (UAudio* newUAudio);
    void process();
    void setOutput(float* output);
    //void clear();
private:
    std::vector <UAudio*> mBlocs;
};

#endif /* defined(__AudioLR__AudioChain__) */
