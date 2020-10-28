#include <stdio.h>

int main ()
{
	int p1, p2, media;
	
	printf ("Entre com a nota da p1: ");
	scanf ("%d", &p1);
	
	printf ("Entre com a nota da p2: ");
	scanf ("%d", &p2);
	
	media= (p1 + p2) / 2;
	
	printf ("A media final sera %d\n", media);
	
	if (media >= 60)
	{
		printf("Status: Aprovado \n\n");
	}
	else
	{
		printf ("Status: Reprovado \n\n");
	}
	return 0;
}
