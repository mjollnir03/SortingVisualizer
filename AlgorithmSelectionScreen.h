#pragma once
#include "settings.h"
#include "Button.h"

/*6 Sorting algorithms:
1) Bubble Sort
2) Selection Sort
3) Insertion Sort
4) Merge Sort
5) Quick Sort
6) Heap Sort*/



class AlgorithmSelectionScreen {
private:
	struct Text1 {
		//work in progress
	};

public:
	// Class Variables 
	Button* bubbleSortButton; 
	Button* selectionSortButton;
	Button* insertionSortButton;
	Button* mergeSortButton;
	Button* quickSortButton;
	Button* heapSortButton;


	// Class Methods
	AlgorithmSelectionScreen();
	void DrawAlgorithmSelectionScreen();
	//

};