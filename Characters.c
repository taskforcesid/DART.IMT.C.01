#include <stdio.h>
//Write a C-program that reads an input character (using scanf) 
//and displays the following pyramid pattern using the character read: 
/*
++++#++++
+++###+++
++#####++
+#######+
#########
*/

int main (){
    char letter;
    scanf ("%c",&letter);
    int i;
    for(i = 0; i < 5; i++){
     int j;
     for(j=0;j<(4-i);j++){
         printf("+");
     }
     //Print the inserted character
     for(j=0;j<((i+1)*2-1);j++){
         printf("%c",letter);
     }
     for(j=0;j<(4-i);j++){
         printf("+");
     }
     printf("\n");
    }
    return 1;
}