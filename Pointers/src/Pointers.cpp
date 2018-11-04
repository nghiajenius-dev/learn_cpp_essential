//============================================================================
// Name        : Pointers.cpp
// Description : S5_L39
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pdValue) {
	cout << "2. Before manipulation is: " << *pdValue << endl;
	*pdValue += 10;	// de-reference a pointer
	cout << "3. After manipulation is: " << *pdValue << endl;
}

int main() {
	int nValue = 9;
	cout << "Int value is: " << nValue << endl;
	int *pnValue = &nValue;	// address of nValue
	cout << "Address of int value is: " << pnValue << endl;
	cout << "Int value via pointer is: " << *pnValue << endl;

	cout << "==========================" << endl;
	double dValue = 102.3;
	cout << "1. Double value is: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. Result double value is: " << dValue << endl;

	return 0;
}
