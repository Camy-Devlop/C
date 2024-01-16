/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/
#include "libmatrice.h"

/*
  @brief	 	: 	libaire la memoire a loue dynamiquement 

  @param	tab : 	tableau a louer
  @param	l	:	nombre de ligne dans le tableau  

  @return :
*/

void tab_int_rand(int **tab, unsigned int l, unsigned int c) 
{
    // Utiliser une variable statique pour suivre si la fonction a déjà été appelée
    static int estInitialise = 0;

    if (!estInitialise) {
        // Initialiser le générateur de nombres aléatoires avec le temps actuel
        srand((unsigned int)time(NULL));
        estInitialise = 1;
    }
    unsigned int  i;
    unsigned int  j;

    i = 0;
    j = 0;
    if (l == 0 || c == 0 || !tab)
    return ;
    while (i < l)
    {
        while (j < c)
        {
            tab[i][j] = rand() % 101;
            j++;
        }j = 0;
        i++;
    }
}
