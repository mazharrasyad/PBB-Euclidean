#include <iostream>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

using namespace std;

int main()
{
	mulai :	
	system("cls");

	int pbb, m, m1, m2, n, n1, n2, n3, q, r;
	int pilihan;

	cout << "Program PBB Euclidean";

	cout << "\n\n1. Mencari Nilai PBB Dengan Langkah - Langkah";
	cout << "\n2. Mencari Nilai PBB Langsung Tanpa Langkah - Langkah";
	cout << "\n3. Keluar";
	cout << "\n\nKetikkan Pilihan = "; 
	cin >> pilihan;
  
  switch (pilihan)
  {
    case 1:
    	system("cls");
    	cout << "Mencari Nilai PBB Dengan Langkah - Langkah";
    	cout << "\n\nMasukkan Nilai m = ";
		cin >> m;
		cout << "Masukkan Nilai n = ";
		cin >> n;
		r = 0;
		m2 = m;
		n3 = n;
		cout << endl;
		while (n != 0)
		{
			m1 = m;
			n1 = n;
			n2 = n;
			q = 0;
			while (m1 >= n1)
			{	
				n1 = n2;
				n1 = n1 * q;
				q++;
			}
			
			q = q - 2;
			r = m % n;
			cout << m << " = " << n << " * " << q << " + " << r << endl;
			m = n;
			n = r;
			if (r == 0)
			{
				q = 0;
				cout << m << " = " << n << " * " << q << " + " << r << endl;
			}
			else
			{
				continue;
			}
		}
		cout << endl << "PBB(" << m2 << "," << n3 << ") = ";
		cout << m << endl;
		cout << "\nPress Any Key To Continue...";
		getch();
		goto mulai;

	case 2:
    	system("cls");
    	cout << "Mencari Nilai PBB Langsung Tanpa Langkah - Langkah";
    	cout << "\n\nMasukkan Nilai m = ";
		cin >> m;
		cout << "Masukkan Nilai n = ";
		cin >> n;
		cout << endl << "PBB(" << m << "," << n<< ") = ";
		while (n != 0)
		{
			r = m % n;
			m = n;
			n = r;
		}
		cout << m << endl;
		cout << "\nPress Any Key To Continue...";
		getch();
		goto mulai;

    case 3:
		system("cls");
		return 0;

    system("cls");
    default: cout << "\nPilihan Tidak Ada Periksa Menu Pilihan.\nPress Any Key To Continue..."; 
    getch();
    goto mulai;
  }

}