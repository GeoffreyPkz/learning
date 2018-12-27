#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//déclaration des prototypes des fonctions
int menu();
int sommeTableau(int tableau[], int tailleTableau);
void afficheTab(int *tableau, int tailleTab);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

//déclaration des variables
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