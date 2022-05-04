#include<stdio.h>

int main(int argc, char* argv[]){
	int n;
	printf("Please enter a number: ");
	scanf("%d",&n);

	if(n<0){
		printf("This number is negative!\n");
	} else if (n>0){
		printf("The number is positive!\n");
	} else {
		printf("The number is zero!\n");
	}
	int j = 10;
	for(int i=0;i<j;i++){
		if(i==2)
		{
			printf("Skipping 2\n");
			continue;
}
		printf("%d",i);	
		
	}
	printf("\n");
	int k = 5;
	while(k>=0){
		printf("%d",k);
		k--;
		if (k==2){
			printf("Premature termination!\n");
			break;
		}
	}
}
