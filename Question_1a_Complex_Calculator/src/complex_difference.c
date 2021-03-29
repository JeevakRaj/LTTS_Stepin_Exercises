#include "stdlib.h"
#include "stdio.h"
#include "complex_calculator.h"

/**
 * @brief computing the difference of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cdiff storing the result
 * @return error_t 
 */
error_t complex_difference(complex_t* cnum1, complex_t* cnum2, complex_t* cdiff)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    cdiff->real = cnum1->real - cnum2->real;
    cdiff->imaginary = cnum1->imaginary - cnum2->imaginary;
    printf("the result is: %f + %f j.\n",cdiff->real,cdiff->imaginary);
    return SUCCESS;
}