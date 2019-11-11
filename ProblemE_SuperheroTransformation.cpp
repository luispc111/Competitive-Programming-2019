// PROBLEM
// http://codeforces.com/problemset/problem/1111/A

#include <iostream>
#include <string>
using namespace std; 

bool checkVowel(char c){
	if(c == 'a' || c == 'e' || c == 'i' ||c == 'o' ||c == 'u'){
		return true;
	}
	return false;
}

int main(){
	
	string hero1, hero2;
	cin >> hero1 >> hero2;
	
	if(hero1.length() != hero2.length()){
		cout << "No" << endl;
		return 0;
	}
	
	int size;
	(hero1.length() < hero2.length()) ? 
		size=hero1.length() : size=hero2.length();
	
	for(int i = 0; i < size; i++){
		if(checkVowel(hero1[i]) && !checkVowel(hero2[i])){
			cout << "No" << endl;
			return 0;
		}
		else if(!checkVowel(hero1[i]) && checkVowel(hero2[i])){
			cout << "No" << endl;
			return 0;
		}
	}
	
	cout << "Yes" << endl;
	return 0;
}


