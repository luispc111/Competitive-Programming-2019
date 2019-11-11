// PROBLEM
// http://codeforces.com/problemset/problem/1195/B

#include <iostream>
using namespace std; 

int main(){
	
	long long int moves, candies, sumatoria;
	cin >> moves >> candies;
	
	for (long long int i = 1; i <= moves; i++){
		sumatoria = (i*(i+1))/2;
		if(sumatoria-(moves-i) == candies){
			cout << (moves-i) << endl;
			return 0;
		}
	}

	return 0;
}

