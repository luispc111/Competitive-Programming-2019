// PROBLEM 
// http://codeforces.com/problemset/problem/910/A

#include <iostream>
using namespace std; 

int newPos (string camino, long long int skill, long long int currPos){
	
	for(long long int i = skill; i > 0; i--){
		if(camino[currPos+i] == '1'){
			return currPos+i;
		}	
	}
	return -1;
}


int main(){
	
	long long int dist, skill, totJumps=0, currPos=0, aux=0;
	string camino;
	
	cin >> dist >> skill;
	cin >> camino;
	
	if(camino[0] == '0'){
		cout << "-1" << endl;
	}
	
	while(currPos != dist-1 || currPos == -1){
		
		if(currPos+skill >= dist){
			cout << totJumps+1 << endl;
			return 0;
		}
		
		if (newPos(camino, skill, currPos) == -1){
			cout << "-1" << endl;
			return 0;
		}
		else{
			currPos=newPos(camino, skill, currPos);
			totJumps++;
		}
	}
	
	cout << totJumps << endl;
	return 0;
}

