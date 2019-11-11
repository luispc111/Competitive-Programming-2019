// PROBLEM
// http://codeforces.com/problemset/problem/999/A

#include <iostream>
using namespace std; 

int main(){

	int probs, skill, aux, aux2=0, total=0;
	bool gotti = false;
	cin >> probs >> skill;
	
	for(int i = 0; i < probs; i++){
		
		cin >> aux;
		
		if(!gotti){
			if(aux <= skill){
				total++;
			}
			else{
				gotti = true;
			}
		}
		else{
			if(aux <= skill){
				aux2++;
			}
			else{
				aux2=0;
			}
		}
	}
	
	cout << total+aux2 << endl;
	return 0;
}
