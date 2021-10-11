#include <stdio.h>

int main()
{
	char c;				/* caractère courant */
	int debutdeligne = 0;	/* indique si nous sommes en début de ligne */


	/* On obtient le 1er element de la file */
	c = getchar();
	  
	/* itérations sur les éléments de la file à traiter */
	while ( c != EOF )
	{
		/* s'agit-il d'un passage à la ligne ? */
		if (c=='\n')
		{
			debutdeligne = debutdeligne + 1;
			if (debutdeligne<3)
				printf("%c",c);
		}
	
		/* s'agit-il d'un espace ou d'une tabulation */
		else if ( (c=='\t') || (c==' ') )
		{
			if (debutdeligne == 0)
				printf("%c",c);
		}
		else
		{
			printf("%c",c);
			debutdeligne = 0;
		}
		
		/* obtenir l'élément suivant */
		c = getchar();
	}
	
	return 0;
}

