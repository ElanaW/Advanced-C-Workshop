#ifndef VALIDATE_ID_H_
#define VALIDATE_ID_H_
//#include <stdbool.h>

/**
 * @file ValidateID.h
 */

 /**
  * @brief Maximum possible ID.
  */
static const int MAXIMUM_ID_NUMBER = 999999999;

typedef int BOOL;
#define false 0;
#define true 1;


/**
 * @brief Validates an Isreali ID according to the Luhn algorithm.
 *
 * @param id The ID to validate.
 * @return true if the ID is valid and false otherwise.
 */
BOOL ValidateID(const unsigned int id);

#endif //VALIDATE_ID_H_