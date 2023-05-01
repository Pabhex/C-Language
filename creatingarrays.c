#include<stdio.h>
int main(){
    char*mnts[4] = {"Jan", "feb" , "dec" , "April"};   //in array counting of its elemets starts from 0,1,2,3,....
    mnts [ 2 ] = "March";  //t change the value in an array.
    printf("%s",mnts[2]);
    return 0;
}