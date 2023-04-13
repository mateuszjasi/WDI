#include "modul_iteracyjny.h"

int modul_iteracyjny_funkcji(int *tab, int x) {
	int i;
	for(i=0;i<x;i++) {
		if(i==0)
			tab[i]=1;
		else if(i==1)
			tab[i]=2;
		else
			tab[i]=2*tab[i-1]-tab[i-2]+1;
	}
	return tab[x-1];
}
