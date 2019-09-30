#include<stdio.h>


int 
main(int argc ,char*argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Erreur d'argument");
		return EXIT_FAILURE;
	}
	printf("bonjour le monddededee\n");
	return 0;
	
}
