#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tableaux.h"

int rep = 1;


int main(int argc, char *argv[]){

	int tab[4] = {1,2,3,4};
	int tab2[4] = {0};
	int tab3[4] = {15,81,22,13};

	do{
		switch(menu()){
			case 1:
				printf("La somme du tableau est %d\n", sommeTableau(tab,4));
				break;
			case 2:
				printf("La moyenne des valeurs du tableau est : %f\n", moyenneTableau(tab,4));
				break;
			case 3:
				printf("tableau N°1:\n");
				afficheTab(tab,4);
				printf("Copie du tableau N°1\n");
				copie(tab,tab2,4);
				afficheTab(tab2,4);
				break;
			case 4:
				printf("Valeur Max du tableau, la valeur max est 20\n");
				printf("Le tableau de l'exercice est le suivant \n");
				afficheTab(tab3,4);
				printf("On applique la fonction maximumTableau : \n");
				maximumTableau(tab3,4,20);
				afficheTab(tab3,4);
				break;
			case 5:
				printf("\n");
				break;
			default:
				printf("Pas de choix?\n");
				break;
		}

		printf("Voulez-vous continuer?\n");
		scanf("%d",&rep);
	}while(rep);

	return 0;
}


