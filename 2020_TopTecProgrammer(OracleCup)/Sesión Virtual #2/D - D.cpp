#include <iostream>

using namespace std;

int main() {
	
	int bigW, cakes;
	cin >> bigW >> cakes;
	
	int a, b, aux=0;
	
	for(int i = 0; i < cakes; i++){
		cin >> a >> b;
		aux += a*b;
	}
	
	cout << aux/bigW << endl;
	return 0;
}
