#include<stdio.h>
int main()
{

    char item [7][50]= {"Burger","Pizza","Fried Rice","Chicken Fry","French Fry","Soft Drinks","Coffee"};
    int price[7]= {250,300,175,90,75,20,40};
    int item_select[7],item_unit[100],i,j;
    int total=0;
    int value=0;

    printf("\20*******************  WELCOME TO TAKE OUT RESTURANT **************************\20\n");
    printf(" \t\t\t Our Menu:\20\n");
    printf(" \t\t\t ITEM\t\t\tPRICE:\n");
    printf(" \t\t\t \22*******************************\22\n");
    printf(" \t\t\t 1- BURGER\t\t 250tk\n");
    printf(" \t\t\t 2- PIZZA\t\t 300tk\n");
    printf(" \t\t\t 3- Fried Rice\t\t 175tk\n");
    printf(" \t\t\t 4- Chicken Fry\t\t  90tk\n");
    printf(" \t\t\t 5- French Fry\t\t  75tk\n");
    printf(" \t\t\t 6- Soft Drinks\t\t  20tk\n");
    printf(" \t\t\t 7- Coffee\t\t  40tk\n\n");
    printf("\n");

    printf("How many item Do you want to buy?   ");
    scanf("%d",&j);
loop:
    for(i=0; i<j; i++)
    {
        printf("Enter The Item Number:\n ");
        int x;
        scanf("%d",&x);
        if(x<=0 || x>=8)
        {
            printf("\n\n\t\t****OUT OF MENU****\n\t ***PLEASE! SELECT FROM MENU ITEM\n\n ");
            goto loop;
        }
        else
        {
            item_select[i]=x;
            printf("Enter The Item Unit:\n ");
            scanf("%d",&item_unit[i]);
            total=total+(price[x-1]*item_unit[i]);
        }
        value=item_unit[i]*price[x-1];
        printf("\nITEM:\t   Ordered:\t  Unit Price:\t  Price: \n\n");
        printf("\n%s\t    %d\t     \t%d\t    \t%d \n\n",item[x-1],item_unit[i], price[x-1], value);
    FILE *fp;
    fp=fopen("record.txt","a");
    if(fp==NULL){
        printf("File Doesn't exist: ");
    }
    else{
            printf("Press Enter To Save Your Order : \n");
        fprintf(fp,"\nITEM= %s ,ORDERED= %d,UNIT PRICE= %d, PRICE= %d", item[x-1],item_unit[i], price[x-1], value);

        fclose(fp);

    }
    getch();
    }

    printf("\n\22**********************************************************\22    \n");
    printf("\n\t\t\tTotal Amount is: %d Taka    \n\n ", total);




    printf("Paid Money  :  ");
    int y;
    double z;
    scanf(" %d" ,&y);

    z = y-total;
    printf("\n\22************************************************\22    \n");
    printf("\t\tReturn Money : %lf Taka\n",z);
    printf("\n\n COME HERE ANOTHER DAY TO ENJOY YOUR TIME\n\t\t THANK YOU \n\n ");

    return 0;
}
