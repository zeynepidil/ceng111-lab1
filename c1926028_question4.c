#include<stdio.h>

int main(void){
	char char1='A';
	char char2='S';
	char char3='P';
	
	printf("%c %c %c\n",char1,char2,char3);
	
	char1='P';
	char3='A';
	
	printf("%c %c %c",char1,char2,char3);
	
	return 0;
	
}
