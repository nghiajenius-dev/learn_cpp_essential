//============================================================================
// Name        : Pointers_and_Arrays.cpp
// Description : S5_L41
//============================================================================

// 1. Loop through an array using a pointer, with array element reference syntax
// 2. Loop through an array by incrementing a pointer
// 3. Loop through an array, stop by comparing two pointers

#include <iostream>
using namespace std;

int main() {
	string text_array[] = {"red", "green", "blue", "orange", "white", "yellow", "cyan"};
	cout << "String array size: " << sizeof(text_array) << endl;
	cout << "String size: " << sizeof(string) << endl;

	const int nElements = sizeof(text_array)/sizeof(string);
	cout << "Number of elements: " << nElements << endl;

	// 1. Loop through an array using a pointer, with array element reference syntax
	for(int i = 0; i < sizeof(text_array)/sizeof(string); i++){
		cout << text_array[i] << "\t"; // text_array[1] -> *(text_array+1)
	}
	cout << endl;

	// 2. Loop through an array by incrementing a pointer
	string *ptext_array = text_array;	// array name is a constant pointer -> &ptext_array[0]
	for(int i = 0; i < sizeof(text_array)/sizeof(string); i++, ptext_array++){	// increment address
		cout << *ptext_array << "\t";	//de-reference a pointer
	}
	cout << endl;

	// 3. Loop through an array, stop by comparing two pointers
	string *pStart = text_array;
	string *pEnd = &text_array[nElements-1]; //counting for 0
	while (true) {
		cout << *pStart << "\t";
		if(pStart == pEnd)
			break;
		pStart++;	// print the last string before break
	}

	return 0;
}
