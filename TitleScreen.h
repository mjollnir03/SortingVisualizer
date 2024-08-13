#pragma once
#include "settings.h"
#include "Button.h"

// Title Screen Class Declarations
class TitleScreen {
private:

    // TitleText Struct Declaration
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
        TitleText();             // Constructor
        void DrawTitleText();    // Method to draw the title text
    };

    // TitleWaterMark Struct Declaration
    struct TitleWaterMark {
    private:
        const char* text;
        int XPos;
        int YPos;
        int fontSize;
        Color color;

    public:
        TitleWaterMark();            // Constructor
        void DrawTitleWaterMark();   // Method to draw the watermark
    };

public:
    // Class variables
    Button* titleButton;             // Pointer to Button
    TitleText* titleText;            // Pointer to TitleText
    TitleWaterMark* titleWaterMark;  // Pointer to TitleWaterMark

    TitleScreen();              // Constructor
    void DrawTitleScreen();     // Method to draw the entire title screen
    bool TitleButtonClicked();
};
