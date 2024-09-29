#include "raylib.h"
#include "settings.h"
#include "AlgorithmScreen.h"

AlgorithmScreen::AlgorithmScreen() {
	
}

void AlgorithmScreen::DrawAlgorithmScreen() {
	DrawText("Select an Algorithm Below!", 100, 50, mediumFont, boldColor);
}