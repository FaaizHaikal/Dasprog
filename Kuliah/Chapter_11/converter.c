/* Programmer: Faa'iz Haikal Hilmi          Date : 7 December 2022
 * NRP: 5025221219                          Class: Dasar Pemrograman B
 * Lecturer: Ir. F.X. Arunanto, M.Sc           
 *
 * Read and write TEXT FILE and then convert it to BINARY FILE and compare
 * In this directory, there's a sample of text file (text.txt) and binary file (binary.bin) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 80
#define BUFFER_SIZE 1024

int main(){
    FILE *fptr1, *fptr2;
    int option, operation, counter;
    char source[STR_SIZE], target[STR_SIZE];
    char buffer[BUFFER_SIZE];
    char ch_file, trash;

    //OPEN TEXT FILE
    printf("Input TEXT FILE name\n> ");
    scanf("%s%c", source, &trash);
    fptr1 = fopen(source, "w");
    if(fptr1 == NULL){
        printf("Opening file error!\n");
        exit(1);
    }

    //OPEN BINARY FILE
    printf("Input BINARY FILE name\n> ");
    scanf("%s%c", target, &trash);
    fptr2 = fopen(target, "wb");
    if(fptr1 == NULL){
        printf("Opening file error!\n");
        exit(1);
    }

    //WRITE TEXT FILE
    printf("Write contents of your TEXT FILE here\n");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, fptr1);
    fclose(fptr1);
    fptr1 = fopen(source,"r");
    printf("File name: %s\nContents:\n", source);
    do{
        ch_file = getc(fptr1);
        putchar(ch_file);
    }while(ch_file != EOF);
    printf("\n");
    return 0;
}
