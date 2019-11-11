// PROBLEM
// http://codeforces.com/problemset/problem/1138/A

#include <iostream>
using namespace std; 

int main(){
	
	int sushi, ind, max=0, aux = 0;
	int ones=0, twos=0;
	cin >> sushi;
	
	while(sushi > 0){
		
		cin >> ind;
		
		if(ind == 1){
			if(aux==2 && ones != 0){
				ones = 0;
			}
			ones++;
		}
		
		else if(ind == 2){
			if(aux==1 && twos != 0){
				twos = 0;
			}
			twos++;
		}
		
		if(min(ones, twos) > max){
			max = min(ones, twos);
		}
		
		aux = ind;
		sushi--;
		
//		cout << "ones" << ones << endl;
//		cout << "twos" << twos << endl;
		 
	}
	
	cout << max*2 << endl;
	
	return 0;
}

