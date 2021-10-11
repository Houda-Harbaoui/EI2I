/*=====================================
 *
 *    oO  décoder RLE   Oo
 *
 *=====================================
 *
 * File : decode.c
 * Date : 10sept 09
 * Author : Hilaire Thibault Modifié par Laurent Lambert
 *
 *=====================================
 *
 * convertir un texte (entrée standard) forme de couples
 *       entier n / caractere c                             
 *       n=0 -> on affiche un saut de ligne                    
 *       n=-1 -> on s'arrete                                   
 *       sinon -> on affiche n fois le caractere c 
 *
 * Notions: 
 * - structure "lire, tant que pas fini, traiter, lire suivant"
 * - boucle
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;	/* caractère lu */
    int nb;		/* entier lu */

    /* boucle tant que l'entier lu n'est pas -1 */
    do {		
        /* lecture du couple entier/caractère suivant */
        scanf("%d %c",&nb,&ch);

        /* affiche un saut de ligne ou le caractere répeté */
        if (nb==0)
            printf("\n");
        else
        {
            int i;
            for( i=0; i<nb; i++)
            {
                printf("%c",ch);
            }
        }
    } while (nb!=-1);
    return EXIT_SUCCESS;
}
