/****************************************
* Paulus Linna
* IIA14SB
*
* Teht‰v‰kuvaus:
*
*	Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
*	tiedon k‰sittelyyn
*
* P‰iv‰m‰‰r‰ 13.11.2014
* Versio 1.0
*****************************************/
#include <iostream>
using namespace std;

void main()
{

	int nopeus[5] { 0, 0, 0, 0, 0 };
	int ind;
	int mittari;
	int *osoitin;
	osoitin = &mittari;

	cout << nopeus[0] << endl << nopeus[1] << endl << nopeus[2] << endl << nopeus[3] << endl << nopeus[4];

	for (ind = 0;; ind++)
	{
		if (ind == 5){ ind = 0; }
		*osoitin = (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5;

		cout << " => " << *osoitin << "km/h" << endl;
		cout << "Anna nopeus: ";
		cin >> nopeus[ind];
		if (nopeus[ind] < 0){ break; }

	}

}