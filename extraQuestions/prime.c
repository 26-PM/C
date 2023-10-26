#include<stdio.h>
int main(){
    printf("Enter number till which you want to find prime number: ");
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int fact=0;
        for(int j=1;j<n;j++){
            if(i%j==0){
                fact=fact+1;
            }
        }
        if (fact==2){
            printf("%d \n",i);
        }
    }
    return 0;
    }