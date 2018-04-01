#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void windowResized(int w, int h);
    
    ofxPanel gui;
    ofxIntSlider keySize;
    
    int keyGap;
    
    char qwerty[27] = "qwertyuiopasdfghjklzxcvbnm";
    int row[3] = {10,9,7};
    int keys[3] = {1,11,20};
    int num = 0;
    
		
};
