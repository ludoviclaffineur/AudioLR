//
//  UASaw.h
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#ifndef __AudioLR__UASaw__
#define __AudioLR__UASaw__

#include <stdio.h>
#include "UAudio.h"

class UASaw : public UAudio{
public:
    UASaw(float freq, int bufferSize);
    void process();
private:
    float mFrequency;
    int mBufferSize;
    int mCursor;
};


#endif /* defined(__AudioLR__UASaw__) */
