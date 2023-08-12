//digital clock in C code

#include <stdio.h>
#include <stdlib.h> 

//digital clock in C code

int main() {
	
	int h,m,s;
	int d=1000;
	
	printf("Enter the hour: ");
	scanf("%d",&h);
	printf("Enter the minute: ");
	scanf("%d",&m);
	printf("Enter the second: ");
	scanf("%d",&s);
	
	if(h>12||m>59||s>59){
	    printf("Invalid Input");
	}
	
	while(1) {
	    s++;
	    if (s>59){
	        s=0;
	        m++;
	    }
	    if (m>59){
	        m=0;
	        h++;
	    }
	    if (h>12){
	        h=1;
	    }
	    printf("\rClock: %02d:%02d:%02d \n",h,m,s);
        fflush(stdout);
        usleep(1000000);
        system("cls");
	}
	
	
return(0);
}