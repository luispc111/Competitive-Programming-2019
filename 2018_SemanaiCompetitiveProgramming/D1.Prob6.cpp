#include <iostream>

using namespace std;

int main (){
	
	int s, v1, v2, t1, t2, jug1 = 0, jug2 = 0;
	
	cin >> s >> v1 >> v2 >> t1 >> t2;
	
	jug1 += 2*t1 + v1*s;
	jug2 += 2*t2 + v2*s;
	
	if (jug1 < jug2){
		cout << "First";
	}
	else if (jug2 < jug1){
		cout << "Second";
	}
	else{
		cout << "Friendship";
	}

	return 0;	
}
