//
//  AudioProcessor.cpp
//  AudioLR
//
//  Created by Ludovic Laffineur on 17/03/15.
//  Copyright (c) 2015 Ludovic Laffineur. All rights reserved.
//

#include "AudioProcessor.h"

#define SAMPLE_RATE   (44100)

int patestCallback( const void *inputBuffer, void *outputBuffer,
                   unsigned long framesPerBuffer,
                   const PaStreamCallbackTimeInfo* timeInfo,
                   PaStreamCallbackFlags statusFlags,
                   void *userData );



AudioProcessor::AudioProcessor(){


    /* Open an audio I/O stream. */
    }

void AudioProcessor::play(){

    PaStream *stream;
    PaError err;
    err = Pa_Initialize();

    printf("Erreur : %s", Pa_GetErrorText(err));
    err = Pa_OpenDefaultStream( &stream,
                               0,          /* no input channels */
                               2,          /* stereo output */
                               paFloat32,  /* 32 bit floating point output */
                               SAMPLE_RATE,
                               256,        /* frames per buffer */
                               patestCallback,
                               this );

    err = Pa_StartStream( stream );
    printf("Erreur : %s", Pa_GetErrorText(err));


}

void AudioProcessor::stop(){

}

void AudioProcessor::addChain(AudioChain* chain){
    mAudioChain = chain;
}

int patestCallback( const void *inputBuffer, void *outputBuffer,
                   unsigned long framesPerBuffer,
                   const PaStreamCallbackTimeInfo* timeInfo,
                   PaStreamCallbackFlags statusFlags,
                   void *userData )
{

    AudioProcessor* AP = (AudioProcessor*) userData;

    float* out =(float*) outputBuffer;
    AP->mAudioChain->setOutput(out);
    AP->mAudioChain->process();
    

    return 0;
}


