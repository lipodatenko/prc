#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(void) {
    printf("char         %d B\n", sizeof(char));
    printf("short        %d B\n", sizeof(short));
    printf("int          %d B\n", sizeof(int));
    printf("unsigned     %d B\n", sizeof(unsigned));
    printf("long         %d B\n", sizeof(long));
    printf("float        %d B\n", sizeof(float));
    printf("double       %d B\n", sizeof(double));
    printf("long double  %d B\n\n", sizeof (long double));
            
    printf("rozsah char   %d .. %d\n", CHAR_MIN, CHAR_MAX);
    printf("rozsah int    %d .. %d\n", INT_MIN, INT_MAX);
    printf("rozsah float  %g .. %g\n", FLT_MIN, FLT_MAX);
    printf("rozsah double  %g .. %g\n", DBL_MIN, DBL_MAX);
       
    return 0;
}

