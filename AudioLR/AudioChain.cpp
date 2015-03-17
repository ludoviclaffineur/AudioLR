//
//  AudioChain.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include "AudioChain.h"

AudioChain::AudioChain(){

}

void AudioChain::process(){
    for (int i = 0; i<mBlocs.size(); i++) {
        mBlocs[i]->process();
    }
}

void AudioChain::setOutput(float* output){
    mBlocs[mBlocs.size()-1]->mAudioBufferOut = output;
}

AudioChain* AudioChain::link(UAudio *newUAudio){
    mBlocs.push_back(newUAudio);
    return this;
}