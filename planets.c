#include<stdio.h>
#include<string.h>
#define NUM_PLANETS 8
int main(int a, char *b[]){
	char *planet[] = {"mercury","venus","mars","earth","jupiter","saturn","neptune","uranus"};
	int i,j;
	for(i =1; i < a; i++){
		for(j = 0; j < NUM_PLANETS ; j++){
			if(strcmp(b[i],planet[j]) == 0){
				printf("%s is a %d planet \n",b[i],j+1);
				break;
			}
		}
		if(j == NUM_PLANETS)
		{
			printf("%s is not a planet\n",b[i]);
		}
	}
	return 0;
}

/*new comment */

/*to solve merge conflicts*/

