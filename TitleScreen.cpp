#include "raylib.h"
#include "settings.h"
#include "TitleScreen.h"

// Button Class Definition
TitleScreen::Button::Button() {

}

void TitleScreen::Button::DrawButton() {

}


// TitleText Struct Definition 
TitleScreen::TitleText::TitleText() {
	this->title = "Sorting Visualizer";
	this->titleWidth = MeasureText(title, xxlargeFont);
	this->titleHeight = xxlargeFont;
	this->titleXPos = (SCREENWIDTH - titleWidth) / 2;
	this->titleYPos = 300;
}

void TitleScreen::TitleText::DrawTitleText() {

}


// TitleWaterMark Definition
TitleScreen::TitleWaterMark::TitleWaterMark() {

}

void TitleScreen::TitleWaterMark::DrawTitleWaterMark() {

}


// Main TitleScreen Class Defintions
TitleScreen::TitleScreen() {
	
}



void TitleScreen::DrawTitleScreen() {


}


