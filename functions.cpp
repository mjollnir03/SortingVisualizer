#include "raylib.h"
#include "settings.h"

// Function definitions
void DrawGridWithDots(int screenWidth, int screenHeight, int dotSpacing) {
    // Draw vertical lines with dots
    for (int x = 0; x <= screenWidth; x += dotSpacing) {
        DrawLine(x, 0, x, screenHeight, BLACK);  // Draw vertical line

        // Draw dots at each vertical line
        for (int y = 0; y <= screenHeight; y += dotSpacing) {
            DrawCircle(x, y, 2, BLACK);  // Draw dot
        }
    }

    // Draw horizontal lines with dots
    for (int y = 0; y <= screenHeight; y += dotSpacing) {
        DrawLine(0, y, screenWidth, y, BLACK);  // Draw horizontal line
    }
}

void DisplayMousePosition() {
    // Get current mouse position
    Vector2 mousePos = GetMousePosition();

    // Convert mouse position to string
    std::stringstream ss;
    ss << "Mouse Position: (" << static_cast<int>(mousePos.x) << ", " << static_cast<int>(mousePos.y) << ")";

    // Display mouse position in black text
    DrawText(ss.str().c_str(), 10, 10, 20, BLACK);
}


void DrawTitleScreen() {

    const char* title = "Sorting Visualizer";

    // Calculate text dimensions
    int titleWidth = MeasureText(title, xxlargeFont);
    int titleHeight = xxlargeFont;

    // Calculate text x-pos, (cenetered horizontally)
    int titleXPos = (SCREENWIDTH - titleWidth) / 2;
    int titleYPos = 300;

    // Draw the Title
    DrawText(title, titleXPos, titleYPos, xxlargeFont, boldColor);

    // Declare Button attributes 
    int rectWidth = 570;
    int rectHeight = 100;

    int rectXPos = (SCREENWIDTH - rectWidth) / 2;
    int rectYPos = 475;

    // Draw the Button
    DrawRectangle(rectXPos, rectYPos, rectWidth, rectHeight, boldColor);

    const char* buttonText = "Click to Start";

    int buttonTextWidth = MeasureText(buttonText, largeFont);
    int buttonTextXPos = rectXPos + (rectWidth - buttonTextWidth) / 2;
    int buttontextYPos = rectYPos + (rectHeight - largeFont) / 2; // assuming a font size of 75 aka largeFont

    DrawText(buttonText, buttonTextXPos, buttontextYPos, largeFont, backgroundColor);

}

