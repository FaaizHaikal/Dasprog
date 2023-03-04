/* Programmer: Faa'iz Haikal Hilmi          Date : 7 December 2022
 * NRP: 5025221219                          Class: Dasar Pemrograman B
 * Lecturer: Ir. F.X. Arunanto, M.Sc           
 *
 * Read and write TEXT FILE or BINARY FILE
 * In this directory, there's a sample of text file (text.txt) and binary file (binary.bin) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 80
#define BUFFER_SIZE 1024

int main(){
    FILE *fptr;
    int option, operation, counter;
    char inv_filename[STR_SIZE];
    char buffer[BUFFER_SIZE];
    unsigned char another[BUFFER_SIZE];
    unsigned short size;
    char option2, trash, ch_file;
    printf("This program is capable of reading and writing TEXT FILE or BINARY FILE\n");
    printf("1. Text file\n2. Binary file\nEnter your choice of type of file\n");
    while(1){
        printf("> ");
        scanf("%d", &option);
        if(option == 1 || option == 2){
            printf("1. Read file\n2. Write file\nEnter your choice of operation\n");
            while(1){
                printf("> ");
                scanf("%d", &operation);
                if(operation == 1 || operation == 2)
                    break;
                else
                    printf("Please choose the correct option\n");
            }
            break;
        }
        else
            printf("Please choose the correct option\n");
    }
    printf("Enter name of inventory file> ");
    scanf("%s", inv_filename);
    scanf("%c", &trash); //get rid of whitespace
    switch(option){
        case 1:
            switch(operation){
                case 1:
                    fptr = fopen(inv_filename, "r");
                    if(fptr == NULL){
                        printf("Opening file error!\n");
                        exit(1);
                    }
                    printf("File name: %s\nContents:\n", inv_filename);
                    while ((ch_file = getc(fptr)) != EOF)
                        putchar(ch_file);
                    printf("\n");
                    break;
                case 2:
                    fptr = fopen(inv_filename, "r+");
                    if(fptr == NULL){
                        printf("Opening file error!\n");
                        exit(1);
                    }   
                    printf("Write your file here\n");
                    fgets(buffer, BUFFER_SIZE, stdin);
                    fprintf(fptr, "%s", buffer);
                    printf("Do you wish to read the file? (Y/N)\n");
                    while(1){
                        scanf("%c", &option2);
                        if(option2 == 'Y'){
                            printf("File name: %s\nContents:\n", inv_filename);
                            while ((ch_file = getc(fptr)) != EOF)
                                putchar(ch_file);
                            printf("\n");
                            break;
                        }
                        else if(option2 == 'N')
                            break;
                        else
                            printf("Please choose the correct option\n");
                    }
                    break;
            }
            break;
        case 2:
            switch(operation){
                case 1:
                    fptr = fopen(inv_filename, "rb");
                    if(fptr == NULL){
                        printf("Opening file error!\n");
                        exit(1);
                    }
                    size = sizeof(buffer)/sizeof(buffer[0]);
                    fread(another,size * sizeof(unsigned char),1,fptr);
                    printf("File name: %s\nContents:\n", inv_filename);
                    for(int i=0;i<size;i++)
                        printf("%u", another[i]);
                    break;
                case 2:
                    fptr = fopen(inv_filename, "wb");
                    if(fptr == NULL){
                        printf("Opening file error!\n");
                        exit(1);
                    }
                    size = strlen(buffer)+1;
                    printf("Write your file here\n");
                    fgets(buffer, BUFFER_SIZE, stdin);
                    size = sizeof(buffer)/sizeof(buffer[0]);
                    fwrite(buffer,size * sizeof(unsigned char),1,fptr);
                    printf("Do you wish to read the file? (Y/N)\n");
                    while(1){
                        scanf("%c", &option2);
                        if(option2 == 'Y'){
                            fread(another,size * sizeof(unsigned char),1,fptr);
                            printf("File name: %s\nContents:\n", inv_filename);
                            for(int i=0;i<size;i++)
                                printf("%u", another[i]);
                            break;
                        }
                        else if(option2 == 'N')
                            break;
                        else
                            printf("Please choose the correct option\n");
                    }
                    break;
            }
            break;
    }
    
    fclose(fptr);

    return 0;
}