

#include "shapes.hpp"
#include "ofApp.h"

void shapes::drawSquare(int sideLength){
    cout<<"Drawing outer Square"<<endl;
    ofSetColor(255);
    ofRect(ofGetWidth()/2 -150, ofGetHeight()/2 -150, sideLength, sideLength);
    ofSetColor(255, 0, 0, 90);
    ofRect(ofGetWidth()/2 -170, ofGetHeight()/2 -170, sideLength + 40, sideLength + 40);
    
    
}

void shapes::drawOuterDesign(){
    cout<<"Drawing outer design"<<endl;
    ofSetColor(255);
    ofRect(ofGetWidth()/2 -200, ofGetHeight()/2 -200, 400, 400);
    ofSetColor(0);
    ofEllipse(ofGetWidth()/2 + 100, ofGetHeight()/2 + 100, 210, 210);
    ofEllipse(ofGetWidth()/2 + 100, ofGetHeight()/2 - 100, 220, 220);
    ofEllipse(ofGetWidth()/2 - 100, ofGetHeight()/2 + 100, 230, 230);
    ofEllipse(ofGetWidth()/2 - 100, ofGetHeight()/2 - 100, 240, 240);
    
    

    
    
}


void shapes::drawCircle(int radius){
    cout<<"Drawing circles"<<endl;
    ofSetColor(0,0,0, 230);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 50, 50);
    ofSetColor(234, 23, 12, 130);
    ofEllipse(ofGetWidth()/2 + 50, ofGetHeight()/2 + 50, radius, radius);
    ofSetColor(34, 223, 12, 130);
    ofEllipse(ofGetWidth()/2 - 50, ofGetHeight()/2 - 50, radius, radius);
    ofSetColor(234, 223, 12, 130);
    ofEllipse(ofGetWidth()/2 + 50, ofGetHeight()/2 - 50, radius, radius);
    ofSetColor(34, 23, 212, 130);
    ofEllipse(ofGetWidth()/2 - 50, ofGetHeight()/2 + 50, radius, radius);
}



