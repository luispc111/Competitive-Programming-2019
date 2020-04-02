#include <iostream>

using namespace std;

int main() {
	
	int HP;
	cin >> HP;
	
	if(HP%4 == 0){
		// D
		cout << "1 A" << endl;
	}
	else if(HP%4 == 1){
		// A
		cout << "0 A" << endl;
	}
	else if(HP%4 == 2){
		// C
		cout << "1 B" << endl;
	}
	else if(HP%4 == 3){
		// B
		cout << "2 A" << endl;
	}
	
	return 0;
}
