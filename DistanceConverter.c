/*
Petra, Rémi and their families went hiking in the mountains together 
and realized that distances are measured in different units in France 
and the United States. To help them convert between units, please write 
a program that reads a decimal number representing a distance in kilometers 
and that prints out the corresponding distance in miles with 6 decimal places. 

You may use the fact that one kilometer equals 0.621371 miles. 
*/

#include <stdio.h>

int main (){
    double kiloDistance = 0.0, mileDistance = 0.0;
    //get the value of the distance in kilo
    scanf("%lf", &kiloDistance);
    
    mileDistance = kiloDistance *0.621371;
    //display the value
    printf("%.6lf\n", mileDistance);
    
    return 1;
    
}