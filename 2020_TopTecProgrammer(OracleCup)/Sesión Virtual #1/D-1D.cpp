#include <iostream>
#include <set>
using namespace std;

int main() {
	
	string word;
	cin >> word;
	
	int difLetters, res=0;
	cin >> difLetters;
	
	if(word.length() < difLetters){
		cout << "impossible" << endl;
		return 0;
	}
	
	set<char> s;
	int size = 0;
	
	for(int i = 0; i < word.length(); i++){
		s.insert(s.begin(), word[i]);
		if(s.size() == difLetters){
			cout << 0 << endl;
			return 0;
		}
	}
	
	if(word.length() - s.size() >= difLetters - s.size()){
		cout << difLetters-s.size() << endl;
		return 0;
	}
	
	cout << "impossible" << endl;
	return 0;
}
