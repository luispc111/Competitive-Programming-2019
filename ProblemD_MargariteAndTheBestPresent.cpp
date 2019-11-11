// PROBLEM
// http://codeforces.com/problemset/problem/1080/B

#include <iostream>
using namespace std;

int main(){

    unsigned long long int queries, l, r;
    cin >> queries;
      
    for(unsigned long long int i = 0; i < queries; i++){
    	
		cin >> l >> r;
		
		if(l == r){
	    	if(r % 2 == 0){
	    		cout << r << endl;
			}
			else{
				cout << "-" << r << endl;
			}
		}
    	else if(l % 2 == 1 && r % 2 == 0){
    		cout << (r-(l+1))/2 +1<< endl;
		}
		else if(l % 2 == 1 && r % 2 == 1){
			cout << "-" << (l+r)/2 << endl;
		}
		else if(l % 2 == 0 && r % 2 == 0){
			cout << (l+r)/2 << endl;
		}
		else if(l % 2 == 0 && r % 2 == 1){
			cout << "-" << (((r-l)+1)/2) << endl;
		}
	}
	return 0;
}
