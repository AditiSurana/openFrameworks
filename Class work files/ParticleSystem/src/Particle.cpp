//
//  Particle.cpp
//  ParticleSystem
//
//  Created by Aditi Surana on 4/13/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live = false;
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, TWO_PI);
    pnt.x = cos(angle)*rad;
    pnt.y = sin(angle)*rad;
    return pnt;
}

void Particle::setup(){
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){
    
    if(live){
    //rotate velocity
    vel.rotate(0,0, param.rotate*dt);
    
    //update
    pos += vel*dt;
    
    time += dt;
    
    if(time>= lifeTime){
        
        live = false;
        
    }
    }

    
    
}




void Particle::draw(){
    
    if(live){
        
        float size = ofMap(time, 0, lifeTime, 1, 3);
        
        ofColor color = ofColor::red;
        
        float hue = ofMap(time, 0, lifeTime, 0, 150);
        
        color.setHue(hue);
        
        ofSetColor(color);
        
        ofDrawCircle(pos, size); 
        
    }
    
}