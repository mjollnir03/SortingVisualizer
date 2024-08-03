#include "raylib.h"
#include "settings.h"
#include "TitleScreen.h"

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




// Main TitleScreen Class Defintions
TitleScreen::TitleScreen() {
	
}



void TitleScreen::DrawTitleScreen() {


}


