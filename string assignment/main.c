 #include <stdio.h>
 #include <string.h>
 int main (){
 char fullName[30];
 printf("Enter your full name.\t");
 scanf("%s", &fullName);
 printf("Hello %s!\n", fullName);
 size_t length;
 length = strlen(fullName);
 printf("Size of your name is: %zu", length);
 return 0;
 }
