#include <stdio.h>

int main (){
    /*
    Here is how: You should write a program that 
    takes several lines of input from a user (see the below example). 
    The first line of the input indicates the number of robots to be 
    deployed. Each subsequent line shows the height, the weight, the 
    power of the engines and a resistance rating (1,2, or 3) of each 
    of of these robots. Your program should use this information to 
    calculate the total power of these robots. The power of all robots 
    is the sum of the power of each robot, where the power of an 
    individual robot is calculated via:
    (enginePower + resistance) * (weight - height)
    */
    
    int totalPower = 0;
    int numberofRobots = 0;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int robotPower = 0;
    
    scanf("%d",&numberofRobots);
    int i = 0;
    for (int i= 0; i < numberofRobots; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        robotPower = (enginePower + resistance) * (weight - height);
        totalPower = totalPower + robotPower;
    }
    printf("%d",totalPower);
}