#include "raylib.h"
#include "settings.h"
#include "TitleScreen.h"

// Button Class Definition
TitleScreen::Button::Button() {
    // Button Rectangle
    this->rectWidth = 570;
    this->rectHeight = 100;
    this->rectXPos = (SCREENWIDTH - rectWidth) / 2;
    this->rectYPos = 475;
    this->rectangleColor = boldColor; 

    // Button Text
    this->buttonText = "Click to Start";
    this->buttonTextWidth = MeasureText(buttonText, largeFont);
    this->buttonTextXPos = rectXPos + (rectWidth - buttonTextWidth) / 2;
    this->buttonTextYPos = rectYPos + (rectHeight - largeFont) / 2;
    this->buttonFontSize = largeFont;
    this->buttonColor = backgroundColor; 
}


void TitleScreen::Button::DrawButton() {
    // Draw the Button
    DrawRectangle(this->rectXPos, this->rectYPos, this->rectWidth, this->rectHeight, this->rectangleColor);

    // Draw the Button Text
    DrawText(this->buttonText, this->buttonTextXPos, this->buttonTextYPos, this->buttonFontSize, this->buttonColor);

    //TESTING 
    DrawCircle(rectXPos, rectYPos, 20, RED);
    DrawCircle(rectXPos + rectWidth, rectYPos, 20, GREEN);
    DrawCircle(rectXPos, rectYPos + rectHeight, 20, BLUE);
    DrawCircle(rectXPos + rectWidth, rectYPos + rectHeight, 20, BLACK);

}

bool TitleScreen::Button::buttonClicked() {
    if (!IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        return false;
    }
    Vector2 mousePos = GetMousePosition();
    if (this->rectXPos <= static_cast<int>(mousePos.x) &&
        static_cast<int>(mousePos.x) <= this->rectXPos + this->rectWidth &&
        this->rectYPos <= static_cast<int>(mousePos.y) &&
        static_cast<int>(mousePos.y) <= this->rectYPos + this->rectHeight) {
        
        std::cout << "BUTTON CLICKED" << std::endl;
        return true;
    }
    

    return false;
}



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
    this->titleButton = new Button();
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


    //TESTING 
    this->titleButton->buttonClicked();
}


