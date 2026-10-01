#include <iostream>
using namespace std;

int main() {

	for (int overallCount = 1; overallCount <= 8; overallCount++) {
	
		for (int row = 1; row <= 6; row++) {
		
			for (int col = 1; col <= 4; col++) {
		
				cout << "loaded 1 candy into slot (" << col << ", " << row << "), count in slot is now " << overallCount << endl;
		
			}
	
		}
	
	}

	cout << "fully loaded!";

	return 0;

}