#include <iostream>

using namespace std;

int main() {
	
	int cakes, timeToBake, baking, timeSecondOven;
	cin >> cakes >> timeToBake >> baking >> timeSecondOven;
	
	while(cakes > 0){
		cakes -= baking;
		timeSecondOven -= timeToBake;
		
		if(cakes <= 0){
			cout << "NO" << endl;
			return 0;
		}
		else if(timeSecondOven == 0){
			if(cakes > baking){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
			return 0;
		}
		else if(timeSecondOven < 0){
			if(cakes > 0){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
			return 0;
		}
		
	}
	
	return 0;
}
