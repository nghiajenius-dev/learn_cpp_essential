//============================================================================
// Name        : Arithmetic.cpp
// Description : S5_L40
//============================================================================

#include <iostream>
using namespace std;
/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * *=
 * /=
 * %
 * %=
 * precedence
 */

// Format time from second to hh:mm:ss
void time_hhmmss(double sec) {
	int hh = sec/60/60;
	int mm = sec/60 - hh*60;
	int ss = sec - hh*60*60 - mm*60;
	cout << "Format hh:mm:ss >> " << hh << ":" << mm << ":" << ss << endl;
}

int main() {
	double input_second;
	cout << "Enter second >> ";
	cin >> input_second;
	time_hhmmss(input_second);

	cout << "Loading: ";
	for(int i = 0; i <= 100; i++) {
		if(!(i % 10)){
			cout << i << "...";
		}
	}
	return 0;
}
