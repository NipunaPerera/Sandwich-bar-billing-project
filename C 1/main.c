#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bread , fill , size , topping , control;
    int top , totalquantity=0 , quantity , money;
    float total=0 , sum =0 , finalsum=0 , dissum=0;

    printf("** What Type Of Bread - \nBaguette - B \nFoccacia - F \nCiabatta - C \nType The Letter - ");
    scanf("%c",&bread);

    switch(bread)

    {
    case 'B':
    case 'b':
        printf("\n** What Is The Filling - \nChicken - C \nSea Food - S \nVegetarian - V \nType The Letter - ");
        scanf("%s",&fill);
        total=total+50;
        break;

    case 'F':
    case 'f':
        printf("\n** What Is The Filling - \nChicken - C \nSea Food - S \nVegetarian - V \nType The Letter - ");
        scanf("%s",&fill);
        total=total+100;
        break;

     case 'C':
     case 'c':
        printf("\n** What Is The Filling - \nChicken - C \nSea Food - S \nVegetarian - V \nType The Letter - ");
        scanf("%s",&fill);
        total=total+75;
        break;

     default:
        printf("Invalid Letter !! Plz Check It !! ");
        break;
    }
   // -------------------------------------------------------------------------------
    switch(fill)

    {
    case 'C':
    case 'c':
        printf("\n** What Is The Size - \nSmall - S \nMedium - M \nLarge - L \nType The Letter - ");
        scanf("%s",&size);
        total=total+150;
        break;

    case 'S':
    case 's':
        printf("\n** What Is The Size - \nSmall - S \nMedium - M \nLarge - L \nType The Letter - ");
        scanf("%s",&size);
        total=total+250;
        break;

     case 'V':
     case 'v':
        printf("\n** What Is The Size - \nSmall - S \nMedium - M \nLarge - L \nType The Letter - ");
        scanf("%s",&size);
        total=total+50;
        break;

     default:
        printf("Invalid Letter !! Plz Check It !! ");
        break;
    }

    // -------------------------------------------------------------------------------

printf("\n** Number Of Toppings : ");
    scanf("%d",&top);
    if(top<=3)
    {
        while(top>=1)
    {
        printf("\n** What Is The Topping - \nCheese - C \nMayonnaise - M \nSpecial Sauce - S \nType The Letter - ");
        scanf(" %c", &topping);
        switch(topping)
        {
        case 'C':
        case 'c':
            {
                total=total+50;
                break;
            }
        case 'M':
        case 'm':
            {
                total=total+25;
                break;
            }
        case 'S':
        case 's':
            {
                total=total+100;
                break;
            }
        default:
            {
                printf("Invalid Letter !! Plz Check It !! \n");
                break;
            }
        }
        top--;
    }
    }
    else
    {
        printf("Incorrect Number Of Toppings\n");
    }
    printf("\n** Number Of Sandwiches : ");
    scanf("%d",&quantity);

    total=total*quantity;
    totalquantity=totalquantity+quantity;
    sum=sum+total;
    dissum=sum*0.1;
    finalsum=sum-dissum;

    printf("\n** Total Price For %d Sandwiches - Rs %.2f \n\a",totalquantity,sum);

    if(sum>1000)
    {
        printf("\n** Discount Price - Rs %.2f \n",finalsum);
    }
    else
    {
        printf("\n** If Only Customer Pays By a Card , Type Y - ");
        scanf("%d",&money);

        if(money='Y')
        {
            printf("\n** Total Price For a Visa Credit Card Holder - Rs %.2f \n",finalsum);
        }
    }

    printf("\n** Thank You , Come Again !! ** \n\a");

    return 0;
}
