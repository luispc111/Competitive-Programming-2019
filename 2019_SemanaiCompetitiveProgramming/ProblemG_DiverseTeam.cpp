// PROBLEM
// http://codeforces.com/problemset/problem/988/A

#include <iostream>
#include <set> 
#include <iterator> 
#include <vector> 
using namespace std; 

int main(){

	set<int> mySet;
	vector<int> positions;
	
	int n, k, aux, actSize = 0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> aux;
		mySet.insert(aux);
		if(mySet.size() > actSize){
			actSize++;
			positions.push_back(i+1);	
		}
	}
	
	if(mySet.size() >= k){
		cout << "YES" << endl;	
//		while(!positions.empty()){
		while(k != 0){
			
			cout << positions[0];
			positions.erase(positions.begin());
			
			if(positions.size() != 0){cout << " ";}
			else{cout << endl;}
			k--;
		}
		cout << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}
