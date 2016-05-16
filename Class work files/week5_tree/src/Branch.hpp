//
//  Branch.hpp
//  week5_tree
//
//  Created by Aditi Surana on 3/2/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Branch_hpp */

class Branch : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos,
               float _length, float _width,
               float _maxSplitPercentage,
               float _maxSplitAngle,
               float _maxSubdivisions,
               float _maxSegments,
               float _maxSegmentsSinceStart,
               float _angle,
               float _curvature,
               ofColor _color
               );
    
private:
    float xPos,yPos;
    float length, width;
    float maxSplitPercentage;
    float maxSplitAngle;
    float maxSubdivisions;
    float maxSegments;
    float maxSegmentsSinceStart;
    float angle;
    float curvature;
    ofColor color;
    bool split;
    
};
