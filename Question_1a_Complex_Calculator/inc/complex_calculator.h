/**
 * @file complex_calculator.h
 * @author Jeevak
 * @brief Arthimetic operations on complex numbers
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef COMPLEX_CALCULATOR_H
#define COMPLEX_CALCULATOR_H

typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;

/**
 * @brief for computing the sum of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param csum storing the result
 * @return error_t 
 */
error_t complex_sum(complex_t* cnum1, complex_t* cnum2, complex_t* csum);

/**
 * @brief computing the product of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cprod storing the result
 * @return error_t 
 */
error_t complex_product(complex_t* cnum1, complex_t* cnum2, complex_t* cprod);

/**
 * @brief computing the division of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cdiv storing the result
 * @return error_t 
 */
error_t complex_division(complex_t* cnum1, complex_t* cnum2, complex_t* cdiv);

/**
 * @brief computing the difference of complex number
 * 
 * @param cnum1 number1
 * @param cnum2 number2
 * @param cdiff storing the result
 * @return error_t 
 */
error_t complex_difference(complex_t* cnum1, complex_t* cnum2, complex_t* cdiff);

#endif