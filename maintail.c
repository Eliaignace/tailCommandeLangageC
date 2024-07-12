#include <stdio.h>
#include "tail.h"
int main (int argc,char *argv[]){
	FILE *fic=NULL;
	char chaine[100];
	int nbr_ligne;
	int n;
	open(&fic,argv[3]);
	n=cast(argv[2]);
	nbr_ligne=count(fic,chaine,n);
	open(&fic,argv[3]);
	tail(fic,nbr_ligne,chaine);
	
	return 0;
}

