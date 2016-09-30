#include <stdio.h>
#include <stdlib.h>

FILE * input_Data(char *name,char *mode);
FILE * addNewFile(char *name,char *mode);
void findWordsWithNumbers();
int main() {
    findWordsWithNumbers();
    return 0;

}
FILE * input_Data(char *name,char *mode){
    FILE *file=fopen(name,mode);
    char *inputdata="Hell1o my9 big Sity6 !";
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

    myfile=fopen("textstring.txt","r");
    sity=fopen("sity.txt","r+");
    char string[20];
    while(fscanf(myfile,"%s",string)!=EOF){
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
    fclose(sity);

}