#include<stdio.h>
int main(){
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	printf("The table is -----\n");

	for(int i = 1; i <= 20;i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
	
	printf("The table is printed now\n");
	return 0;
}

