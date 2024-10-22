#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

template <typename T>
void BusquedaBinaria(T valor,vector<T>& v, int ini, int fin)
{
	if(ini>fin)
		cout<<"No se encuentra el array\n";

	int medio=(ini+fin)/2;

	if(v[medio]==valor)
		return medio;
	else if(v[medio]>valor)
		return BusquedaBinaria(valor,v,ini,medio-1);
	else
		return BusquedaBinaria(valor,v,medio+1,fin);

}	
