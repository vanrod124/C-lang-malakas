#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    int i;
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    char description[n];
    int quantity[n];
    double price[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the description of product %d: ", i + 1);
        scanf("%s", &description[i]);
        printf("Enter the quantity of product %d: ", i + 1);
        scanf("%d", &quantity[i]);
        printf("Enter the price of product %d: ", i + 1);
        scanf("%lf", &price[i]);
    }

    double total = 0;
    printf("\n\nProduct Quantity Price   Total\n");
    for (int i = 0; i < n; i++)
    {
        
        printf("%s \t %d  \t %.2lf", &description[i], quantity[i], price[i]);
        // print the total price of each product
        printf(" \t %.2lf", quantity[i] * price[i]);
        puts("\n");
        total += quantity[i] * price[i];
        }
    printf("Total: \t\t\t %.2lf", total);
}
