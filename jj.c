#include <stdio.h>

int main(){
    float d;      
    printf ("Enter the diameter  of circle: \n");
    scanf ("%f",&d);                           //taking input.

    //calculation starts
    float c=d/2;

    // output
    float r= c*c*3.14;

    printf("the area of the circle is: %f",  r );
    return 0;

}