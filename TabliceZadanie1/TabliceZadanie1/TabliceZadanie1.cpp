#include <iostream>
using namespace std;

int main()
{
    int tablica[5] = { 5, 10, 15, 20, 25 };
	for (size_t i = 0; i < 5; i++)
	{
		cout << "index = " << i << " " << tablica[i] << endl;
	}

	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	for (int i = 4; i >= 0; i--)
	{
		cout << "index = " << i << " " << tablica[i] << endl;
	}

    return 0;
}