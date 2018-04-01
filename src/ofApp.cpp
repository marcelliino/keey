#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(keySize.setup("key size", 150, 80, 200));
    

}

//--------------------------------------------------------------
void ofApp::update(){
    keyGap = keySize/10;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPoint keyboardCenter(ofGetWidth()/2-((keySize+keyGap)*10)/2, ofGetHeight()/2-((keySize+keyGap)*3)/2);
    
    ofPushMatrix();
    ofTranslate(keyboardCenter);
    for (int h = 0; h < 3; h++) {
        ofTranslate(keyGap*h+20, 0);
        for (int i = 0; i < row[h]; i++) {
            if (keys[h]+i == num) {
                ofSetColor(255);
            } else {
                ofSetColor(0);
            }
            ofDrawRectRounded((keySize+keyGap)*i, (keySize+keyGap)*h, keySize, keySize, 20);
        }
    }
    ofPopMatrix();
    
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for (int i = 0; i < 26; i++) {
        if (key == qwerty[i]) {
            num = i+1;
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key) {
        num = 0;
    }

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}
