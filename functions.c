#include <stdio.h>
#include <stdlib.h>
double calcArea(double r)
{
    double area = 3.14*r*r;
    return area;
}
int main()
{
    double r;
    printf("Enter the radius ");
    scanf("%lf", &r);
    double area= calcArea(r);
    printf("The area = %0.3lf", area);

}