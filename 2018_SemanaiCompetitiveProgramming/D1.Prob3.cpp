#include <iostream>

using namespace std;

int main (){
	long long a, b;
	cin >> a;
	cin >> b;
	bool bDone = 0;
			
		while (a && b && bDone == 0){
			
			if (a >= (2*b)){
				a = a % (2*b);
			}
			else if (b >= (2*a)){
				b = b % (2*a);
			}
			else{
				bDone = 1;
			}
		}
	
	cout << a << " " << b << endl;
	return 0;	
}

