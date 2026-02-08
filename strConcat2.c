//
// Created by denys on 08.02.26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *Strcat(char*destStr,char *sourceStr)
{
char *concatStr;
    int i;
    int j;
    int lenghtDest, lenghtSource;
    lenghtDest = strlen(destStr); // how many bytes
    lenghtSource = strlen(sourceStr);
    concatStr = (char*)malloc(lenghtDest+lenghtSource+1); // allocate memory and how many bytes we need
    for (i=0;i<=lenghtDest;i++) {
        concatStr[i]=destStr[i];
    }
    for (i=lenghtDest;i<=lenghtDest+lenghtSource;i++) {
        concatStr[i]=sourceStr[i-lenghtDest];
    }
}
int main() {
    char MyArr[20]="Hello ";
    char AnotherArr[6]="World";
    Strcat(MyArr,AnotherArr);
}
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char strDestination[20]="Hello ";
//     char strSource[]="World";
//     strcat(strDestination,strSource); // strcat
//     printf("string after concatenation: %s \n",strDestination);
//
// }