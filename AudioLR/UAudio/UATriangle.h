//
//  UATriangle.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 19/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__UATriangle__
#define __AudioLR__UATriangle__

#include <stdio.h>
#include "UAudio.h"

class UATriangle : public UAudio{
public:
    UATriangle(float freq, int bufferSize);
    void process();
private:
    float mFrequency;
    int mBufferSize;
    int mCursor;
    int mIncrement;
};

#endif /* defined(__AudioLR__UATriangle__) */
