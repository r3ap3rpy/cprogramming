#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight){
	struct Person *who = malloc(sizeof(struct Person));
	who->name = strdup(name);
	who->age = age;
	who->weight = weight;
	who->height = height;
	return who;
}
void Person_destroy(struct Person *who){
	assert(who != NULL);
	free(who -> name);
	free(who);
}
void Person_print(struct Person *who){
	printf("Name: %s\nAge: %d\nHeight: %d\nWeight: %d\n",who->name,who->age,who->height,who->weight);
}
int main(){
	struct Person *daniel = Person_create("Daniel",31,95,186);
	struct Person *florian = Person_create("Florian",30,60,180);
	printf("Daniel is in memory location %p",daniel);
	Person_print(daniel);	
	printf("Florain is in memory location %p",florian);
	Person_print(florian);

	daniel->age += 20;
	daniel->weight +=20;
	Person_print(daniel);

	Person_destroy(daniel);
	Person_destroy(florian);
	return 0;

}
