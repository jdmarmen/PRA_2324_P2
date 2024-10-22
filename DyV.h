#pragma once

#include <vector>
#include <stdexcept>
#include <iostream>
#include <utility>

using namespace std;

template <typename T>
int BusquedaBinaria(T valor,vector<T>& v, int ini, int fin)
{
	if(ini>fin)
	{
		throw invalid_argument("No se encuentra el array\n");
		return -1;
	}

	int medio=(ini+fin)/2;

	if(v[medio]==valor)
		return medio;
	else if(v[medio]>valor)
		return BusquedaBinaria(valor,v,ini,medio-1);
	else
		return BusquedaBinaria(valor,v,medio+1,fin);

}

template <typename T>
int Partition(vector <T>& v, int ini, int fin)
{
	T x=v[fin];
	int i=ini;
	for(int j=ini;j<=fin-1;j++)
	{
		if(v[j]<=x)
		{
			swap(v[i],v[j]);
			i++;
		}
	}
	swap(v[i],v[fin]);
	return i;
}

template <typename T>
void QuickSort(vector<T>& v, int ini, int fin)
{
	if(ini<fin)
	{
		int pivot=Partition(v,ini,fin);
		QuickSort(v,ini,pivot-1);
		QuickSort(v,pivot+1,fin);
	}

}
