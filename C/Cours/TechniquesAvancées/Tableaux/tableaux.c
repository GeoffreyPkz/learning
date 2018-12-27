#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int menu(){
	printf("Veuillez choisir l'opération sur le tableau\n");
	printf("1- Addition des valeurs du tableau\n");
	printf("2- Moyenne des valeurs du tableau\n");
	printf("3- Copie du tableau\n");
	printf("4- Valeur Max du tableau\n");
	printf("5- Ordonner le tableau\n");
	printf("Veuillez entrer votre choix\n");
	int choix = 0;
	scanf("%d",&choix);
	return choix;
}

int sommeTableau(int tableau[], int tailleTableau){
	
	int i = 0, somme = 0;
	for(i = 0; i<tailleTableau;i++){
		somme += tableau[i];
	}
	return somme;
}

double moyenneTableau(int tableau[], int tailleTableau){
	int i = 0;
	double somme = 0.0, moyenne = 0.0;
	for(i = 0;i<tailleTableau; i++){
		somme += tableau[i];
	}
	moyenne = somme/tailleTableau;

	return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau){
	int i = 0;
	for(i = 0;i<tailleTableau;i++){
		tableauCopie[i] = tableauOriginal[i];
	}
}

void afficheTab(int *tableau, int tailleTab){
	int i = 0;
	for (i=0;i<tailleTab;i++){
		printf("case numéro %d porte la valeur %d \n",i,tableau[i]);
	}
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax){
	int i = 0;
	for(i=0; i<tailleTableau;i++){
		if(tableau[i] > valeurMax){
			tableau[i] = 0;
		}
	}
}