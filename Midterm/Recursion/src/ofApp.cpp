#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(20,20,20,30);
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //other art
    b = (mouseX / (float) ofGetWidth()) * 90;
    
    //art1
    array[3].setTheta(b);
    ofPushMatrix();
    ofTranslate(200, ofGetHeight());
    ofTranslate(0, -300);
    
    ofSetColor(30, 200, 180, 40);
    array[3].branch(210);
    ofPopMatrix();
    
    //art2
    array[4].setTheta(-b);
    ofPushMatrix();
    ofTranslate(200, ofGetHeight());
    ofTranslate(600, -300);
    
    ofSetColor(230, 200, 180, 40);
    array[4].branch(210);
    ofPopMatrix();
    
    
    //red thing
    ofPushMatrix();
    ofTranslate(ofGetWidth()/3, ofGetHeight()/2);
    mapNo = ofMap(mouseX, 0, ofGetWidth(), 0, 80);
    ofSetColor(230, 20, 80, 100);
    array[1].star(mapNo,4);
    ofPopMatrix();
    
    //red thing
    ofPushMatrix();
    ofTranslate(ofGetWidth()*2/3, ofGetHeight()/2);
    mapNo = ofMap(mouseX, 0, ofGetWidth(), 0, 80);
    ofSetColor(230, 20, 80, 100);
    array[2].star(mapNo,4);
    ofPopMatrix();
    
    
    //art3
    array[4].setTheta(b);
    ofPushMatrix();
    ofTranslate(0, ofGetHeight());
    ofTranslate(0, -300);
    
    ofSetColor(30, 200, 180, 40);
    array[4].branch(210);
    ofPopMatrix();
    
    
    
    
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
