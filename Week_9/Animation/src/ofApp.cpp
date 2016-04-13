#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 10, 28);
    
    pct = 0;
    myRectangle.pos.x = 10;
    myRectangle.pos.y = 10;
    myRectangle.catchUpSpeed = 0.03;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    pct += 0.1;
    
    if(pct>1){
        pct = 0;
    }
    
    myRectangle.interpolateByPct(pct);
    myRectangle.zenoToPoint(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
    myRectangle.draw();
    
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
