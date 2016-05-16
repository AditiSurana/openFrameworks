#pragma once

#include "ofMain.h"
#include "ofxGui.h"



class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    

    //sound
    ofSoundPlayer sound;
    
  
  
    
    //gui
    ofxPanel gui;
    ofxIntSlider random;
    ofxIntSlider pointSize;
    ofxIntSlider red;
    ofxIntSlider green;
    ofxIntSlider blue;
    ofxIntSlider toggleLines;
    ofxIntSlider toggleMouse;

    
    
    
    
    
    
    
};