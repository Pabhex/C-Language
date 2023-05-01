#include<stdio.h>
int main(){
    float r;
    printf("Enter radius :");
    scanf(" %f",&r);

    float v = 4 * 3.14 * r * r * r / 3;
    printf("The volume of sphere is ; %f",v);

    return 0;
}  