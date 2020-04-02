#include <iostream>

using namespace std;

int main() {
	int persons, aux;
	cin >> persons;
	
	for(int i = 0; i < persons; i++){
		cin >> aux;
		if(aux == 1){
			cout << "HARD" << endl;	
			return 0;
		}
	}
	
	cout << "EASY" << endl;	
	return 0;
}
