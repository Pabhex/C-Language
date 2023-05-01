#include<stdio.h>
int main(){
    float principle , rate , time , si;
    printf("Enter principle :");  //input values ke statement  ke liye scanf se phle print f use krte hain.
    scanf("%f",&principle);       //values input lene ke liye scan f or %f ke baad & lagate hain.
    printf("Enter rate :");
    scanf("%f",&rate);
    printf("Enter time :");
    scanf("%f",&time);
    si = (principle*rate*time)/100;
    printf("%f",si);
    return 0;
}