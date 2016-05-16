//
//  Params.hpp
//  ParticleSystem
//
//  Created by Aditi Surana on 4/13/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Params_hpp */

class Params : public ofBaseApp{
public:
    void setup();
    ofPoint eCenter; //center of the emitter
    float eRad; // radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount
};
