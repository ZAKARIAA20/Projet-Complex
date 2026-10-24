#include <iostream>
#include "Complex.h";
using namespace std;
int main()
{
	Complex* C1 = new Complex(1, 2);
	Complex* C2 = new Complex(7, 6);
	double A = 3;
	Complex C3 = *C1 + A;
	Complex C4 = *C2 - A;
	Complex C5 = *C1 / A;
	Complex C6 = *C1 * A;
	Complex C7 = *C1 + *C2;
	Complex C8 = *C1 - *C2;
	Complex C9 = *C1 / *C2;
	Complex C10 = *C1 * *C2;
	bool C11 = *C1 == *C2;
	bool C12 = *C1 != *C2;
	bool C13 = *C1 < *C2;
	bool C14 = *C1 > *C2;
	cout << "operator par valeur :" << endl;
	C1->afficher();
	C2->afficher();
	C3.afficher();
	C4.afficher();
	C5.afficher();
	C6.afficher();
	cout << "operator par objet:" << endl;
	C7.afficher();
	C8.afficher();
	C9.afficher();
	C10.afficher();
	cout << "operator boolean par objet 1:TRUE 0: FALSE :" << endl;
	cout << "C11:" << C11 << endl;
	cout << "C12:" << C12 << endl;
	cout << "C13:" << C13 << endl;
	cout << "C14:" << C14 << endl;
	


	delete C1;
	delete C2;
	C1 = nullptr;
	C2 = nullptr;






}



// projetComplex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
