/*=====================================
*
*    oO  coder RLE   Oo
*
*=====================================
*
* File : code.c
* Date : 10sept 09
* Author : Hilaire Thibault
*
*=====================================
*
* lire des caractères (jusqu'au caractère #) et les transformer 
* en couple entier n / caractere c tel que                            
*       c est un saut de ligne => n=0
*       c est # => n=-1
*       sinon n représente le nb de fois où le caractère c apparait consécutivement
*
* Notions: 
* - structure "lire, tant que pas fini, traiter, lire suivant"
* - boucle
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char car_cour;		/* caractère courant */
	char car_suiv;		/* caractère suivant */
	int n;				/* nbre d'occurences du caractère courant */
	
	/* lecture du 1er caractère */
	scanf("%c",&car_cour);
	
	/* boucle jusqu'à obtenir un '#' */
	while (car_cour!='#')
	{
		n=0;
		
		/* on relit un autre caractère
		   jusqu'a trouver un caractere different de car_cour */
		do 
		{
			scanf("%c",&car_suiv);
			n++;
		} while (car_suiv==car_cour);
		
		/* affiche le nombre d'occurence de ce caractère
  		   ou "0 M" s'il s'agit du passage à la ligne */
		if (car_cour!='\n')
			printf("%d %c ",n,car_cour);
		else
			printf("0 M\n");
		
		/* le dernier caractère lu (different de car_cour) devient
		   le prochain caractere à étudier */
		car_cour=car_suiv;
	}
	
	// affiche "-1 M" pour marquer la fin de fichier
	printf("-1 M\n");
	
	return EXIT_SUCCESS;
}