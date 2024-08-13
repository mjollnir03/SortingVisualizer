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
	this->fontSize = xxlargeFont;
	this->color = boldColor;
}

void TitleScreen::TitleText::DrawTitleText() {
    // Draw the Title
    DrawText(this->title, this->titleXPos, this->titleYPos, this->fontSize, this->color);
}

// TitleWaterMark Definition
TitleScreen::TitleWaterMark::TitleWaterMark() {
    this->text = "- By Ellmaer Ranjber";
    this->XPos = 1050;
    this->YPos = 840;
    this->fontSize = mediumFont;
    this->color = boldColor;
}

void TitleScreen::TitleWaterMark::DrawTitleWaterMark() {
    // Draw the Watermark Text
    DrawText(this->text, this->XPos, this->YPos, this->fontSize, this->color);
}

// Main TitleScreen Class Definitions
TitleScreen::TitleScreen() {
    this->titleButton = new Button(570, 100, 0, 475, boldColor, "Click to Start", backgroundColor, largeFont, true);
    this->titleText = new TitleText();
    this->titleWaterMark = new TitleWaterMark();
}

void TitleScreen::DrawTitleScreen() {
    // Draw the Title Text
    this->titleText->DrawTitleText();

    // Draw the Button
    this->titleButton->DrawButton();

    // Draw the Watermark
    this->titleWaterMark->DrawTitleWaterMark();

}


bool TitleScreen::TitleButtonClicked() {

    return this->titleButton->buttonClicked();
}

