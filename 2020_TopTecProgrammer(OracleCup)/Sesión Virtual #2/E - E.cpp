#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int number;
	cin >> number;
	
	int result = number;
	int max = pow(number, 0.5);
	int aux = 2;
	
	for(int i = 2; i <= max; i++){
		
		aux = i;
		while(number >= i*aux){
			result++;
			aux++;
		}
	}

	cout << result << endl;
	
	return 0;
}
