// PROBLEM
// http://codeforces.com/problemset/problem/580/A

#include <iostream>
using namespace std; 

int main(){
	
	long long int cantidad, curr, prev, max=1, tot=1;
	cin >> cantidad;
	
	cin >> prev;
	for(long long int i = 1; i < cantidad; i++){
		
		cin >> curr;
		if(curr >= prev){
			tot++;
		}
		else{
			tot=1;
		}
		if(tot > max){
			max=tot;
		}
		prev=curr;
	}
	
	cout << max << endl;
	return 0;
}

