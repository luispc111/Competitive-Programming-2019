#include <iostream>
#include <set>

using namespace std;

int main(){

	int a, b;
	cin >> a >> b;

	long long arr[a];
	int arr2[a];
	int arr3[b];
	set<int> set;
	
	for(int i = 0; i<a; i++){
		cin >> arr[i]; 
		arr2[i] = 0;
	}
	
	for (int i = 0; i<b; i++){
		cin >> arr3[i];
	}


	int iCount = 0;
	for(int i = a-1; i>=0; i--){
		iCount++;
		set.insert(arr[i]);
		if (set.size() == iCount){
			arr2[i] = iCount;
		}
		else{
			arr2[i] = arr2[i+1];
			iCount--;
		}
		
	}
	
	for (int i = 0; i<b; i++){
		cout << arr2[arr3[i]-1] << endl;
	}
	
	
	return 0;
}
