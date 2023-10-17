#include <iostream>
using namespace std;

int main()
{
    int tablica[] = { 10, 20, 30,5,4,3};
	int rozmiarTablicy = sizeof(tablica)/sizeof(int);

	for (size_t i = 0; i < rozmiarTablicy; i++)
	{
		cout << tablica[i] << endl;
	}

	cout << "--------------------------------------------------------------------------------------------" << endl;

	for (int i = rozmiarTablicy - 1; i >= 0; i--)
	{
		cout << tablica[i] << endl;
	}

    return 0;
}