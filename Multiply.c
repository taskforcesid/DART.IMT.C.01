#include <stdio.h>

int main (){
    int target = 0;
    printf("Enter a number: " );
    scanf("%d", &target);
    int i = 0;
    for (i = 0 ; i <=10; i++){
        printf("%dxtarget = %d\n", i, i*target);
    }
}
