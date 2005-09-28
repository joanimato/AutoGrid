/* autogrid.h */
/*
  $Id: autogrid.h,v 1.13 2005/09/28 18:04:30 rhuey Exp $
*/

#include "autocomm.h"
#include "gpftoken.h"

/******************************************************************************/
/*      Name: autogrid.h                                                      */
/*  Function: Header file for Autogrid.                                       */
/* Copyright: (C) 1995, TSRI                                                  */
/*----------------------------------------------------------------------------*/
/*   Authors: Garrett Matthew Morris, David S. Goodsell                       */
/*                                                                            */
/*            The Scripps Research Institute                                  */
/*            Department of Molecular Biology, MB5                            */
/*            10666 North Torrey Pines Road                                   */
/*            La Jolla, CA 92037.                                             */
/*                                                                            */
/*            e-mail: garrett@scripps.edu                                     */
/*                    goodsell@scripps.edu                                    */
/*                                                                            */
/*      Date: 02/06/95  6-FEB-1995                                            */
/*----------------------------------------------------------------------------*/
/*    Inputs: None.                                                           */
/*   Returns: Parameters, Macro substitutions, Prototyped functions.          */
/*   Globals: (see 'autoglobal.h')                                            */
/*----------------------------------------------------------------------------*/
/* Modification Record                                                        */
/* Date     Inits   Comments                                                  */
/* 04/01/93 GMM     Created for use in makefile.                              */
/******************************************************************************/

#define MAX_DIST     16384   /* Maximum distance in 100ths of an Angstrom.    */
                             /*  = 163.84 Angstroms                           */
#define AG_MAX_ATOMS    32768   /* Maximum number of atoms in macromolecule.     */
/*    32768 = 2^15	*/
/*    int 16-bit two's complement ranges 0-32767, 0 to (2^15 - 1)	*/

#define ORDERED 	0
#define CYLINDRICAL 	1
#define SPHERICAL 	2

#define A_DIVISOR    100.    /* Angstrom is divided by this in look-up table. */

#define	NBCUTOFF     8.      /* non-bond cutoff = 8 Angstroms.                */

#define PRECISION 0.0001 /* fabs(Energies) less than this will be written as '0.' */

/*----------------------------------------------------------------------------*/
/* Macros,                                                                    */
/*----------------------------------------------------------------------------*/

#define sq(a)               ( (a) * (a) )
/* #define hypotenuse(x,y,z)   ( sqrt( (x)*(x) + (y)*(y) + (z)*(z) )  ) */
#define sq_hyp(x,y,z)       ( (x)*(x) + (y)*(y) + (z)*(z) )
// we do not want to have a redefinition of the following macro max,min
#ifdef _WIN32
#undef min
#undef max
#endif

#define max(x,y)            ( ((x) > (y)) ? (x) : (y) )
#define min(x,y)            ( ((x) < (y)) ? (x) : (y) )
#define angstrom(i)         ( ( (double) (i) ) / A_DIVISOR )
#define lookup(r)           ( (int) ( (r) * A_DIVISOR ) )
#define equal(a,b,n)        ( strncmp(a,b,(n)) == 0 )

/*----------------------------------------------------------------------------*/
/* Prototypes,                                                                */
/*----------------------------------------------------------------------------*/

#include "prototypes.h"


#define MAX_NUM_AUTOGRID_TYPES 100
#define NUM_ALL_TYPES 20   /*??? IS THIS REASONABLE???*/
#define MAX_LEN_AUTOGRID_TYPE 7

/* added for port to BOINC 11/17/2004 */
FILE *ag_fopen(const char *path, const char *mode);
/*----------------------------------------------------------------------------*/
/* EOF.                                                                       */
/*----------------------------------------------------------------------------*/
