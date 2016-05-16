#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    w = 100;
    h = 100;
    
    ofBackground(255, 255, 255);
    ofSetBackgroundAuto(false);
    myImage.loadImage("cat.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char *data = myImage.getPixels();
   
    
   
    counter++;
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w;  x++) {
            
            int red = ofMap( sin(ofGetElapsedTimef()), -1, 1, ofNoise(0,1+counter), 255);
            int green = ofMap( cos(ofGetElapsedTimef()), -1, 1, ofNoise(0,1+counter), 255 );
            int blue = ofMap( tan(ofGetElapsedTimef()), -1, 1, ofNoise(0,1+counter), 255 );
            
            
            int alpha = 255;
            
            
            int index = 4 * ( x + w * y );
            cout << "indexs: " << index << endl;
            data[ index ] = red;
            data[ index + 1 ] = green;
            data[ index + 2 ] = blue;
            data[ index + 3 ] = alpha;
            
        }
    }
    
    myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
   // delete[] data;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor( 255, 255, 255 );
    int bpp = myImage.getPixels().getBitsPerPixel();
    
    myImage.draw( mouseX, mouseY );


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
