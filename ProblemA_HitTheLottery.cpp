// PROBLEM
// http://codeforces.com/problemset/problem/996/A

#include <iostream>
using namespace std; 

int main(){
	
	long long int money, bills=0, aux;
	cin >> money;
	
	if(money/100 > 0){
		aux = money/100;
		money -= aux*100;
		bills += aux;
		aux=0;
	}
	
	if(money/20 > 0){
		aux = money/20;
		money -= aux*20;
		bills += aux;
		aux=0;
	}
	
	if(money/10 > 0){
		aux = money/10;
		money -= aux*10;
		bills += aux;
		aux=0;
	}
	
	if(money/5 > 0){
		aux = money/5;
		money -= aux*5;
		bills += aux;
		aux=0;
	}
	
	if(money/1 > 0){
		aux = money/1;
		money -= aux*1;
		bills += aux;
		aux=0;
	}

	cout << bills << endl;
	return 0;
}

