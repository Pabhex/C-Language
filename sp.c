#include<stdio.h>
int main(){
    int cp;
    scanf("%d,&cp");
    
   
    int sp;
    
    scanf("%d,&sp");
   
    
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No profit no Loss");
    }

    return 0;
}