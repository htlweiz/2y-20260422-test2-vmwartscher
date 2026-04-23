/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// TODO: your code goes here


double compute_hypotenuse ( double leg_a, double leg_b) {
  double hyp = sqrt (leg_a * leg_a + leg_b * leg_b);

  return hyp;
}


int main(void) {
  double leg_a = 0, leg_b = 0;

  scanf("%lf", &leg_a);

  printf("%f", compute_hypotenuse(leg_a, leg_b));

  return 0;
  
}
