#include <iostream> 
using namespace std;

//------------Zadanie 1 ---------------------
//int main() {
//
//	int* ptr, * ptr1, * ptr2, a = 700, b = 255, c = 8;
//	
//	
//	
//	ptr = &a;
//	ptr1 = &b;
//	ptr2 = &c;
//	
//	
//	
//	
//	cout << "roznica: " << (*ptr) - (*ptr1) << endl;
//	cout << "srednia: " << (double)((*ptr) + (*ptr1) + (*ptr2)) / 3 << endl;
//	cout << "adres: " << ptr << endl;
//	cout << "wartosc: " << *ptr << endl;
//}
//-------------------------Zadanie 2 -------------------------------------
//int main()
//{
//	int n, k,p;
//	cout << "Podaj rozmiar tablicy: ";
//	cin >> n;
//	cout << "Podaj zakres tablicy: " << endl;
//	cin >> p;
//	cout << "Podaj koniec tablicy: " << endl;
//	cin >> k;
//
//
//	if (n>0)
//	{
//		if (p <= k)
//		{
//			int* tab = new int[n];
//			for (int i = 0; i < n; i++)
//			{
//				if(p<0)
//				tab[i] = rand() % (p + k + 1) - p;
//				if (p > 0)
//					tab[i] = rand() % (p + k + 1) + p;
//				if (p == 0)
//					tab[i] = rand() % (p + k + 1);
//				cout << "Wylosowane elementy: " << tab[i] << " Adres: " << &tab[i] << endl;
//				
//			}
//		}
//		else {
//			cout << "Podano zly przedzial" << endl;
//		}
//	}
//}
