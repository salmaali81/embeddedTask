#include <stdio.h>

enum Category {food=1, drink, toiletries, clothing};

union ProductInfo
{
    float Fvalue;
    //int Ivalue;
};

struct Product
{
    char name[50];
    float price;
    int stock;
    enum Category category;
    union ProductInfo info;

};


void display(struct Product p1 )
{

    printf("Product Name: %s, Category: %d, Price: %0.2f , Stock: %d, Additional Info: (%0.2f)",p1.name, p1.category, p1.price, p1.stock, p1.info.Fvalue);
}

int main()
{
    struct Product p[3]={{"fish", 50, 10, food, 100 }, {"water", 3, 100, drink,50}, {"skirt", 100, 20, clothing, 50} };
    for(int i=0;i<3;i++)
    {
        display(p[i]);
        printf("\n");
    }
}
