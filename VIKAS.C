#include<stdio.h>
int main(){
      FILE *file;
      char data[500];

      printf("enter data to write to the file\n");
      gets(data);

      file = fopen("output.txt","w");
      if(file == NULL){
	      printf("error opening file!\n");
	      return 0
      }
      fprintf(file,"%s",data);
      fclose(file);

      printf("data written to file successfully\n");
      return 0;
      }
























