#include<stdio.h>

int main()

{
printf("�п�J�n�ഫ���j�p�g�^��:\n"); 
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
