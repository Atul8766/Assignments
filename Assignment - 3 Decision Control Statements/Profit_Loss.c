#include <stdio.h>

int main(){
    float cost,selling,loss,prnct;
    printf("Enter Cost Price and Selling Price : ");
    scanf("%f %f",&cost,&selling);
    loss = cost-selling;
    prnct = (loss*100)/cost;
    printf("\nLoss is %f and Loss prcnt is %f%%\n",loss,prnct);
    return 0;
}