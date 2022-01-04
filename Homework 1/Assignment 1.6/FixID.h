#pragma once

/**
 * @file FixID.h
 */

 /**
  * @brief Maximum possible 8-digit incomplete ID
  */
static const int MAXIMUM_ID_NUMBER = 99999999;

/**
 * @brief Fix an Israeli ID by computing the 9th digit given the first 8
 *
 * Note: In case of an invalid input, -1 is returned
 *
 * @param id The ID to complete
 * @return The missing digit
 */
int FixID(const unsigned int id);
