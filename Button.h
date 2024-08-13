#pragma once


// Button Class Declaration
class Button {
private:
    // Center horizontally 
    bool centerHorizontal;

    // Button Rectangle
    int rectWidth;
    int rectHeight;
    int rectXPos;
    int rectYPos;
    Color rectangleColor;

    // Button Text
    const char* buttonText;
    int buttonTextWidth;
    int buttonTextXPos;
    int buttonTextYPos;
    int buttonFontSize;
    Color textColor;

public:
    Button(int buttonWidth, int buttonHeight, int buttonXPos, int buttonYPos, Color buttonColor, const char* buttonText, Color textColor, int textFontSize , bool centerHorz);           // Constructor 
    void DrawButton();  // Method to draw the button
    bool buttonClicked(); // Method to see if title screen button is clicked
};