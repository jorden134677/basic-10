#include<stdio.h>

int main()

{
printf("請輸入要轉換的大小寫英文:\n"); 
int a=2;  
while (a)  
{
char h;
scanf("%c", &h);
  
    if (h >= 'A' && h <= 'Z')
{
 h = h + 32;
 printf("%c", h);
}
    else if (h >= 'a' && h <= 'z')
{
h = h - 32;
printf("%c", h);
}
}
return 0;
}
