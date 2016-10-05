#include <stdio.h>
#include <stdlib.h>

FILE * input_Data(char *name,char *mode);
FILE * addNewFile(char *name,char *mode);
void findWordsWithNumbers();
int functionisNumberInString (char string[][20]);
int main() {
    findWordsWithNumbers();
    return 0;

}
FILE * input_Data(char *name,char *mode){
    FILE *file=fopen(name,mode);
    char *inputdata="Hello my9 big Sity6";
    fprintf(file,"%s ",inputdata);
    fclose(file);
    return file;
}
FILE * addNewFile(char *name,char *mode){
    FILE *file=fopen(name,mode);
    fclose(file);
    return file;
}
void findWordsWithNumbers(){
    FILE * myfile ,*sity;
    myfile=input_Data("textstring.txt","w");
    sity=addNewFile("sity.txt","w");
    fclose(sity);

    myfile=fopen("textstring.txt","r");
    sity=fopen("sity.txt","a");
    char string[5][20];
    int caunt=0;
    int i=0;
    while(fscanf(myfile,"%s",string[i])!=EOF){
        int flag=0;
        int i=0;
        caunt++;
        if (functionisNumberInString(string)==1){
            fprintf(sity,"%s ",string[i]);

        }
        i++;
    }
    printf("%d",caunt);
    fclose(myfile);
    fclose(sity);
}
int functionisNumberInString (char string[][20]){
    int i=0;
    while (string[i]!='\0') {
        printf("%d",1);
        if (string[i]>='0'&&string[i]<='9'){
            printf("%d",2);
            return 1;
        }
        i++;
        return 0;
    }

}
