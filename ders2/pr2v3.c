#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL , "");
  char ch;
  printf(" \ Bir tuşa basınız : ");
  ch = getchar();
  printf("\nGirdiğiniz karakter %c dir \n.",  ch);
}
