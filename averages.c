/*
You are helping a teacher average grades. You get bored computing averages by hand, 
so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. 
Next, your program will read the grades one by one, all of which are integers as well. 
Finally, your program will calculate and print the average of the grades to two decimal 
places.
*/

#include <stdio.h>

int main (){
    int numOfScores = 0;
    double average = 0.0;
    scanf("%d",&numOfScores);
    
    int runningSum = 0;
    
    int i = 0;
    for(i = 0;i<numOfScores;i++){
        int studentScore = 0;
        scanf("%d", &studentScore);
        runningSum = runningSum + studentScore;
    }
    
    if(numOfScores > 0){
        average = ((double) runningSum) / numOfScores;
        printf("%.2lf",average);
    }
    
    return 1;
}