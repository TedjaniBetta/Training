#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(int ac, char **av)
{
	int	nombreMystere;
	int	nombreEntier;
	const int	MAX;
	const int	MIN;

	nombreMystere = 0;
	nombreEntier = 0;
	MAX = 100;
	MIN = 1;
	srand(time(NULL)); 
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	while (nombreEntier != nombreMystere);
	{
		printf("Quel est le nombre ?");
		scanf("%d", &nombreEntier);
		if (nombreMystere > nombreEntier)
			printf("C'est plus !\n\n");
		else if (nombreMystere < nombreEntier)
			printf("C'est moins !\n\n");
		else
			printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
	}
	return (0);
}
