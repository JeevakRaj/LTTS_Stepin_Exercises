#include "stdlib.h"
#include "math.h"
#include "stdio.h"
#include "complex_calculator.h"

/**
 * @brief computing the division of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cdiv storing the result
 * @return error_t 
 */

error_t complex_division(complex_t* cnum1, complex_t* cnum2, complex_t* cdiv)
{
    if (cnum2->real==0 && cnum2->imaginary==0)
    {
        return ERROR_DIV_BY_ZERO;
    }
    else if(cnum2 == NULL || cnum1 ==NULL)
        return ERROR_NULL_PTR;
    else{
    cdiv->real = ((cnum1->real*cnum2->real)+(cnum1->imaginary*cnum2->imaginary))/(pow((cnum2->real),2)+pow((cnum2->imaginary),2));
    cdiv->imaginary = ((cnum1->imaginary*cnum2->real)-(cnum1->real*cnum2->imaginary))/(pow((cnum2->real),2)+pow((cnum2->imaginary),2));
    printf("the result is: %f + %f j.\n",cdiv->real,cdiv->imaginary);
    return SUCCESS;
    }
}