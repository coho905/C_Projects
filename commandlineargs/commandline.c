#include  <stdio.h>

int main(int argc, char *argv[]){
	printf("The program is named %s \n", argv[0]);

	for(int i =1; i<argc; i++){
		printf("Argument %i is %s \n", i, argv[i]);
	}

	printf("There were %i command line arguments provided\n", argc);

	return 0;
}
