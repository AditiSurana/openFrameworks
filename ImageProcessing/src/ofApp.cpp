#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cat.loadImage("cat.jpg");
    dog.loadImage("dog.jpg");
    monkey.loadImage("monkey.jpg");
    
    //ofSetFrameRate(1);
   // ofSetBackgroundAuto(false);
    ofSetBackgroundColor(255);
    
    
   
    counter = 0;
    ofEnableBlendMode( OF_BLENDMODE_MULTIPLY);
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  
    counter++;
    //ofDrawCircle(counter, ofGetHeight()/2, 20);
    
    
    
//    //for(int i=0; i<90; i=i+5){
//    ofPushMatrix();
//    ofTranslate(200, 0);
//    ofRotate(45+counter);
//    cat.draw(0, 0, cat.getWidth()/3, cat.getHeight()/3);
//    ofPopMatrix();
//    
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2 + 500, ofGetHeight()/2 + 100);
//    ofRotate(115+counter);
//    dog.draw(0, 0, dog.getWidth()/2, dog.getHeight()/2);
//    ofPopMatrix();
//    
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()-200, 200);
//    ofRotate(155+counter);
//    monkey.draw(0, 0, monkey.getWidth()/2, monkey.getHeight()/2);
//    ofPopMatrix();
//    //}
    
    ofSetColor(23 ,234, 255);
    cat.draw(0, 0, cat.getWidth()/3, cat.getHeight()/3);
    
    ofSetColor(233 ,234, 25);
    dog.draw(100, 100, dog.getWidth()/2, dog.getHeight()/2);
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
