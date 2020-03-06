// PROBLEM
// http://codeforces.com/problemset/problem/1110/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){

	int rupturas, longitud, tapes, aux, prevaux=0, tot = 0;
	cin >> rupturas >> longitud >> tapes;
	vector<int> vec;
		
	cin >> prevaux;
	for(int i = 1; i < rupturas; i++){
		cin >> aux;
		vec.push_back(aux-prevaux);
		prevaux = aux;
	}
	sort(vec.begin(), vec.end());
	
	while(tapes > 1){
		vec.pop_back();
		tot++;
		tapes--;
	}
	
	while(!vec.empty()){
		tot += vec.back();
		vec.pop_back();
	}
	
	cout << tot+1 << endl;
	
	return 0;
}
