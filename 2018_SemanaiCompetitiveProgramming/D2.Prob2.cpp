#include <iostream>
using namespace std;

int main(){

	int a, b;
	cin >> a >> b;
	
	if (a > b){
		cout << "0" << endl;
	}
	else{
		int iCount = 1, aux = a;
		
		while (a < b){
			a += aux;
			iCount++;	
		}
		
		if (a == b){
			cout << iCount << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	
	return 0;
}
