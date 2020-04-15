#include <iostream>

using namespace std;

int main() {
	
	string text;
	cin >> text;
	
	if(text.length() == 0){
		cout << "0" << endl;
		return 0;
	}
	
	int a=0, other=0;
	for(int i = 0; i < text.length(); i++){
		if(text[i] == 'a'){
			a++;
			if(a > text.length()/2){
				cout << text.length() << endl;
				return 0;
			}
		}
		else{
			other++;
		}
	}
	
	cout << a + (a-1) << endl;
	return 0;
}
