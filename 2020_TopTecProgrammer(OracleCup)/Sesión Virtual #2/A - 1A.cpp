#include <iostream>

using namespace std;

int main() {
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int aux, try1, try2, try3;
//	int count = 0;
//	int r1, r2, r3;
	
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	if(c > d){
		aux = c;
		c = d;
		d = aux;
	}
	
	try1 = 1;
	try2 = a-1;
	for(int i = 0; i < a; i++){
		try3 = c-try1;
		if(try1+try2+try3 == d){
			cout << try1 << " " << try2 << " " << try3 << endl;
			return 0;
		}
		try1++;
		try2--;
	}

	return 0;
}
