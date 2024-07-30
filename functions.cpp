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

void DrawCenteredTextWithButton(const char* text, int fontSize, int yPos, Color textColor, Color buttonColor, int buttonHeight, const char* buttonText) {
    // Calculate text dimensions
    int textWidth = MeasureText(text, fontSize);
    int textHeight = fontSize;  // The height of the text is approximately the font size

    // Calculate text position
    int textX = (screenWidth - textWidth) / 2;  // Centered horizontally

    // Calculate rectangle dimensions and position
    int rectWidth = textWidth / 2;
    int rectX = (screenWidth - rectWidth) / 2;
    int rectY = yPos + textHeight + 40;  // Positioned directly beneath the text with some spacing

    // Draw the text
    DrawText(text, textX, yPos, fontSize, textColor);

    // Draw the rectangle centered underneath the text
    DrawRectangle(rectX, rectY + 20, rectWidth, buttonHeight, buttonColor);

    // Draw the button text
    int buttonTextWidth = MeasureText(buttonText, fontSize - 50);  // Adjust font size inside button
    int buttonTextX = rectX + (rectX - buttonTextWidth);
    int buttonTextY = rectY + 40;
    DrawText(buttonText, buttonTextX, buttonTextY, fontSize - 50, backgroundColor);
}
