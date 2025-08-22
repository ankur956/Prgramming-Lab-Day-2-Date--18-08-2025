#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    printf("before swapping the value of x and y:%d%d",x,y");
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping the value of the x and y:%d%d,x,y");
    return 0;
}
