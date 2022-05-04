#include<stdio.h>

int main(int argc, char* argv[]){
	int i = 0;
	if (argc == 1) {
		printf("Only one argument is present!\n");
	} else if (argc > 1 && argc < 4) {
		for(i = 0; i < argc; i++)
		{
			printf("%s is %d argument\n",argv[i],i);
		}
	}
	else {
		printf("Too many arguments present!\n");
	}

	return 0;
}
