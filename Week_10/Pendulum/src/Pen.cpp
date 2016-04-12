

#include "Pen.hpp"

Pen::Pen(){
    origin = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    r = 300;
    angle = 90;
   
}

Pen::Pen(ofVec2f origVal, float rVal, float startAngle){
    origin = origVal;
    r = rVal;
    angle = startAngle;
    
    
    
}

void Pen::update(){
    float gravity = 0.1;
    aAcc = (-1*gravity/r)*sin(angle);
    aVel += aAcc;
    angle += aVel;
  
}

void Pen::display(){
    location.set(r*sin(angle), r*cos(angle));
    location += origin;
    
    ofFill();
    ofSetColor(0);
    ofDrawLine(origin.x, origin.y, location.x, location.y);
    ofDrawCircle(location.x, location.y, 40);
}


