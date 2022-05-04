#include<stdio.h>
#include<ctype.h>

int printable(char c);
void printer(char arg[]);

void print_arguments(int argc, char* argv[]){
	int i = 0;
	for (i = 0; i<argc;i++){
		printer(argv[i]);
	}
}

void printer(char arg[]){
	for(int i = 0; arg[i]!='\0';i++){
		char ch = arg[i];
		if(printable(ch)){
			printf("'%c' = %d",ch,ch);
		}
	}
	printf("\n");
}

int printable(char ch){
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char* argv[]){
	print_arguments(argc, argv);
	return 0;
}
