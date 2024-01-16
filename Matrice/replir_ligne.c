/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"


/*
  @breif : 	Cette fonction remplit la matrice avec les valeurs provenant du tableau
           	passé en paramètre, appelé 'tab'.
  
  @param a  :	variable de type matrice 
  @param tab:	tableau de meme dimasion que la matrice

  @return	  :	Ne retourne rien, car la matrice a été passée en paramètre sous 
  						forme de pointeur.
*/
void replir_ligne(t_matrice *a, int **tab)
{
  unsigned int i;
  unsigned int j;

  i = 0;
  j = 0;
  // verfication que le tableau n'est pas vide 
  // et 
  if (!tab || a->col == 0 || a->lig == 0 || !a->matrice)
    return ; // si la fonction est vrai alors j'arret la fonction 

  //les boucles vont me permettre de remplire la matrice avec les valeurs du tableau
  while(i < a->lig) //partie ligne
  {
    while (j < a->col) //partie colonne
    {
      a->matrice[i][j] = tab[i][j]; // copie cellule par cellule
      j++;
    }
    j = 0;
    i++;
  }
}
