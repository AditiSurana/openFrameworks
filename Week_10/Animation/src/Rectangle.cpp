//
//  Rectangle.cpp
//  animations
//
//  Created by Aditi Surana on 4/6/16.
//
//

#include "Rectangle.hpp"

Rectangle::Rectangle(){
    //initial position
    posA.x = 10;
    posA.y = 10;
    
    //final position
    posB.x = mouseX;
    posB.y = mouseY;
}

void Rectangle::draw(){
    ofDrawRectangle(pos.x, pos.y, 100, 100);
    
}


void Rectangle::interpolateByPct(float myPct){
    pct = powf(myPct, 20); // myPct^2=myPct*myPct
    
    //pos.x = (1 - pct)*posA.x + pct*posB.x;
    //pos.y = (1 - pct)*posA.y + pct*posB.y;
    
    
}

void Rectangle::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed*catchX + (1 - catchUpSpeed)*pos.x;
    pos.y = catchUpSpeed*catchY + (1 - catchUpSpeed)*pos.y;
    
}
