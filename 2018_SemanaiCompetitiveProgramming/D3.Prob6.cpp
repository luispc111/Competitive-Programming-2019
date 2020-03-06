#include <iostream>

using namespace std;

int main(){
	
	string word;
	int n, p, q;
	
	string words[] = {""};
	
	cin >> n >> p >> q >> word;
		
	if (n/q < 2 && n/p < 2){
		cout << "-1" << endl;
	}
	else{
		char arr[n];
		for (int i = 0; i < n; i++){
			arr[i] = word[i];
		}
		
		bool bChange = 0;
		int iCount = 0, y=n, iLines = 0;
		
		while((iCount < n) && (y>=p||y>=q)){
			
			string stest = "";
			
			
			// Va a entrar para P
			if (bChange == 0){
				bChange = 1;
				//if (n/p >= 2){
				if (y/p >= 2){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						stest += arr[i];
						iCount++;
						y--;
					}
					words[iLines] = stest;
					iLines++;
					cout << endl;
				}
				else if (y/p >= 1 && y/q < 2){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						stest += arr[i];
						iCount++;
						y--;
					}
					words[iLines] = stest;
					iLines++;
					cout << endl;
				}
			}
			
			// Va a entrar para Q
			else if (bChange == 1){
				bChange = 0;
				//if (n/q >= 2){
				if (y/q >= 2){
					int x = iCount+q;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						stest += arr[i];
						iCount++;
						y--;
					}
					words[iLines] = stest;
					iLines++;
					cout << endl;
				}	
				else if (y/q >= 1 && y/p < 2){
					int x = iCount+q;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						stest += arr[i];
						iCount++;
						y--;
					}
					words[iLines] = stest;
					iLines++;
					cout << endl;
				}
				
			}
			cout << stest;
			stest = "";
			
//			cout << " las lineas son: " << iLines+1 << endl;
//			
//			for (int i = 0; i<=iLines; i++){
//				cout << words[i] << endl;
//			}
			
			//imprimir todas las mini palabritas aaaaahhhh
			
			
			
//			else if (y/q >= 1 && y/p >= 1){
//				if (y/p >= 1){
//					int x = iCount+p;
//					for (int i = iCount; i < x; i++){
//						cout << arr[i];
//						iCount++;
//						y--;
//					}
//					iLines++;
//					cout << endl;
//				}
//				else if (y/q >= 1){
//					int x = iCount+q;
//					for (int i = iCount; i < x; i++){
//						cout << arr[i];
//						iCount++;
//						y--;
//					}
//					iLines++;
//					cout << endl;
//				}
//			}
		}
	
	}
	return 0;
}
