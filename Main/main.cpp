
#include <iostream>
#include <time.h>
using namespace std;


void quickSortR(int a[], int B, int E)
{
	long i = B, j = E;
	int temp, p;
	p = a[(B + E) / 2];
	do
	{
		while (a[i] < p) i++;
		while (a[j] > p) j--;
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (B < j)quickSortR(a, B, j);
	if (i < E)quickSortR(a, i, E);
}





double Stupendia(int sum)
{
	double result = sum / 2;
	if (result == 10.7)
	{
		cout << "Stipendia budet: ";
	}
	else {
		cout << "Ne budet stipendia";
	}
	return result;
}




void main() {
	srand(time(NULL));
	const long SIZE = 10;
	int subject[SIZE];
	int newsubject;

	// до сортировки
	for (int i = 0; i < SIZE; i++)
	{
		/*ar[i] = rand() % 20;
		cout << ar[i] << "\t";*/
		cout << "Enter a subject: " << i << ": ";
		cin >> subject[i];
	}
	cout << "\n Vivod: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << subject[i] << "\t";
	}
	cout << "\n\n";

	for (size_t i = 0; i < 1; i++)
	{
		cout << "Enter a number subject: ";
		cin >> i;
		cout << "Enter new subject: ";
		cin >> newsubject;
		subject[i] = newsubject;
	}

	cout << "\nIzmenenie \n\n";

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << subject[i] << "\t";
	}

	cout << "\n";
	quickSortR(subject, 0, SIZE - 1);
	

	// после сортировки
	for (int i = 0; i < SIZE; i++) {
		cout << subject[i] << "\t";
	}
	cout << "\n\n" << "Sortirovka posle";

	cout << "\n";
	int sum = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		sum += subject[i];
	}
	cout << "Sum: " << sum << "\n";

	cout << " " << Stupendia(sum);

	


}

