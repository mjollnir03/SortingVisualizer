#include "settings.h"
#include "Button.h"

// Button Class Definition
Button::Button(int buttonWidth, int buttonHeight, int buttonXPos, int buttonYPos, Color buttonColor, const char* buttonText, Color textColor, int textFontSize, bool centerHorz) {
    // Button Rectangle
    this->centerHorizontal = centerHorz;
    this->rectWidth = buttonWidth;
    this->rectHeight = buttonHeight;
    this->rectXPos = buttonXPos;
    if (this->centerHorizontal) {
        this->rectXPos = (SCREENWIDTH - rectWidth) / 2;
    }
    this->rectYPos = buttonYPos;
    this->rectangleColor = buttonColor;

    // Button Text
    this->buttonText = buttonText;
    this->buttonTextWidth = MeasureText(buttonText, largeFont);
    this->buttonTextXPos = rectXPos + (rectWidth - buttonTextWidth) / 2;
    this->buttonTextYPos = rectYPos + (rectHeight - largeFont) / 2;
    this->buttonFontSize = textFontSize;
    this->textColor = textColor;
}


void Button::DrawButton() {
    // Draw the Button
    DrawRectangle(this->rectXPos, this->rectYPos, this->rectWidth, this->rectHeight, this->rectangleColor);

    // Draw the Button Text
    DrawText(this->buttonText, this->buttonTextXPos, this->buttonTextYPos, this->buttonFontSize, this->textColor);

}

bool Button::buttonClicked() {
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


