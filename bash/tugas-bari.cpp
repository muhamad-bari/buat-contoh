#include <iostream>
using namespace std;
int main()
{
int waktu;
cout << "Set Timer (menit) : ";
cin >> waktu;
float faktor = (float) waktu / 60.0;
float harga = 5000;
/*
float discount;
if blabla
*/
float total = harga * faktor;
cout << "Total harga sewa " << total << endl;
return 0;
}

