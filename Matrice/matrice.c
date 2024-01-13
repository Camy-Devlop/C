#include "libmatrice.h"
int main()
 {
 	t_matrice a;
 	a.lig = 4;
 	a.col = 4;
 	if (ft_init(&a) != NULL)
 	{
 	int **n;
 	n = ft_get_tab_2d(4, 4);
	n = tab_int_rand(n,a.lig,a.col);
 	ft_replir_ligne(&a,n);
 	
 	ft_affichage_matrice(a);
 	t_matrice c = ft_add_matrices(&a, &a);
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
