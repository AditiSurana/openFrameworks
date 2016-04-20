

#include "shapes.hpp"
#include "ofApp.h"



void shapes::setTheta(float a){
    theta = a;
    
}

void shapes::branch(float h){
    
    shapes shapeNewObj;
    h *= 0.76;
    if(h>2){
        ofPushMatrix();
        ofRotate(theta);
        ofDrawLine(0, 0, 0, -h);
        ofTranslate(0, -h);
        shapeNewObj.branch(h);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        ofDrawLine(0, 0, 0, h);
        ofTranslate(0, h);
        shapeNewObj.branch(h);
        ofPopMatrix();
        
        
        
    }
    
    
}

void shapes::star(float side, int level){
    
    
    shapes shapeNew;
    
    if (level>0) {
        for (int i=0; i<10; i++) {
            
            ofDrawLine(0, 0, 0, side);
            ofTranslate(0, side/2);
            shapeNew.star((side/2), (level-1));
            ofRotate(45);
            
            
        }
    }
    
}


