#include <iostream>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	string result = "";
	bool guion = false;
	
	result = s[0];
	
	for(int i = 0; i < s.length(); i++){
	
		if(s[i] == 45 && !guion){
			guion = true;
		}
		else if (guion){
			result += s[i];
			guion = false;
		}	
	
	}
	
	cout << result << endl;
	
	return 0;
}
