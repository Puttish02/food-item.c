#include<stdio.h>

int main()
{
    printf("pick an item:\n1.Pizza\n2.Burger\n3.Pasta\n4.French fries\n5.Sandwich.");
    int choice =0;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Food item-Pizza\n.Price=Rs239");
    break;
    case 2:
    printf("Food item - Burger\n.Price=Rs 129.");
    break ;
    case 3:
    printf("Food item-Pasta\n.Price-179.");
    break;
    case 4:
    printf("Food item -Frenc Fries\n.Rs-99");
    break;
    case 5:
    printf("Food item-Sandwich\n.Rs-149.");
    break;
    default:
    printf("invalid choice");
    }
    return 0;
    }
    
