/* typedefs.h */
#ifndef _TYPEDEFS_H
#define _TYPEDEFS_H

/******************************************************************************
 *      Name: typedefs.h                                                      *
 *  Function: Defines types used in Molecular Applications.                   *
 * Copyright: (C) Garrett Matthew Morris, TSRI                                *
 *----------------------------------------------------------------------------*
 *    Author: Garrett Matthew Morris, The Scripps Research Institute          *
 *      Date: JAN/18/2003                                                     *
 *----------------------------------------------------------------------------*
 *    Inputs: none                                                            *
 *   Returns: nothing                                                         *
 *   Globals: none                                                            *
 *----------------------------------------------------------------------------*
 * Modification Record                                                        *
 * Date     Inits   Comments                                                  *
 * 01/18/03 GMM     This header added                                         *
 ******************************************************************************/


#ifdef USE_INT_AS_LONG
    typedef int  FourByteLong;
    typedef unsigned int UnsignedFourByteLong;
#else
    typedef long FourByteLong;
    typedef unsigned long UnsignedFourByteLong;
#endif

#ifdef USE_DOUBLE
    typedef double Real;
#else
    typedef float Real;
#endif

#ifdef USE_VELOCITY_ENGINE
typedef union
{
	vector float vec;
	float		 elements[4];
} Float4;
#endif

#endif
/* EOF */
