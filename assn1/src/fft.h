#ifndef _FFT_H_
#define _FFT_H_

#include <stdlib.h>

#define PI 3.141592653589793238462643383279

void fft_four1(double data[], size_t n);

void fftr2(double data[], size_t n);
void complexfftr2(double data[], size_t n);

void fftr2opt(double data[], size_t n);
void complexfftr2opt(double data[], size_t n);

#endif /* _FFT_H_ */