#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int radio, crust;
	cin >> radio >> crust;
	
	int cases;
	cin >> cases;
	
	int x, y, r, count=0; 
	double len;
	for(int i = 0; i < cases; i++){
		cin >> x >> y >> r;
		len = pow((x*x)+(y*y),(0.5));
		if(len <= radio && len >= (radio-crust)){
			len += r;
			if(len <= radio && len >= (radio-crust)){
				len -= 2*r;
				if(len <= radio && len >= (radio-crust)){
					count++;
				}
			}	
		}	
	}
	cout << count << endl;
	
	return 0;
}
