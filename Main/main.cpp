//#include <iostream>
//using namespace std;
//
////void Sum(int a, int b)
////{
////	cout << a + b << endl;
////}
////
////
////void Sum(double a, double b)
////{
////	cout << a + b << endl;
////}
////
////
////void Sum(char a, char b)
////{
////	cout << a + b << endl;
////}
////
////template <class T>
////void Sum(T a, T b)
////{
////	cout << a + b << endl;
////}
////
////template <class T, class B>
////void Sum(T a, B b)
////{
////	cout << a + b << endl;
////}
//
//
//template < class K>
//void Array(K size)
//{
//	srand(unsigned(time(0)));
//	const int size = 10;
//	int arr[size];
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t j = 0; j < size; j++)
//		{
//			arr[j] = rand() % 101;
//			cout << arr[j] << " ";
//		}
//		cout << arr[i];
//	}
//}
//
//int main()
//{
//
//	//Sum(1, 2);
//	//Sum(1.3, 1.5);
//	//Sum('a', 'b');
//	Array(5);
//}




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

void main() {
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];

	// до сортировки
	for (int i = 0; i < SIZE; i++)
	{
		/*ar[i] = rand() % 20;
		cout << ar[i] << "\t";*/
		cout << "Enter a subject: " << i << ": ";
		cin >> ar[i];
	}
	cout << "\n Vivod: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	quickSortR(ar, 0, SIZE - 1);
	

	// после сортировки
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	cout << "\n\n" << "Sortirovka posle";
}

