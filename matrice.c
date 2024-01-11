#include "libmatrice.h"
int main()
 {
 	t_matrices a;
 	a.lig = 4;
 	a.col = 4;
 	if (ft_init(&a) != NULL)
 	{
 	int **n;
 	n = ft_get_tab_2d(4, 4);
 	n[0][0] = 1;
 	n[0][1] = 2;
 	n[0][2] = 3;
 	n[0][3] = 4;
 	n[1][0] = 5;
 	n[1][1] = 6;
 	n[1][2] = 7;
 	n[1][3] = 8;
 	n[2][0] = 9;
 	n[2][1] = 1;
 	n[2][2] = 2;
 	n[2][3] = 3;
 	n[3][0] = 4;
 	n[3][1] = 5;
 	n[3][2] = 6;
 	n[3][3] = 7;
 	
 	ft_replir_ligne(&a,n);
 	
 	ft_affichage_matrice(a);
 	t_matrices c = ft_add_matrices(&a, &a);
 	printf("===================\n");
 	ft_affichage_matrice(c);
 	c = ft_multi_matrices(&a, &a);
 	printf("===================\n");
 	ft_affichage_matrice(c);
 	
 	ft_free_matrice(&a);
 	ft_free_matrice(&c);
 	ft_free_tab(n, 4);
 	}else
 		printf("ERROR");
 }
