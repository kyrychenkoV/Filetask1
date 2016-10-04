#include <stdio.h>
#include <stdlib.h>

FILE * OpenFile(char *name,char *mode);
void addNewFile(char * string,char *name,char *mode);
void closeFile(FILE *name);
void findWordsWithNumbers();
int main() {
    FILE *file;
    char *inputdata="1ell1o my9 big Sity6 !";
    addNewFile(inputdata,"textstring.txt","w");

    file=OpenFile("city.txt","w");
    fclose(file);

    file=fopen("textstring.txt","r+");
    char string[5][20];
    int i=0;
    int count2=0;
    while(fscanf(file,"%s",string[i])!=EOF){
        i++;

        count2++;
    }
    fclose(file);

    file=fopen("city.txt","r+");
    i=0;
    int j=0;

    while (string[j]!='\0'){
        if (string[i]>='0'&&string[i]<='9'){
            fprintf(file,"%s",string[i]);
            printf("%d",1);
            i++;
        }
        j++;
    }

    printf("%s",string);
    fprintf(file,"%s",string[1]);
    fclose(file);
    //findWordsWithNumbers();
    return 0;

}
FILE * OpenFile(char name[],char *mode){
    FILE *file=fopen(name,mode);
    return file;

}
void closeFile(FILE *name){
    fclose(name);

}
void addNewFile(char * string,char *name,char *mode){
    FILE *file=fopen(name,mode);
    fprintf(file,"%s ",string);
    fclose(file);
}
void findWordsWithNumbers(){
    //FILE * myfile ,*sity;
    //myfile=input_Data("textstring.txt","w");
    //sity=addNewFile("sity.txt","w");

    //myfile=fopen("textstring.txt","r");
    //sity=fopen("sity.txt","r+");
    //char string[20];
    /*while(fscanf(myfile,"%s",string)!=EOF){
        int flag=0;
        int i=0;
        while (string[i]!='\0') {
            if (string[i]>='0'&&string[i]<='9'){
                flag=1;
            }
            i++;
        }
        if (flag==1){
            fprintf(sity,"%s ",string);
        }
    }
    fclose(myfile);
    fclose(sity);*/

}