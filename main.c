#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct string {
 char *str;
}string_t;

string_t *readInput(char * , int * );

int main(int argc,char *argv[])
{
    string_t *string;
    int num_line;

    if(argc!=3){
        printf("error in number of parameter passed\n");
         return EXIT_FAILURE;
    }

    // read nymber of line from input file

     string = readInput(argv[1],&num_line);

     printf("number of line : %d \n",num_line);

    printf("Hello world!\n");
    return 0;
}

string_t *readInput(char *fileName , int *numLine){

   string_t *arr;
    FILE *fp;
    int num_line;

    /* open file*/
   fp = fopen(fileName, "r");
   if (fp == NULL) {
     printf("Error opening the file %s.\n", fileName);
    exit(EXIT_FAILURE);
    }


  if (fscanf(fp, "%d", &num_line) == EOF) {
    printf("Error opening the file %s.\n", fileName);
    exit(EXIT_FAILURE);
  }

  //printf("number of line : %d \n",num_line);
  *numLine=num_line;


}
