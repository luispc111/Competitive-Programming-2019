// PROBLEM
// http://codeforces.com/problemset/problem/1130/A

#include <iostream>
using namespace std; 

int main(){

	int nums, n;
	cin >> nums;
	
	int iexpected = nums/2;
	if(nums%2 != 0){ iexpected++; }
	
	int pos=0, neg=0;
	for(int i = 0; i < nums; i++){
		cin >> n;
		if(n < 0){ neg++; }
		else if(n > 0){ pos++; }
	}
	
	if(pos >= iexpected){
		cout << "1" << endl;
	}
	else if (neg >= iexpected){
		cout << "-1" << endl;
	}
	else{
		cout << "0" << endl;
	}
	
	return 0;
}
