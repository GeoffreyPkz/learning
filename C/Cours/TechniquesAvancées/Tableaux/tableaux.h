#ifndef H_GL_TABLEAUX
#define H_GL_TABLEAUX

int menu();
int sommeTableau(int tableau[], int tailleTableau);
void afficheTab(int *tableau, int tailleTab);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

#endif
