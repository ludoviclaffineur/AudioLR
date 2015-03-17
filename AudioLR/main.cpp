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

int main(int argc, const char * argv[]) {
    // insert code here...

    
    AudioChain* myChain = new AudioChain();

    
    UASaw* SawSynth = new UASaw(4000, 256);

    myChain->link(SawSynth);

    AudioProcessor* myAudioProcessor = new AudioProcessor();
    myAudioProcessor->addChain(myChain);
    myAudioProcessor->play();


//    Chain* myChain = new Chain();
//
//    Bloc synth  = mySynth();
//    bloc effect = myEffect();
//    bloc in = myMic();
//    bloc2.setControlFreq(mySynth.getOutputControl());
////    myChain.add(in);
////    mychain.add(synth);
////    myChain.add(effect);
//
//    myChain->link(mic)->link(synth)->link(effect);
//
//    myChain.play();
//
//    std::cout << "Hello, World!\n";
//    SynthLR* mySynth = new GranularSynth(5000, 30); //canaux IN et OUT;
//    AudioLR myMic(2, 0); //canaux IN et OUT;
//    AudioLR myOutput (0,2);
//    //AudioLR
//
//    EffectLR* myEffect = new lowPassFilterFucker(4000,0.8);
//
//
//    myAudioLR.addEffect()
    int a ;
    std::cin >> a;

    delete myChain;
    delete myAudioProcessor;
    return 0;
}
