#include <stdio.h>
#include <math.h>
int main (){
double radius;
double result;
printf("Enter radius of the sphere\t");
scanf("%lf", &radius);
result = (4 * M_PI * radius * radius);
printf("Surface Area = %.3lf square units", result);
return 0;
}
