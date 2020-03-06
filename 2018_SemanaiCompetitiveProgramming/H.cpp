#include <iostream>

using namespace std;

int main (){
	
	long long int n, m, bebs, click, parties;
	cin >> parties;
	
	for (long long x = 0; x < parties; x++){
		bebs =0;
		click=0;
		cin >> n >> m;
		bebs = n+1;
		
		for (long long i = 1; i<=n; i++){
			click += (n+1-i);
		}	
		
		if (click > m){
			cout << "Too drunk to count" << endl;
			break;
		}
		else if (click == m){
			cout << bebs << endl;
		}
		else{
			while (click <= m){
				click += n;
				bebs++;
				if (click == m){
					cout << bebs << endl;
					break;
				}
				else if (click > m){
					cout << "Too drunk to count" << endl;
				}
			}
		}
	}
	if (parties == 0){
		cout << "Too drunk to count" << endl;
	}

	
	return 0;
}
