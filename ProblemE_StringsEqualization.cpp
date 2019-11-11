// PROBLEM
// http://codeforces.com/problemset/problem/1241/B

#include <iostream>
#include <string>
using namespace std; 

bool compareString(string a, string b){
	for(int j=0; j<a.length(); j++){
		for(int k=0; k<b.length(); k++){
			if(a[j] == b[k]){
				cout << "YES" << endl;
				return true;
			}
		}
	}
	cout << "NO" << endl;
	return false;
}


int main(){
	
	string one, two;
	unsigned long long int tries;
	cin >> tries;
	
	for(int i = 0; i < tries; i++){
		cin >> one >> two;
		(compareString(one, two));
	}

	return 0;
}


