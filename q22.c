#include <stdio.h>
int main()
{
    int profit,loss,costprice,sellingprice;
    float profitpercentage,losspercentage;
    printf("enter cost price: ");
    scanf("%d",&costprice);
    printf("enter selling price: ");
    scanf("%d",&sellingprice);
    if(sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        profitpercentage=(profit*100.0)/costprice;
        printf("profit is %d\n",profit);
        printf("profit percentage is %f\n",profitpercentage);
    }
    else if(costprice>sellingprice)
    {
        loss = costprice-sellingprice;
        losspercentage=(loss*100.0)/costprice;
        printf("loss is %d\n",loss);
        printf("Loss percentage is %f\n",losspercentage);
    }
    else
    {
        printf("no profit no loss\n");
    }
    return 0;
}

