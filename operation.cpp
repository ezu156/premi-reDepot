#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}
int multiplication(int a, int b)
{
	int resultat;
    resultat = a * b;
	return resultat;
}
int division (int a, int b)
{
	int resultat;
	resultat = a / b;
	return resultat;
}
int factoriel(int nb)
{
	if (nb==0)
	{
		return 1;
	}
		
	else 
	{
		return nb*factorielle(nb-1)
	}
	
}

	
