#include <iostream>
#include <math.h>

using namespace std;

void promedioCentinela()
{
	int iV, iContador = 0;
	double dAcum = 0, dProm;
	
	cout << "Ingresa valor, para terminar teclea 0: ";
	cin >> iV;
	
	while (iV != 0)
	{
		dAcum += iV;
		iContador++;
		
		cout << "Ingresa valor, para terminar teclea 0: ";
		cin >> iV;
	}
	
	if (iContador > 0)
	{
		dProm = dAcum / iContador;
		cout << "El promedio es: " << dProm << endl;
	}
	else
	{
		cout << "No se procesaron valores" << endl;
	}
}

int main()
{
	promedioCentinela();
	return 0;
}
