// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
      fprintf(stdout,"%s Version %d.%d\n",
              argv[0],
              Tutorial_VERSION_MAJOR,
              Tutorial_VERSION_MINOR);
      fprintf(stdout,"Usage: %s number\n",argv[0]);
      return 1;
    }

  double inputValue = atof(argv[1]);

  // if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  result = exp(log(x)*0.5);
  // otherwise use an iterative approach
#elif USE_MYMATH
  double outputValue = mysqrt(inputValue);
#else
  double outputValue = sqrt(inputValue);
#endif

  fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);
  return 0;
}
