opyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 *  * Redistribution, modification or use of this software in source or binary
 *   * forms is permitted as long as the files maintain this copyright. Users are 
 *    * permitted to modify this and use it to learn about the field of embedded
 *     * software. Alex Fosdick and the University of Colorado are not liable for any
 *       misuse of this material. 
 *        *
 *         *****************************************************************************/
 /**
  *  * @file <stats.h> 
  *   * @brief <Do some operation on array of characters  >
  *    *
  *     * we are going to define some function proto-type to preform some mathematical operation on array of characters. 
  *      * our implemented functions are going to be (median , mean , maximum ,minimum,sort,print array ) .
  *       * these function inputs are basically the array pointer and size .
  *        *
  *         * @author <Ahmed Helmy>
  *          * @date <1/06/2020 >
  *           *
  *            */
#ifndef __STATS_H__
#define __STATS_H__

 /* Add Your Declarations and Function Comments here */ 
 unsigned char find_median (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <Calculate median of array of data>
  *   *
  *    * <this function is implemented to calculate  median of array of chars > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <unsigned char median >
  *           */
 /* Add Your Declarations and Function Comments here */ 
 float find_mean (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <Calculate mean of array of data>
  *   *
  *    * <this function is implemented to calculate  median of array of chars > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <float mean >
  *           */
 /* Add Your Declarations and Function Comments here */ 
 unsigned char find_maximum (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <Calculate maximum in array of data>
  *   *
  *    * <this function is implemented to calculate  max value in array of chars > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <unsigned char max >
  *           */
 /* Add Your Declarations and Function Comments here */ 
 unsigned char find_minimum (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <Calculate minimum value in array of data>
  *   *
  *    * <this function is implemented to calculate  min in array of chars > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <unsigned char median >
  *           */
 /* Add Your Declarations and Function Comments here */ 
 void print_array (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <print array of data>
  *   *
  *    * <this function is implemented to loop in aarray and print each element in the function  > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <void >
  *           */

 /* Add Your Declarations and Function Comments here */ 
 void sort_array (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <to sort the array in descending order>
  *   *
  *    * <this function is implemented to rearrange the array from max. value to min.value and gives it back > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <void >
  *
  *           */
 /* Add Your Declarations and Function Comments here */ 
 void print_statistics  (unsigned char * arr , unsigned int size );
 /**
  *  * @brief <this fun is used to print calculated statistics from othe function>
  *   *
  *    * <this function is implemented to call other statistics function and print its output > 
  *     * 
  *      * @param <unsigned char *arr> <a pointer to first element in the array make it easy to access all the array >
  *       * @param <unsigned int size > <size of array to determine limits of array>
  *        
  *         *
  *          * @return <void>
  *           */
#endif /* __STATS_H__ */
