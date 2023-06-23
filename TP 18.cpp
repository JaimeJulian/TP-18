#include<bits/stdc++.h>
using namespace std;

vector <int> GenerarVectorA (int n);
vector <int> GenerarVectorB (vector <int> A);
void MostrarVector (vector <int> V);

int main(){
	
	vector <int> A;
	vector <int> B;
	
	int n=10;
	
	A = GenerarVectorA (n);
	B = GenerarVectorB (A);
	
	cout<<"A: ";
	MostrarVector (A);
	cout<<"B: ";
	MostrarVector (B);
}

vector <int> GenerarVectorA (int n)
{
	vector <int> Aux;
	int pos, e;
	srand (time(NULL));
	
	for (pos = 0; pos < n; pos++)
	{
		e = rand()%100;	
		Aux.push_back (e);
	}
	
	return Aux;
}

vector <int> GenerarVectorB (vector <int> A)
{
	int pos;
	vector <int> B;
	
	for (pos = 0; pos < A.size(); pos++)
	{
		if (A [pos] % 2 == 0)
		{
			B.push_back (A [pos]);
		}
	}
	return B;
}

void MostrarVector (vector <int> V)
{
	int pos;
	
	for (pos = 0; pos < V.size(); pos++)
	{
		cout<<V [pos]<<"/"; 
	}
	cout<<endl;
}


