#include<stdio.h>

int main(){
	int number[5] = {1};
	char name[5] = {'b'};
	printf("numbers %d %d %d %d %d\n",number[0],number[1],number[2],number[3],number[4]);
	printf("characters %c %c %c %c %c\n",name[0],name[1],name[2],name[3],name[4]);
	
	number[0] = 10;
	number[3] = 5;
	name[0] = 'a';
	name[3] = 'z';
	printf("numbers %d %d %d %d %d\n",number[0],number[1],number[2],number[3],number[4]);
        printf("characters %c %c %c %c %c\n",name[0],name[1],name[2],name[3],name[4]);

	char *another = "Daniel";
	printf("name %c %c %c %c %c %c\n",another[0],another[1],another[2],another[3],another[4],another[5]);
	printf("integer size %d\n",sizeof(int));
	printf("name size %d\n",sizeof(name));
	printf("another size %d\n",sizeof(another));
}
