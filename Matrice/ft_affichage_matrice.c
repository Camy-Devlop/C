/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"

void ft_affichage_matrice(t_matrices a)
{
	unsigned int i;
	unsigned int j;
 
 	i = 0;
 	j = 0;
 	while(i < a.col)
 	{
 		while(j < a.lig)
 		{
 			printf("%d ",a.mat[i][j]);
 			j++;
 		}
 		j = 0;
 		i++;
 		printf("\n");
 	}
 	
 }
