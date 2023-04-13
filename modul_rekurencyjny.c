#include "modul_rekurencyjny.h"

int modul_rekurencyjny_funkcji(int *tab, int x) {
	if(x==0) {
		tab[x]=1;
		return tab[x];
	} else if(x==1) {
		tab[x]=2;
		return tab[x];
	} else {
		tab[x]=2*modul_rekurencyjny_funkcji(tab,x-1)-modul_rekurencyjny_funkcji(tab,x-2)+1;
		return tab[x];
	}
}
