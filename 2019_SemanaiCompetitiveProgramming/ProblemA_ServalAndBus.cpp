// PROBLEM
// http://codeforces.com/problemset/problem/1153/A

#include <iostream>
#include <limits>
using namespace std; 

int main(){

	int n,t;
	cin >> n;
	cin >> t;
	
	int s, d, iterator = 1;
	int currBest = INT_MAX, bestRoute;
	
	while(n--){
		cin >> s >> d;
		
		if(t < s && s-t < currBest){
			currBest = s-t;
			bestRoute = iterator;
		}	
		else{
			while(t > s){
				s += d;
			}
			if(s-t <= currBest){
				currBest = s-t;
				bestRoute = iterator;
			}
		}
		iterator++;
	}
	
	cout << bestRoute << endl; 
	
	
	return 0;
}
