#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = n; i>0; i--)
    {
        printf("%d ",i*2-1);
    }
    
}