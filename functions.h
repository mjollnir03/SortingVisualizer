#pragma once
#include "raylib.h"
#include "settings.h"

// Function declarations
// Function to help visualize spacing within application
void DrawGridWithDots(int screenWidth, int screenHeight, int dotSpacing);
// Function to help see current mouse position
void DisplayMousePosition();
void DrawCenteredTextWithButton(const char* text, int fontSize, int yPos, Color textColor, Color buttonColor, int buttonHeight, const char* buttonText);