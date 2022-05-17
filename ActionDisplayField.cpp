#include <iostream>

using namespace std;

// display
void actionDisplayField(int** ships) {
	
	for (int i = 0; i < 10; i++) {
		cout << "|";
		
		for (int j = 0; j < 10; j++) {
			cout << " " << ships[i][j] << "|";
			
		}
		cout << endl;
		
	}
	
}
