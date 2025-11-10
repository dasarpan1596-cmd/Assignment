#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=4;i++){
        if(i!=4){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=7-2*i;j>=1;j--){
            printf(" ");
        }
          for(j=i;j>=1;j--){
            printf("%d",j);
        }
    }else{
         for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
            printf("%d",j);
        

    }
    printf("\n");

    }
}