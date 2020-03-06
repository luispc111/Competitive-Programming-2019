#include <iostream>

using namespace std;

int main(){

	string word;
	int n, p, q;

	cin >> n >> p >> q >> word;
//////////////////////////////////////////////77
        int iLines = 0;
        //cout << iLines << endl;
		char arr[n];
		for (int i = 0; i < n; i++){
			arr[i] = word[i];
		}

		bool bChange = 0;
		int iCount = 0, y=n;

		while((iCount < n) && (y>=p||y>=q)){

			// Va a entrar para P
			if (bChange == 0){
				bChange = 1;
				//if (n/p >= 2){
				if (y/p >= 2){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						iCount++;
						y--;
					}
					iLines++;
				}
				else if (y/p >= 1 && /*y/q < 2*/ (y-p>=0 || y/q > 2)){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						iCount++;
						y--;
					}
					iLines++;
				}
			}

			// Va a entrar para Q
			else if (bChange == 1){
				bChange = 0;
				//if (n/q >= 2){
				if (y/q >= 2){
					int x = iCount+q;
					for (int i = iCount; i < x; i++){
						iCount++;
						y--;
					}
					iLines++;
				}
				else if (y/q >= 1 && /*y/p < 2*/ (y-q>=0 || y/p > 2)){
					int x = iCount+q;
					for (int i = iCount; i < x; i++){
						iCount++;
						y--;
					}
					iLines++;
				}
			}

		}

		///////////////////////////////////////////////////////////




	if (n/q < 2 && n/p < 2 && (n!=p && n!=q)){
		cout << "-1" << endl;
	}
	else{
        cout << iLines << endl;
		char arr[n];
		for (int i = 0; i < n; i++){
			arr[i] = word[i];
		}

		bool bChange = 0;
		int iCount = 0, y=n;

		while((iCount < n) && (y>=p||y>=q)){

			// Va a entrar para P
			if (bChange == 0){
				bChange = 1;
				//if (n/p >= 2){

				if (y/p >= 2){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						iCount++;
						y--;
					}
					cout << endl;
				}
				else if (y/p >= 1 && /*y/q > 2*/ (y-p>=0 || y/q > 2)){
					int x = iCount+p;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						iCount++;
						y--;
					}
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
						iCount++;
						y--;
					}
					cout << endl;
				}
				else if (y/q >= 1 && /*y/p > 2*/ (y-q>=0 || y/p > 2)){
					int x = iCount+q;
					for (int i = iCount; i < x; i++){
						cout << arr[i];
						iCount++;
						y--;
					}
					cout << endl;
				}
			}

		}


	// imprimir todo



	}
	return 0;
}
