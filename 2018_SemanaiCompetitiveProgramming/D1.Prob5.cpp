#include <iostream>

using namespace std;

int main (){
	
	int n, x;
	bool bCheck = true;
	cin >> n;
	
	if (n%2 != 0){
		for (int i = 0; i < n; i++){
			cin >> x;
			if (i == 0 || i == n-1){
				if (x%2 == 0){
					bCheck = false;
				}
			}
		}	
	}
	else{
		bCheck = false;
	}
	
	if (bCheck){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}

	return 0;	
}
