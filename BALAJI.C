#include<stdio.h>
int main(){
	FILE *file;
	file=fopen("output.text","r");
	if(file == NULL){
	printf("file does not exist\n");
	}else{
		 printf("file exists\n");
		 fclose(file);
		 }
		 return 0;
	}
