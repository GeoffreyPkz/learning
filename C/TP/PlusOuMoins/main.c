#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Constantes pour le tirage au sort d'un nombre entier 
const int MAX = 100, MIN = 1;
int nombreMystere = 0, rep = 0;




int main(int argc, char const *argv[])
{
	printf("=======================================\n");
	printf("Bienvenue dans le jeu du plus ou moins!\n");
	printf("=======================================\n");
	printf("Laissez moi du temps pour choisir un nombre....\n");
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	printf("C'est bon j'ai choisi j'ai trouvé! Essayez de deviner pour voir!\n");
	
	int tmp = 0;
	do{
		printf("Donnez moi quelquechose...Un nombre évidemmment, c'est le jeu du plus ou moins\n");
		scanf("%d",rep);
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

	printf("Bravo, c'est trouvé! En exactement %d coups\n",tmp);
	printf("Bye bye!\n");
	return 0;
}
