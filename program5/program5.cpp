// program5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData()
{
	cout << "Masukan bilangan pertama : ";
	cin >> bilangan1;
	cout << "Masukan bilangan kedua : ";
	cin >> bilangan2;
}

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

int main()
{
    int pilihan;
	do {
        cout << " kalkulator sederhana" << endl;
        cout << "======================" << endl;
        cout << " 1. penjumlahan " << endl;
        cout << " 2. pengurangan " << endl;
        cout << " 3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. keluar " << endl;
        cout << "===============" << endl;
        cout << "masukan menu pilihan" << endl;
        cin >> pilihan;
    

        switch (pilihan)
        {
        case 1:
            inputData();
            cout << "Hasil penjumlahan = " << penjumlahan(bilangan1, bilangan2) << endl;
            break;
        case 2:
            inputData();
            cout << "Hasil pengurangan = " << pengurangan(bilangan1, bilangan2) << endl;
            break;
        case 3:
            inputData();
            cout << "Hasil perkalian = " << perkalian(bilangan1, bilangan2) << endl;
            break;
        case 4:
            inputData();
            cout << "Hasil pembagian = " << pembagian(bilangan1, bilangan2) << endl;
            break;
        case 5:
            break;
        
        default:
            cout << "Pilihan tidak ada " << endl;
            break;
           
        }

       
	}


    
       
}


