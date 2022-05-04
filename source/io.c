#include<stdio.h>
#include"dbg.h"

#define MAX_DATA 100

typedef enum EyeColor{
	BLUE_EYES, GREEN_EYES, BROWN_EYES, BLACK_EYES,OTHER_EYES
} EyeColor;
const char* EXE_COLOR_NAMES[] = {
	"Blue","Green","Brown","Black","Other"
};
typedef struct Person{
	int age;
	char first_name[MAX_DATA];
	char last_name[MAX_DATA];
	EyeColor eyes;
	float income;
} Person;
int main(){
	Person you = {.age = 0};
	int i = 0;
	char *in = NULL;
	printf("Whats your first name: ");
	in = fgets(you.first_name, MAX_DATA - 1, stdin);
	check(in != NULL, "Failed to read first name.");
	printf("Whats your last name: ");
	in = fgets(you.last_name, MAX_DATA - 1, stdin);
	check(in != NULL, "Failed to read last name.");
	printf("Your age: ");
	int rc = fscanf(stdin, "%d", &you.age);
	check(rc>0,"You have to enter a number.");
	return 0;
error:
	return -1;
}
