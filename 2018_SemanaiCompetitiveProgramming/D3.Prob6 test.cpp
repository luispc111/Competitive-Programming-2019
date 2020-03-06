#include <iostream>

using namespace std;

int main(){
	
	string word;
	int n, p, q;
	
	cin >> n >> p >> q >> word;
	
	int iLines = 0, iN = n;
	bool btesting = 0;
	

	
	while ((iLines < n) && (iN>=p||iN>=q)){
		if (btesting == 0){
			!btesting;
			if (iN/p >= 2){
				iLines++;
				iN--;
			}
			else if (iN/p >= 1 && iN/q < 2){
				iLines++;
				iN--;
			}
		}
		else{
			!btesting;
			if (iN/q >= 2){
				iLines++;
				iN--;
			}
			else if (iN/q >= 1 && iN/p < 2){
				iLines++;
				iN--;
			}
		}
	}
	
	cout << "Lineas: " << iLines;
	
	
//	
//	if (n/q < 2 && n/p < 2){
//		cout << "-1" << endl;
//	}
//	else{
//		char arr[n];
//		for (int i = 0; i < n; i++){
//			arr[i] = word[i];
//		}
//		
//		bool bChange = 0;
//		int iCount = 0, y=n, iLines = 0;
//		
//		while((iCount < n) && (y>=p||y>=q)){
//			
//			// Va a entrar para P
//			if (bChange == 0){
//				bChange = 1;
//				//if (n/p >= 2){
//				if (y/p >= 2){
//					int x = iCount+p;
//					for (int i = iCount; i < x; i++){
//						cout << arr[i];
//						iCount++;
//						y--;
//					}
//					iLines++;
//					cout << endl;
//				}
//				else if (y/p >= 1 && y/q < 2){
//					int x = iCount+p;
//					for (int i = iCount; i < x; i++){
//						cout << arr[i];
//						iCount++;
//						y--;
//					}
//					iLines++;
//					cout << endl;
//				}
//			}
//			
//			// Va a entrar para Q
//			else if (bChange == 1){
//				bChange = 0;
//				//if (n/q >= 2){
//				if (y/q >= 2){
//					int x = iCount+q;
//					for (int i = iCount; i < x; i++){
//						cout << arr[i];
//						iCount++;
//						y--;
//					}
//					iLines++;
//					cout << endl;
//				}	
//				else if (y/q >= 1 && y/p < 2){
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
//
//		}
//	
//	
//	// imprimir todo
//	
//	
//	
//	}
	return 0;
}
