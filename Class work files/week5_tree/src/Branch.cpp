//
//  Branch.cpp
//  week5_tree
//
//  Created by Aditi Surana on 3/2/16.
//
//

#include "Branch.hpp"


void Branch::setup(float _xPos, float _yPos,
                   float _length, float _width,
                   float _maxSplitPercentage,
                   float _maxSplitAngle,
                   float _maxSubdivisions,
                   float _maxSegments,
                   float _maxSegmentsSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color
                   ){
    
    //1. set incoming values to the last branch values
    
    xPos = _xPos;
    yPos = _yPos;
    length = _length;
    width = _width;
    maxSplitPercentage = _maxSplitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivisions = _maxSubdivisions;
    maxSegments = _maxSegments;
    maxSegmentsSinceStart = _maxSegmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;

    //2. check if the branch splits
    
    float r = ofRandomuf(); // this gives value btwn 0 & 1
    if(r > maxSplitPercentage && maxSegmentsSinceStart != maxSegments){
        split = true;
    } else {
        split = false;
    }
    
    //3. Draw current branch
    
    ofSetColor(color);
    ofSetLineWidth(int(width));
    ofDrawLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle));
    
    //4. update the values of exisiting branch
    
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = ofRandom(0.4, 0.8)*width;
    length = ofRandom(0.6, 0.8)*length;
    angle += curvature;
    curvature = ofRandom(0, 2*PI/360);
    maxSegmentsSinceStart++;
    
    //5.recursion
    if (maxSegmentsSinceStart <= maxSegments) {
        if (!split) {
            //do not split
            Branch subBranch;
            subBranch.setup(xPos, yPos, length, width, maxSplitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, maxSegmentsSinceStart, angle, curvature, color);
        } else {
            //split
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, maxSplitAngle);
            subBranch1.setup(xPos, yPos, length, width, maxSplitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, maxSegmentsSinceStart, angle1, curvature, color);
            
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos, length, width, maxSplitPercentage,
                             maxSplitAngle, maxSubdivisions, maxSegments, maxSegmentsSinceStart,
                             angle2, curvature, color);
            
            
            
            

        }
    }
    
    
    
    
}
