#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Déclaration des prototypes des fonctions
int menu();
int nombreMystere(int MAX);
//Initialisation des variables globales
const int MIN = 1;
int MAX = 0,continuerPartie = 1; 
int nombreMystere = 0, rep = 0;




int main(int argc, char const *argv[])
{
	printf("=======================================\n");
	printf("Bienvenue dans le jeu du plus ou moins!\n");
	printf("=======================================\n");

	do{
		//Choix du niveau de difficulté et assignation de la valeur MAX
		switch(menu()){
			case 1:
				printf("De 1 à 100! Ok! Petit joueur...\n");
				MAX = 100;
				break;
		case 2:
				printf("De 1 à 1000! On commence à se comprendre!\n");
				MAX = 1000;
				break;
		case 3:
				printf("De 1 à 10000! Tu as vraiment du temps à perdre!\n");
				MAX = 10000;
				break;
		default:
				printf("Pas de bras, pas de chocolat!\n");
				break;
		}		

		//Génération du nombre mystère
		int nombreMystere = &nombreMystere(MAX);

		int tmp = 0;
		do{
			printf("Donnez moi quelquechose...Un nombre évidemmment, c'est le jeu du plus ou moins\n");
			scanf("%d", &rep);
			if(rep > nombreMystere){
				printf("C'est moins!\n");
			}
			else if (rep < nombreMystere)
			{
				printf("C'est plus!\n");
			}
			else{
				printf("Oh!\n");
			}
		}while(rep == nombreMystere);

		//Message de victoire + score
		printf("Bravo, c'est trouvé! En exactement %d coups\n",tmp);

		printf("=======================================\n");
		printf("Voulez-vous continuer de jouer? (0/1) =\n");
		printf("=======================================\n");
		int ch;
		do{
			scanf("%d", &ch);
			if(ch != 0 || ch != 1){
				printf("J'ai besoin d'une réponse! Zéro ou Un! Comme ça -> 0 ou 1\n");
			}
			if(!ch){
				continuerPartie = 0;
				printf("Bye bye!\n");
			}
		}while(ch != 0 || ch != 1);
		printf("Chouette! On continue!\n");
	}while(!continuerPartie);
	return 0;
}


int menu(){
	printf("=======================================\n");
	printf("Plusieurs mode de jeu sont disponibles!\n");
	printf("=======================================\n");
	printf("Choix de vos limites!==================\n");
	printf("1- De 1 à 100        ==================\n");
	printf("2- De 1 à 1000       ==================\n");
	printf("3- De 1 à 10000      ==================\n");
	printf("=======================================\n");
	printf("Avez-vous choisi?======\n");
	int choix = 0;
		do{
			scanf("%d", &choix);
			if(choix != 1 || choix !=2 || choix != 3){
				printf("J'ai besoin d'une réponse sous forme de nombre compris entre 1 et 3! C'est pas compliqué!\n");
			}
		}while(choix != 1 || choix !=2 || choix != 3);
	return choix;
}

int nombreMystere(int MAX){
	printf("Laissez moi du temps pour choisir un nombre....\n");
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	printf("C'est bon j'ai choisi j'ai trouvé! Essayez de deviner pour voir!\n");
	return nombreMystere;
}