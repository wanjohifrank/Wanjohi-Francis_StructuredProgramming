#include <stdio.h>
int main (){
char ops;
int numb1, numb2;
printf("Enter Operator\t");
scanf("%s", &ops);
printf("Enter the numbers\t");
scanf("%d %d", &numb1, &numb2);
switch(ops){
case '+':
    printf("%d + %d = %d", numb1, numb2, numb1 + numb2);
    break;
case '-':
    printf("%d - %d = %d", numb1, numb2, numb1 - numb2);
    break;
case '*':
    printf("%d * %d = %d", numb1, numb2, numb1 * numb2);
    break;
case '/':
    if (numb2 != 0){
        printf("%d / %d = %d", numb1, numb2, numb1 / numb2);
        break;
    }else {
    printf("INVALID");
    break;
    }
case '%':
    if (numb2 != 0){
    printf("%d mod %d = %d", numb1, numb2, numb1 % numb2);
    break;}else {
    printf("ERROR zero modulus");
    }
}return 0;
}
