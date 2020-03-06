#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int iN;
	cin >> iN;
	
	int iPisoActual = 1;
	int iTiempo = 0;
	
	int iSigPiso;
	int iTiempoNuevo;
	 
	for(int iCN; iCN < iN; iCN++)
	{
		cin >> iSigPiso;
		iTiempoNuevo = abs(iSigPiso - iPisoActual);
		iPisoActual = iSigPiso;
		
		iTiempo += iTiempoNuevo;
	}
		
		iTiempoNuevo = abs(1 - iPisoActual);
		iTiempo += iTiempoNuevo;
	
	cout << iTiempo << endl;
	return 0;
}
