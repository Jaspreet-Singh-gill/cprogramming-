#include<stdio.h>
#include<string.h>
#define MAS_LEN 60
#define MAX_LEN 50
int readline(char a[],int n);
int main(){
	int i,day,remind = 0,hr,min,sec,mon;
	char remender[MAX_LEN][MAS_LEN], day_str[4],message[MAX_LEN],time[10],month[3];
	for(;;){
		if(remind == MAX_LEN)
			break;

		printf("Enter the reminder : ");
		scanf("%2d",&mon);
		if(mon == 0)
                        break;
		scanf("%2d",&day);

                if(day == 0){                                       break;
                }
		scanf("%2d:%2d:%2d",&hr,&min,&sec);


		readline(message,MAS_LEN);
		sprintf(month,"%2.2d",mon);
		sprintf(day_str," %2.2d",day);
		sprintf(time," %2.2d:%2.2d:%2.2d",hr,min,sec);

		if(mon < 0){
			printf("Enter a valid month\n");
	                continue;

		}

		else if(mon > 12)
		{
			printf("Enter a valid month\n");
			continue;
		}
	         if(day <0){
			printf("Enter a valid day\n");
			continue;
		}
		else if(day > 31)
		{
			printf("Enter a valid day\n");
			continue;
		}

		if(hr < 0 && min < 0 && sec < 0)                  {                                                         printf("Enter a valid time\n");
			continue;
		}
		else if( hr > 24 && min > 60 && sec > 60){
			printf("ENTER a valid time\n");
			continue;
		
		}

		



		for(i = 0; i <remind;i++){
			if(strcmp(month,remender[i]) < 0)
				break;
			else if(strcmp(day_str,remender[i]+2) < 0)
				break;
			else if(strcmp(time,remender[i]+5) < 0)
				break;

		}

		for(int j = remind; j > i;j--)
			strcpy(remender[j],remender[j-1]);
		strcpy(remender[i],month);


		strcat(remender[i],day_str);
		strcat(remender[i],time);
		strncat(remender[i],message,(strlen(message)));
		remind++;
	}



	for(i = 0; i < remind; i++){
		printf("%s \n",remender[i]);}

	return 0;
}
int readline(char a[],int n){
	char *p,ch;
	int i = 0; 
	for(p= a;p < a+n;p++)
	{ 
		ch = getchar();
		if(ch == '\n')
			break;
		else{
			*p = ch;
			i++;
		}
	
	
	}
	*p = '\0';
	return i;
}



