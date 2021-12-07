#include <stdio.h>

// I thought it might be good to see an example of DEFINE being used.
#define printcomplex(c) printf("%d+%di\n", c.real, c.imaginary)

typedef struct complex {
    int real;
    int imaginary;
} complex_t;

void add_complex(complex_t a, complex_t b, complex_t *ret) {
    ret->real = a.real + b.real;
    ret->imaginary = a.imaginary + b.imaginary;
}

void sub_complex(complex_t a, complex_t b, complex_t *ret) {
    ret->real = a.real - b.real;
    ret->imaginary = a.imaginary - b.imaginary;
}

void mult_complex(complex_t a, complex_t b, complex_t *ret) {
    // x+yi * z+wi  =>  x*z + y*w(i**2) + (x*w)i + (z*y)i
    int realpart, imaginarypart;
    realpart = a.real * b.real - a.imaginary * b.imaginary;
    imaginarypart = a.imaginary * b.real + a.real * b.imaginary;

    ret->real = realpart;
    ret->imaginary = imaginarypart;
}

int main() {


    // We'll let c1 be 4+2i and c2 be 3+5i.
    // c3 is going to hold the results of our computation; as practice,
    // I've made the functions for addition and subtraction set c3's value
    // rather than returning.

    complex_t c1;
    c1.real = 4;
    c1.imaginary = 2;

    complex_t c2 = {3, 5};
    complex_t c3;

    add_complex(c1, c2, &c3);
    printcomplex(c3);

    sub_complex(c1, c2, &c3);
    printcomplex(c3);

    mult_complex(c1, c2, &c3);
    printcomplex(c3);

    return 0;
}