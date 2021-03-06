#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxLaunchControllers.h"

class Controls {

public:

	Controls() = default;
	Controls(const Controls& other) = delete;
	~Controls() = default;
	
	void setup();
	void update();
	void draw();

	float getScale();
	int getFrameBufferSize();
	bool get_overdrive_frames() const;

private:
	
	ofxLaunchControl lc;

	ofxPanel gui;

	ofParameter<bool> show;
	ofParameter<float> scale;
	ofParameter<int> frameBufferSize;
	ofParameter<bool> overdrive_frames;

};