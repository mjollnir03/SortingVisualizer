#pragma once
#include "settings.h"
// Title Screen Class Declarations

class TitleScreen {
private:
	
	class Button {
	private:
		// Button Rectangle 
		int rectWidth;
		int rectHeight;
		int rectXPos;
		int rectYPos;
		Color rectangleColor;

		//Button Text 
		const char* buttonText;
		int buttonTextWidth;
		int buttonTextXPos;
		int buttontextYPos;
		int buttonFontSize;
		Color buttonColor;

	public:
		Button();
		void DrawButton();

	};

	struct TitleText {
	private:
		const char* title;
		int titleWidth;
		int titleHeight;
		int titleXPos;
		int titleYPos;
		int fontSize;
		Color color;
	public:
		TitleText();
		void DrawTitleText();
		
	};

	struct TitleWaterMark {
	private:
		const char* text;
		int XPos;
		int YPos;
		int fontSize;
		Color color;
	public:
		TitleWaterMark();
		void DrawTitleWaterMark();

	};

public:
	// Class variables here ...
	Button* titleButton;
	TitleScreen* titleText;
	TitleWaterMark* titleWaterMark;
	
	
	TitleScreen();

	void DrawTitleScreen();

};