#include "raylib.h"
#include "settings.h"
#include "sstream"

void DrawGridWithDots(int screenWidth, int screenHeight, int dotSpacing);
void DisplayMousePosition();

int main(void)
{
    InitWindow(screenWidth, screenHeight, "Sorting Visualizer - By Ellmaer Ranjber");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(backgroundColor);

        DrawText("Sorting", 550, 300, 120, boldColor);
        DrawText("Visualizer", 480, 420, 120, boldColor);
        DrawText("- By Ellmaer Ranjber", 1050, 850, 50, boldColor);

        // Draw the grid with dots
        //DrawGridWithDots(screenWidth, screenHeight, 50);
        DisplayMousePosition();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context

    return 0;
}


void DrawGridWithDots(int screenWidth, int screenHeight, int dotSpacing)
{
    // Draw vertical lines with dots
    for (int x = 0; x <= screenWidth; x += dotSpacing)
    {
        DrawLine(x, 0, x, screenHeight, BLACK); // Draw vertical line

        // Draw dots at each vertical line
        for (int y = 0; y <= screenHeight; y += dotSpacing)
        {
            DrawCircle(x, y, 2, BLACK); // Draw dot
        }
    }

    // Draw horizontal lines with dots
    for (int y = 0; y <= screenHeight; y += dotSpacing)
    {
        DrawLine(0, y, screenWidth, y, BLACK); // Draw horizontal line
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