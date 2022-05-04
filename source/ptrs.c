#include<stdio.h>

int main(){
	int ages[] = {10,20,30,40,50};
	char *names[] = {
		"Daniel","Gabriel","Bab","Boris","Bella"
};
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for(i = 0; i<count; i++){
		printf("%s has %d years alive!\n",names[i], ages[i]);
}
	int *cur_age = ages;
	int **cur_name = names;

	for (i = 0; i<count; i++){
		printf("%s is %d years old.\n",*(cur_name +i),*(cur_age+i));
	}
	for (i = 0; i<count; i++){
		printf("%s is %d years old again!\n",cur_name[i],cur_age[i]);
	}
	for(cur_name = names,cur_age = ages;(cur_age - ages)<count;cur_name++,cur_age++){
		printf("%s lived %d years so far.\n",*cur_name,*cur_age);
}
}
