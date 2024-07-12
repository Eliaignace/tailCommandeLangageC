#include <stdio.h>
#include <stdlib.h>
#include "tail.h"
void open(FILE **fic,char *fichier){
	*fic=fopen(fichier,"r");
	if (*fic==NULL){
		printf ("error!!");
		exit (1);
	}
}

int count(FILE *fic,char* chaine,int n){
	int nbr_ligne=1;
	while(feof(fic)!=1){
		fgets(chaine,100,fic);
		nbr_ligne++;
	}
	nbr_ligne=nbr_ligne-n;
	fclose(fic);
	return nbr_ligne;
}

int cast (char *arg){
	int n;
	n=atoi(arg);
	return n;
}

void tail(FILE *fic,int nbr_ligne,char *chaine){
	int b=1;
	while (feof(fic)!=1){
		fgets(chaine,100,fic);
		b++;
		if (b>=nbr_ligne){
			printf("%s",chaine);
		}
	}
	fclose(fic);
}
