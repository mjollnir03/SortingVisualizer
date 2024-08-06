#include "raylib.h"
#include "settings.h"
#include "functions.h"
#include "TitleScreen.h"

// Main Function
int main(void) {
    InitWindow(SCREENWIDTH, SCREENHEIGHT, "Sorting Visualizer - By Ellmaer Ranjber");

    SetTargetFPS(60);  // Set our game to run at 60 frames-per-second

    // Variables 
    bool titleButtonClicked = false;


    // Main game loop
    while (!WindowShouldClose()) {  // Detect window close button or ESC key
        BeginDrawing();

        ClearBackground(backgroundColor);

        // Display Title Screen with title, button, and watermark
        TitleScreen* titleScreen = new TitleScreen();
        titleScreen->DrawTitleScreen();

        // Check if Title Screen button is clicked


        // Draw the grid with dots
        //DrawGridWithDots(screenWidth, screenHeight, 50);
        DisplayMousePosition();

        EndDrawing();

    }

    CloseWindow();  // Close window and OpenGL context

    return 0;
}


