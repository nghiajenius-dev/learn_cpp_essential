//============================================================================
// Name        : Reverse_String.cpp
// Description : S5_L44
//============================================================================

#include <iostream>
using namespace std;

void reverse_string (char *input_text) {
	int nElements = 0;
	while(*(input_text+nElements) != 0)
	{
		nElements++;
	}
	cout << "nElements: " << nElements << endl;

	for(int i = 0; i < nElements/2; i++){
		*(input_text+i) += *(input_text+nElements-1 -i);
		*(input_text+nElements-1 -i) = *(input_text+i) - *(input_text+nElements-1 -i);
		*(input_text+i)  = *(input_text+i) - *(input_text+nElements-1 -i);
	}
}

int main() {
	char text1[] = "hello world";

	// Method 1: temp
	int elements = sizeof(text1) - 1;
	cout << "original1: " << text1 << endl;
	for(int i = 0; i < elements/2; i++) {
		char temp = *(text1 + i);
		*(text1 + i) = *(text1 + elements-1 - i);
		*(text1 + elements-1 - i) = temp;
	}
	cout << "reversed1: " << text1 << endl;

	// Method 2: no temp
	char text2[] = "bye bye see you again";
	cout << "original2: " << text2 << endl;
	reverse_string(text2);
	cout << "reversed2: " << text2 << endl;
	return 0;
}
