#include "ofApp.h"

const int N = 256;		//Number of bands in spectrum
float spectrum[ N ];	//Smoothed spectrum values
float Rad = 500;		//Cloud raduis parameter
float Vel = 0.1;		//Cloud points velocity parameter
int bandRad = 2;		//Band index in spectrum, affecting Rad value
int bandVel = 100;		//Band index in spectrum, affecting Vel value
const int n = 350;		//Number of cloud points
float tx[n], ty[n];     //Offsets for Perlin noise calculation for points
ofPoint p[n];           //Cloud's points positions
ofPoint center, handlept, togglePt;  //Points to manipulate curve between two points
float time0 = 0;		//Time value, used for dt computing

string song1 = "music.mp3";
string song2 = "beat.wav";


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground( 255, 255, 255 );
   
    //sound
    sound.loadSound( song1 );
    sound.setLoop( true );
    sound.play();
    
    //Set spectrum values to 0
    for (int i=0; i<N; i++) {
        spectrum[i] = 0.0f;
    }
    
    center = ofPoint(0,0);
    
    
    //Initialize points offsets by random numbers
    for ( int j=0; j<n; j++ ) {
        tx[j] = ofRandom( 0, 1000 );
        ty[j] = ofRandom( 0, 1000 );
    }
    
    //gui
    gui.setup();
    gui.add(random.setup("Curve Point", 100, 40, 400));
    gui.add(pointSize.setup("Particle Size", 2, 1, 8));
    gui.add(red.setup("Red", 0, 0, 255));
    gui.add(green.setup("Green", 140, 0, 255));
    gui.add(blue.setup("Blue", 160, 0, 255));
    gui.add(toggleLines.setup("Toggle Lines", 1, 0, 2));
    gui.add(toggleMouse.setup("Toggle Mouse", 0, 0, 2));


    
  
}

//--------------------------------------------------------------
void ofApp::update(){
    //Update sound engine
    ofSoundUpdate();
    
    //Get current spectrum with N bands
    float *val = ofSoundGetSpectrum( N );
    
    for ( int i=0; i<N; i++ ) {
        spectrum[i] *= 0.97;	//Slow decreasing
        spectrum[i] = max( spectrum[i], val[i] );
    }
    
    
    float time = ofGetElapsedTimef();
    float dt = time - time0;
    dt = ofClamp( dt, 0.0, 0.1 );
    time0 = time; //Store the current time
    
    
    Rad = ofMap( spectrum[ bandRad ], 1, 3, 500, 1000, true );
    Vel = ofMap( spectrum[ bandVel ], 0, 0.1, 0.05, 0.5 );
    
    //Update particles positions
    for (int j=0; j<n; j++) {
        tx[j] += Vel * dt;	//move offset
        ty[j] += Vel * dt;	//move offset
        
        //Calculate Perlin's noise in [-1, 1] and
        //multiply on Rad
        p[j].x = ofSignedNoise( tx[j] ) * Rad;
        p[j].y = ofSignedNoise( ty[j] ) * Rad;
        
        handlept.x = ofSignedNoise( tx[j] ) * Rad;
        handlept.y = ofSignedNoise( ty[j] ) * Rad;
        togglePt = handlept;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();

    //Draw cloud
    
    //Move center of coordinate system to the screen center
    ofPushMatrix();
    ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );
    
    //Draw points
    ofSetColor( red, green, blue, 100);
    ofFill();
    for (int i=0; i<n; i++) {
        ofCircle( p[i], pointSize);
    }
    
    if(toggleMouse == 0){
        togglePt = handlept;
        
    }else{
        togglePt.x = mouseX;
        togglePt.y = mouseY;
    }
    
    
    if(toggleLines){
    //Draw lines between near points
    float dist = 40;	//Threshold parameter of distance
    for (int j=0; j<n; j++) {
        for (int k=j+1; k<n; k++) {
            if ( ofDist( p[j].x, p[j].y, p[k].x, p[k].y )
                < dist ) {
                //int random = ofRandom(0, 100);
                
                ofSetColor( red, green, blue, 20);
                ofDrawCurve(p[j].x, p[j].y, p[k].x, p[k].y, togglePt.x, togglePt.y, center.x-random, center.y - random);
                
            }
        }
    }
    }
    
    
    
    
    //Restore coordinate system
    ofPopMatrix();
    //cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == '1'){
        sound.stop();
        sound.loadSound( song2 );
        sound.setLoop( true );
        sound.play();
    }
    if(key == '2'){
        sound.stop();
        sound.loadSound( song1 );
        sound.setLoop( true );
        sound.play();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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