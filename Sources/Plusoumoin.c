#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

int	main(int ac, char **av)
{
	int	nombreMystere;
	int	nombreEntier;
	int	MAX;
	int	MIN;
	int	coups;
	int	continuerPartie;
	int	choixNiveau;
	int	choixMenu;
	int	joueur;
	int	i;

	nombreMystere = 0;
	nombreEntier = 0;
	MIN = 1;
	coups = 0;
	continuerPartie = 1;
	choixNiveau = 0;
	choixMenu = 0;
	joueur = 0;
	i = 0;	
	printf("\n\n=-=-=-\033[30;01mBIENVEUE DANS LE JEUX DU PLUS OU MOINS\33[00m=-=-=-\n\n");

	printf("\n=-=-=-=-\033[30;01mTAPER UN DES CHIFFRES CORRESPONDANTS A LA DIFFICULTER\33[00m=-=-=-=-\n");

	printf("\n\n=-=-=-\033[30;01mNIVEAU DE DIFFICULTE\033[00m=-=-=-\n\n");
	printf("1 : Entre 1 & 100\n");
	printf("2 : Entre 1 & 1000\n");
	printf("3 : Entre 1 & 10000\n");
	scanf("%d", &choixNiveau);

	while (choixNiveau < 1 || choixNiveau > 3)
	{
		printf("Recommence tu es allé trop loin\n");
		scanf("%d", &choixNiveau);
	}
	if (choixNiveau == 1)
	{
		printf("\033[01;33mWelcome to the level 1 Beginner\033[00m\n");
		MAX = 100;
	}
	if (choixNiveau == 2)
	{
		printf("\033[1;35mWelcome to the level 2 Adepte\033[00m\n");
		MAX = 1000;
	}
	if (choixNiveau == 3)
	{
		printf("\033[01;32mWelcome to the level 3 Expert\033[00m\n");
		MAX = 10000;
	}
	
	printf("=-=-=-\033[30;01mCHOIX MENU\033[00m=-=-=-\n\n");
	printf("1. Mode 1 joueur\n");
	printf("2. Mode 2 joueur\n");
	scanf("%d", &choixMenu);
	
	while (continuerPartie == 1)
	{
		while(choixMenu < 1 || choixMenu > 2)
		{
			printf("Recommence et arrete tes betises jeune Padawan !\n");
			scanf("%d", &choixMenu);
		}	
		if (choixMenu == 1)
		{
			srand(time(NULL)); 
			nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		}
		if (choixMenu == 2)
		{
			printf("Joueur 1 : Rentre le premier nombre\n");
			scanf("%d", &nombreMystere);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("Joueur 2, ");
		}		
			
		while(nombreMystere != nombreEntier)
		{
			printf("Quel est le nombre ?");
			scanf("%d", &nombreEntier);
			coups++;
			if (nombreMystere > nombreEntier)
				printf("\033[32mC'est plus !\033[00m\n\n");
			else if (nombreMystere < nombreEntier)
				printf("\033[31mC'est moins !\033[00m\n\n");
			else
				printf ("\033[01;36mBravo, vous avez trouve le nombre mystere en %d coups !!!\033[00m\n\n", coups);
		}
		i++;
	printf("Voulez vous refaire une partis ?\n");
	printf("1. Oui\n");
	printf("ou\n");
	printf("2. Non\n");
	scanf("%d", &continuerPartie);
	}
	return (0);
}
	
