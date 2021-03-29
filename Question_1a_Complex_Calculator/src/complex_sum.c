#include "stdlib.h"
#include "stdio.h"

#include "complex_calculator.h"

/**
 * @brief for computing the sum of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param csum storing the result
 * @return error_t 
 */

error_t complex_sum(complex_t* cnum1, complex_t* cnum2, complex_t* csum)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    csum->real = cnum1->real + cnum2->real;
    csum->imaginary = cnum1->imaginary + cnum2->imaginary;
    printf("the result is: %f + %f j.\n",csum->real,csum->imaginary);
    return SUCCESS;
}