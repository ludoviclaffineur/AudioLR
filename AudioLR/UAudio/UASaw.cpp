//
//  UASaw.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include "UASaw.h"
#include <iostream>
UASaw::UASaw(float freq, int bufferSize){
    mFrequency = freq;
    mBufferSize = bufferSize;
    mAudioBufferOut = new float[bufferSize];
    mCursor = 0;
}

void UASaw::process(){
    for (int i =0; i<mBufferSize; i++) {
        mAudioBufferOut[i] = ((float)(mCursor)*0.01f)-1.0;
        mCursor++;

        if (mCursor >= 200) {
            mCursor= 0;
        }
    }
}
