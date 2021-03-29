#include "stdlib.h"
#include "stdio.h"
#include "complex_calculator.h"

/**
 * @brief computing the product of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cprod storing the result
 * @return error_t 
 */

error_t complex_product(complex_t* cnum1, complex_t* cnum2, complex_t* cprod)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    cprod->real = ((cnum1->real*cnum2->real)-(cnum1->imaginary*cnum2->imaginary));
    cprod->imaginary = ((cnum1->imaginary*cnum2->real)+(cnum1->real*cnum2->imaginary));
    printf("the result is: %f + %f j.\n",cprod->real,cprod->imaginary);
    return SUCCESS;
}