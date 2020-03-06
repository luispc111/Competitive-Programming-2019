// PROBLEM
// http://codeforces.com/problemset/problem/831/A

#include <iostream>
using namespace std; 

int main(){

	int numbers, current, past;
	int condition = 0;
	// 0 entrando
	// 1 subida
	// 2 constante
	// 3 bajada
	
	cin >> numbers;
	for(int i = 0; i < numbers; i++){
		
		cin >> current;
		if(condition == 0){
			if(i==1){	
				if(past == current){
					condition = 2;
				}
				else if(past < current){
					condition = 1;
				}
				else if(past > current){
					condition = 3;
				}
			}
		}
		else if(condition == 1){
			if(current < past){
				condition = 3;
			}
			else if(current == past){
				condition = 2;
			}
		}
		else if(condition == 2){
			if(current > past){
				cout << "NO" << endl;
				return 0;
			}
			else if(current < past){
				condition = 3;
			}
		}
		else if(condition == 3){
			if(current >= past){
				cout << "NO" << endl;
				return 0;
			}
		}
		past = current;
	}
	
	cout << "YES" << endl;
	return 0;
}

