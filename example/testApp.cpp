#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofEnableSmoothing();
	ofEnableAlphaBlending();
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofBackground(22, 22, 22, 255);

	chrono = ofxTimeMeasurements::instance();

}

//--------------------------------------------------------------
void testApp::update(){

	chrono->startMeasuring("update");	
	ofSleepMillis(1);	
	chrono->stopMeasuring("update");
}

//--------------------------------------------------------------
void testApp::draw(){

	
	chrono->startMeasuring("draw");
	ofSleepMillis(3);	
	chrono->stopMeasuring("draw");
	
	chrono->draw(10, 10);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}