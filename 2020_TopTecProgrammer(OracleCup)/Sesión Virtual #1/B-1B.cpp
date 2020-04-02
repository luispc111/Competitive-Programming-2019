#include <iostream>

using namespace std;

int main() {
	
	int cases, hours, mins;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		cin >> hours;
		cin >> mins;
		
		if(hours == 23){
			cout << 60-mins << endl;
		}
		else{
			cout << (23-hours)*60 + (60-mins) << endl;
		}
	}

	return 0;
}
