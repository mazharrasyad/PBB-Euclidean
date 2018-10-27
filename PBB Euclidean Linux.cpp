#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	mulai :	

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
	cout << "\n";
    	cout << "Mencari Nilai PBB Dengan Langkah - Langkah";
    	cout << "\nMasukkan Nilai m = ";
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
		break;

	case 2:
	cout << "\n";
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
		break;

    case 3:
	return 0;

    default: cout << "\nPilihan Tidak Ada Periksa Menu Pilihan."; 
	cout << "\n\n";
   	goto mulai;
  }

}
