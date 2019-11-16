#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	nombreMystere = 41; // Le nombre que tu doit trouver
	nombreEntier = 0; // Le nombre que tu entre
	MIN = 1;
	coups = 0; // Nombre de coups quand tu auras fini la partis
	continuerPartie = 1;
	choixNiveau = 0;
	choixMenu = 0;
	joueur = 0;
	i = 0;
	
	printf("\n\n=== JEUX DU PLUS OU MOINS===\n\n");

	printf("\n\n=== NIVEAU DE DIFFICULTE ===\n\n");
	printf("1. Entre 1 & 100\n");
	printf("2. Entre 1 & 1000\n");
	printf("3. Entre 1 & 10000\n");
	scanf("%d", &choixNiveau);

	while (choixNiveau < 1 || choixNiveau > 3)
	{
		printf("Recommence tu es allé trop loin\n");
		scanf("%d", &choixNiveau);
	}
	if (choixNiveau == 1)
	{
		printf("Welcome to the level 1 Beginner\n");
		MAX = 100;
	}
	if (choixNiveau == 2)
	{
		printf("Welcome to the level 2 Adepte\n");
		MAX = 1000;
	}
	if (choixNiveau == 3)
	{
		printf("Welcome to the level 3 Expert\n");
		MAX = 10000;
	}
	
	printf("===== CHOIX MENU =====\n\n");
	printf("1. Mode 1 joueur\n");
	printf("2. Mode 2 joueur\n");
	scanf("%d", &choixMenu);
	
	while (continuerPartie == 1)
	{
		while(choixMenu < 1 || choixMenu > 2)
		{
			printf("Recommence et arrête t'es bêtise !\n");
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
			printf("Joueur 2, ");
		}		
			
		while(nombreMystere != nombreEntier)
		{
			printf("Quel est le nombre ?");
			scanf("%d", &nombreEntier);
			coups++;
			if (nombreMystere > nombreEntier)
				printf("C'est plus !\n\n");
			else if (nombreMystere < nombreEntier)
				printf("C'est moins !\n\n");
			else
				printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", coups);
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
