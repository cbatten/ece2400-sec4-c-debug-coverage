
#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

#define UTST_BEGIN() \
  printf("------- Testing %s -------\n\n", __FILE__);
#define UTST_END() \
  printf("\n------- Finished testing %s -------\n", __FILE__);

#define UTST_ASSERT_TRUE( x ) \
  if ( !(x) ) { \
    printf("Line %d: [ FAILED ]\n", __LINE__); \
    return 1; \
  } else { \
    printf("Line %d: [ passed ]\n", __LINE__); \
  }

#define UTST_ASSERT_FALSE( x ) \
  if ( (x) ) { \
    printf("Line %d: [ FAILED ]\n", __LINE__); \
    return 1; \
  } else { \
    printf("Line %d: [ passed ]\n", __LINE__); \
  }

#define UTST_ASSERT_INT_EQ( x, y ) \
  if ( (x) != (y) ) { \
    printf("Line %d: [ FAILED ] %d != %d\n", __LINE__, (x), (y)); \
    return 1; \
  } else { \
    printf("Line %d: [ passed ] %d == %d\n", __LINE__, (x), (y)); \
  }

#define UTST_ASSERT_FLOAT_EQ( x, y, eps ) \
  if ( fabs( (x) - (y) ) > (double) (eps) ) { \
    printf("Line %d: [ FAILED ] %f != %f\n", __LINE__, (x), (y)); \
    return 1; \
  } else { \
    printf("Line %d: [ passed ] %f == %f\n", __LINE__, (x), (y)); \
  }

#endif

