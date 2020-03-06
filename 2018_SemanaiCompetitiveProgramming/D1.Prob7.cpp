#include <iostream>

using namespace std;

int main (){
	
	long long k, n;
	int arr[1000000], x=0;
	cin >> k >> n;
	
	for (int i = 0; i < 1000000; i++){
		arr[i] = -1;
	}
	
	int iTot = 0;
	
	while (n > 10){
		
		iTot += (n%10);
		arr[x] = (n%10);
		x++;
		n = n/10;
	}
	iTot += n;
	
	if (iTot >= k){
		cout << "0" << endl;
	} 
	else{
		int dif = k-iTot, iCont = 0, Min = 9, iX;		
		while (dif > 0){
			iCont++;
			for (int i = 0; i < x; i++){
				if (arr[i] <= Min && arr[i] >= 0){
					Min = arr[i];
					iX = i;
				}
			}
			arr[iX] = -1;
			
			dif -= (9 - Min);
			Min=9;
			
		}

		cout << iCont << endl;
	}

	return 0;	
}
