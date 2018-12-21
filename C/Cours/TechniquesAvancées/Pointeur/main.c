#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convert(int *pHeures, int *pMinutes);

int main(int argc, char *argv[]){
	int heures = 0,minutes = 90;
	convert(&heures,&minutes);
	printf("%d heures et %d minutes",heures,minutes);
	return 0;
}

void convert(int *pHeures, int *pMinutes){
	*pHeures = *pMinutes / 60;
	*pMinutes = *pMinutes%60;
}
