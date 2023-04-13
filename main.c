#include <stdio.h>
#include <stdlib.h>
#include "modul_main.h"

main() {
	int x,i;
	int *tab;
	printf("Wybierz metode: \n(0)Anuluj\n(1)Iteracyjnie\n(2)Rekurencyjnie\n");
	do
		scanf("%d", &i);
	while(i!=0 && i!=1 && i!=2);
	if(i==0)
		return 0;
	printf("Podaj ktory wyraz chcesz ciagu poznac: ");
	do
		scanf("%d", &x);
	while(x<0);
	x+=1;
	tab = (int*)malloc(x*sizeof(int));
	if(i==1)
		printf("%d wyraz tego ciagu to: %d\n", x-1 ,modul_iteracyjny_funkcji(tab,x));
	else if(i==2)
		printf("%d wyraz tego ciagu to: %d\n", x-1 ,modul_rekurencyjny_funkcji(tab,x-1));
	printf("Kolejne wartosci ciagu (do wyrazu %d):\n", x-1);
	for(i=0;i<x;i++)
		printf("F(%d) = %d\n",i,tab[i]);
	free(tab);
	return 0;
}
