#include<stdio.h>
#include"scopeglobals.h"
int THE_SIZE=100;
static int THE_AGE=31;
int get_age(){
	return THE_AGE;
}
void set_age(int age){
	THE_AGE=age;
}
double update_ratio(double new_ratio){
	static double ratio = 1.0;
	double old_ratio = ratio;
	ratio = new_ratio;
	return old_ratio;
}
void print_size(){
	printf("I think size is %d\n",THE_SIZE);
}

const char *MY_NAME="Daniel";
void scope_demo(int count){
	printf("Count is %d\n",count);
	if(count>10){
		int count =100;
		printf("Count in this scope is %d\n",count);
	}
	printf("Count is at exit %d\n",count);
	count = 3000;
	printf("Count after assignment: %d\n");
}
int main(){
	printf("My name is %s, age %d\n",MY_NAME,get_age());
	set_age(100);
	printf("My age is now: %d");
	printf("THE SIZE is %d", THE_SIZE);
	print_size();
	int count = 3;
	scope_demo(count);
	scope_demo(count * 20);
	printf("Count after calling scope demo: %d",count);
	return 0;

}
