//============================================================================
// Name        : Char_Array.cpp
// Description : S5_L43
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[]="good night!";
	cout << text << endl;

	for (int i = 0; i < sizeof(text); i++) {
		cout << i << ":" << text [i] << endl;
	}

	int k = 0;
	while (true) {
		if(text[k] == 0)	// detect NULL character
			break;
		cout << *(text + k) << flush;	//de-reference a pointer
		k++;
	}

	return 0;
}
