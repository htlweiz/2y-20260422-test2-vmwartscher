/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here

double Celsius2Fahrenheit ( double temp_celsius ) {
double Temp = temp_celsius * 9/5 + 32;

return Temp;
}

int main(void) {
  double temp_celsius = 0;
  printf("Temperatur in Grad Fahrenheit");
  scanf("%lf", &temp_celsius);

  printf("%lf", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
