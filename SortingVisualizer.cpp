#include "raylib.h"
#include "settings.h"
#include "functions.h"

// Main Function
int main(void) {
    InitWindow(screenWidth, screenHeight, "Sorting Visualizer - By Ellmaer Ranjber");

    SetTargetFPS(60);  // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose()) {  // Detect window close button or ESC key
        BeginDrawing();

        ClearBackground(backgroundColor);

        // in "functions.h"
        DrawTitleScreen();

        DrawText("- By Ellmaer Ranjber", 1050, 840, 50, boldColor);

        // Draw the grid with dots
        //DrawGridWithDots(screenWidth, screenHeight, 50);
        DisplayMousePosition();

        EndDrawing();

    }

    CloseWindow();  // Close window and OpenGL context

    return 0;
}


