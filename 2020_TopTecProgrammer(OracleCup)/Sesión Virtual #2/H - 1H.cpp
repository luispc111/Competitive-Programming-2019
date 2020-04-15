#include <iostream>

using namespace std;

int main() {
	
	int len1, len2;
	cin >> len1 >> len2;
	
	int cant1, cant2;
	cin >> cant1 >> cant2;
	
	int A, B, aux;
	
	for(int i = 0; i < len1; i++){
		cin >> aux;
		if(i == cant1-1){
			A = aux;
		}
	}
	
	for(int i = 0; i < len2; i++){
		cin >> aux;
		if(i == len2-cant2){
			B = aux;
		}
	}
//	cout << A << " " << B << endl;
	if(A < B){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}
