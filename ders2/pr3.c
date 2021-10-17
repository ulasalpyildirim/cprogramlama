#include <stdio.h>
#include <locale.h>

float alan_bul()
{
  float a;
  float h;

  printf( "Üçgenin tabanını giriniz \n");
  scanf("%f" , &a);
  printf( "Üçgenin yüksekliğini giriniz \n" );
  getchar();
  scanf("%f" ,&h );
  return (a * h / 2.0);
}
int main() {
  setlocale (LC_ALL, " ");

  printf(" Üçgenin alanı %f dir. \n ", alan_bul());
  return 0;

}
