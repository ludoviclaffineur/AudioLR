//
//  UATriangle.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 19/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include "UATriangle.h"


UATriangle::UATriangle(float freq, int bufferSize){
    mFrequency = freq;
    mBufferSize = bufferSize;
    mAudioBufferOut = new float[bufferSize];
    mCursor = 0;
    mIncrement = 1;
}
void UATriangle::process(){
    for (int i =0; i<mBufferSize; i++) {

        *mAudioBufferOut++ = ((float)(mCursor)*0.01f)-1.0;
        *mAudioBufferOut++ = ((float)(mCursor)*0.01f)-1.0;
        mCursor+=mIncrement;

        if (mCursor >= 200|| mCursor <= -200) {
            mIncrement*= -1;
        }
    }
}