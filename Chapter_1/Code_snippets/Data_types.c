#include <stdio.h>
#include <limits.h> //Data type limits (Int)
#include <float.h>

int main(void) {
  char a = -128;
  printf("Char_#: %d\n", a);

  printf("Int_MAX: %g\n", (double)INT_MAX);
  printf("Uint_MAX: %u\n", UINT_MAX); //%u -> Unsigned decimal number

  printf("Float_MAX: %g\n", (double)FLT_MAX);
  printf("Float_min: %g\n", (double)FLT_MIN);
  printf("Float_decimal_digits: %g\n", (double)FLT_DIG);

  float b = 0.12345678;
  printf("Float_#: %g\n", (double)b);

  double c = 0.112233445566771111;
  double d = 0.112233445566771111;

  printf("Double_MAX: %g\n", (double)DBL_MAX);
  printf("Double_min: %g\n", (double)DBL_MIN);
  printf("Double_decimal_digits: %g\n", (double)DBL_DIG);
  printf("Double_Size: %ld\n", sizeof(double));

  printf("Decimal_Digits: %d\n", LDBL_DECIMAL_DIG);

  /*float bad_input;
  scanf("%f", &bad_input);
  printf("Bad Input #: %f\n", bad_input);*/

  long double e = 0;
  printf("Long_Double_Size: %ld\n", sizeof(long double));
  printf("Long_Double_MAX: %Lf\n", (long double)LDBL_MAX);
  printf("Long_Double_min: %Lf\n", (long double)LDBL_MIN);
  printf("Long_Double_decimal_digits: %d\n", LDBL_DIG);
  //printf("Bad Input character: %c\n", bad_input);

  return 0;
}
