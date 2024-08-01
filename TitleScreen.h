#pragma once
#include "settings.h"
// Title Screen Class Declarations
// 
// (Move definitions to "TitleScreen.cpp" file)

class TitleScreen {
private:
	
	struct TitleButton {
	public:
		int buttonHeight;
		int buttonWidth;
		const char* buttonText;
		TitleButton(int height, int width, const char* text) {
			this->buttonHeight = height;
			this->buttonWidth = width;
			this->buttonText = text;
		}
	};

	struct TitleButton {
	public:

	};

	struct TitleWaterMark {
	public:

	};

public:
	// Title Message variables
	const char* titleText;
	// Water mark 
	const char* waterMark;
	TitleButton* button;
	
	

	TitleScreen() {
		this->titleText = "Sorting Visualizer";
		this->titleText = "- By Ellmaer Ranjber";
		this->button = new TitleButton(10, 10, "Click to Start");
	}

	void DrawTitleScreen() {


		// Draw Water Mark, bottom right of screen
		DrawText("- By Ellmaer Ranjber", 1050, 840, 50, boldColor);
	}

};