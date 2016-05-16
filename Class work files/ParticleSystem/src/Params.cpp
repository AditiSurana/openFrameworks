

#include "Params.hpp"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    //eCenter = ofPoint(mouseX, mouseY);
    eRad = 50;
    velRad = 200;
    lifeTime = 2.0;
    rotate = 90;
}