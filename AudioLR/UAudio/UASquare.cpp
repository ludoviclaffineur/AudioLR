//
//  UASquare.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 19/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include "UASquare.h"

UASquare::UASquare(float freq, int bufferSize){
    mFrequency = freq;
    mBufferSize = bufferSize;
    mAudioBufferOut = new float[bufferSize];
    mCursor = 0;
    mIncrement = 1;
}
void UASquare::process(){
    for (int i =0; i<mBufferSize; i++) {

        *mAudioBufferOut++ = mIncrement;
        *mAudioBufferOut++ = mIncrement;
        mCursor+=mIncrement;

        if (mCursor >= 200 || mCursor <= -200) {
            mIncrement*= -1;
        }
    }
}