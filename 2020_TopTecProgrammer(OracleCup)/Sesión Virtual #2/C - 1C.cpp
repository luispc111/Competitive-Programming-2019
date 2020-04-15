#include <iostream>

using namespace std;

int main() {
	
	int cases;
	cin >> cases;
	
	int n, m, total, aux;
	
	for(int i = 0; i < cases; i++){
		cin >> n >> m;
		total=0;
		for(int j = 0; j < n; j++){
			cin >> aux;
			total += aux;
		}
		
		if(total > m){
			cout << m << endl;
		}
		else{
			cout << total << endl;
		}
		
	}
	
	return 0;
}
