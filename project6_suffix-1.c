#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define maxima 5000//decide the maximum of array
int M; //make the M as global variable to read file in  open_file function and operate main function
/*
Author:Geonhee Choi-> This program read each file's string and if argument vector find NULL, print error but if operator does not reach NULL, then  check the length  of array from 
input and suffix arrays-> it reset or concatenate from input array and suffix array by length of array

*/
void open_file(FILE *fp); // function definition 



int main(int argc,char *argv[]){
	int i; // local variable

	printf("Enter the M =\n"); 
        scanf("%d",&M);//scan the  M  to compute a suffix with at most M characters 


	for(i=1;i<argc;i++){
	printf("%s:",argv[i]);  //print suffix and call the function for each of operation 
	open_file(fopen(argv[i],"r"));  //open the file and call the open_file function
        
	if(argv[i]==NULL){
	printf("Invalid REASON");  // if file is empty, then  print error

	exit(EXIT_FAILURE);
	}

	printf("\n");

	}


	return 0;
}
void open_file(FILE *fp){

        char ultramarine[maxima+1]=""; // make the input array and make the empty string to start program 
	char calga[maxima+1]="";  // make the suffix array and make the  empty string to start program
        int len=0; //make length variable
        while(fgets(ultramarine,maxima+1,fp)!=NULL){  //fgets to read the file

        if(strlen(ultramarine)-1>M){ //if input array's length is bigger then, continue
        continue;
        }
        if(strlen(ultramarine)-1>M-len){
                strcpy(calga,"");//if suffix array is bigger then , reset the suffix's string value

        }
        strncat(calga,ultramarine,strlen(ultramarine)-1); //after  both of if statement, concanate the input array's string and  suffix array

        len=strlen(calga); //check the length of the next word

        }

        printf("%s",calga); //print the suffix array
        fclose(fp);  //close file
        }

