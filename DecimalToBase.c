/*
  Look mommy, my first app!
*/

#include <stdio.h>
int main()
{
  short int numberToConvert;
  unsigned short int base;
  int convertedNumber, i = 0;
  char restos[20];
  printf("Enter the decimal number you want to convert: ");
  scanf("%hd", &numberToConvert);
  printf("Enter the base to which you wish to convert: ");
  scanf("%hd", &base);
  convertedNumber = numberToConvert;
  while (convertedNumber > 0) {
    restos[i] = convertedNumber%base;
    convertedNumber /= base;
    /* printf("%d\n", restos[i]);
    printf("%hd\n", convertedNumber); */
    i++;
  };
  printf("The number %hd in base %hd is: \n", numberToConvert, base);
  for (i--; i > -1; i--) {
    if (base == 16) {
      switch (restos[i]) {
        case 10:
          printf("A");
          break;
        case 11:
          printf("B");
          break;
        case 12:
          printf("C");
          break;
        case 13:
          printf("D");
          break;
        case 14:
          printf("E");
          break;
        case 15:
          printf("F");
          break;
        default:
          printf("%d", restos[i]);
      }
    }else {
      printf("%d", restos[i]);
    }
  };
  return 0;
}
