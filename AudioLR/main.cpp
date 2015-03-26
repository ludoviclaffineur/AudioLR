//
//  main.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include <iostream>
#include "AudioChain.h"
#include "AudioProcessor.h"
#include "UASaw.h"
#include "UATriangle.h"
#include "UASquare.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    
    AudioChain* myChain = new AudioChain();

    
    UASaw* SawSynth = new UASaw(4000, 256);
    UATriangle* TriangleSynth = new UATriangle(4000, 256);
    UASquare* SquareSynth = new UASquare(4000,256);

    myChain->link(SquareSynth);

    AudioProcessor* myAudioProcessor = new AudioProcessor();
    myAudioProcessor->addChain(myChain);
    myAudioProcessor->play();

    int a ;
    std::cin >> a;

    delete myChain;
    delete myAudioProcessor;
    return 0;
}
