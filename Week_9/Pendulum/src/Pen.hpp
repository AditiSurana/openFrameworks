

#ifndef Pen_hpp
#define Pen_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Pen_hpp */

class Pen{
public:
    
    float r;
    float angle;
    float aVel;
    float aAcc;
    
    ofVec2f origin;
    ofVec2f location;
    float size;
    
public:
    Pen();
    Pen(ofVec2f, float, float);
    void update();
    void display();
    
    
    
};
