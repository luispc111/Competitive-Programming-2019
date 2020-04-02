#include <iostream>

using namespace std;

int main() {
	
	unsigned long long int cases, number, division, total;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		
		total = 0;
		cin >> number;
		cin >> division;
		
		while(number != 0){
			if(number%division != 0){
				total += number%division;
				number -= number%division;
			}
			else{
				number = number/division;
				total++;
			}	
		}
		
		cout << total << endl;
	}

	return 0;
}
