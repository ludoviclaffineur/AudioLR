//
//  UASquare.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 19/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__UASquare__
#define __AudioLR__UASquare__

#include <stdio.h>
#include "UAudio.h"

class UASquare : public UAudio{
public:
    UASquare(float freq, int bufferSize);
    void process();
private:
    float mFrequency;
    int mBufferSize;
    int mCursor;
    int mIncrement;
};



#endif /* defined(__AudioLR__UASquare__) */
