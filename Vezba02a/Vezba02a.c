// Vezba02a.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Binarno trazenje u sortiranom nizu

#include <stdio.h>

int main()
{
	// niz sortiranih celih brojeva
	int niz[20] = { 1, 2, 3, 4, 5, 6, 8, 8, 9 };
	// broj elemenata niza
	int n = 9;
	// broj koji se trazi
	int trazeni = 7;
	// leva i desna granica pretrage
	int levo = 0, desno = n - 1, sredina;
	while (levo <= desno)
	{
		sredina = (levo + desno) / 2;
		if (niz[sredina] == trazeni)
		{
			printf("Trazeni broj %d je na poziciji %d\n", 
				trazeni, sredina);
			break;
		}
		if (trazeni > niz[sredina])//trazeni je desno od sredine
			levo = sredina + 1; // trazeni je desno od sredine
		else //trazeni je levo od sredine
			desno = sredina - 1; // trazeni je levo od sredine
	}
	if(levo > desno) 
		printf("Trazeni broj %d nije u nizu\n", trazeni);

}

