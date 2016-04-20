
#pragma once

#include "ofMain.h"

#include <stdio.h>





class shapes{
public:
    // all variables
    int level;
    float side;
    float theta;
    float a;
    float h;
    
    
    // methods
    
    void star(float side, int level);
    void setTheta(float a);
    void branch(float h);
    
};