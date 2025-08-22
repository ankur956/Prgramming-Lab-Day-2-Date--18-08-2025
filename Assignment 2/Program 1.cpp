#include<stdio.h>
int main()
{
    float principle,rate,time,si;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter rate of interest (in%%):");
    scanf("%f",&rate);
    printf("Enter time(in years):");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("si=%.2f\n",si);
    return 0;
