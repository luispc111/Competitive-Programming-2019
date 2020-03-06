// PROBLEM
// http://codeforces.com/problemset/problem/1075/A

#include <iostream>
using namespace std; 

int main(){

	unsigned long long int n, x, y;
	cin >> n;
	cin >> x >> y;
	unsigned long long int white = 1, whiteIt = 0, blackIt = 0, black = n;
	unsigned long long int min, max;
	
	if(x < y){
		min = x;
		max = y;
	} 
	else{
		min = y;
		max = x;
	}
	
	// white
	if(white < min){ whiteIt += min-white;}
	whiteIt += max-min;
	
	// black
	if(black > max){ blackIt += black-max;}
	blackIt += max-min;
	
	if(blackIt < whiteIt){
		cout << "Black" << endl;	
	}
	else{
		cout << "White" << endl;
	}
	
	return 0;
}
