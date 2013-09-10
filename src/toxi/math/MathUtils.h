#pragma once

#ifndef __MATH_UTILS_H__
#define __MATH_UTILS_H__

#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>

namespace toxi
{
	namespace math
	{
		class MathUtils
		{
			public:
				static double THIRD;
				static double SQRT2;
				static double SQRT3;
				static double LOG2;
				static double PI;
				static double INV_PI;
				static double HALF_PI;
				static double THIRD_PI;
				static double QUARTER_PI;
				static double TWO_PI;
				static double THREE_HALVES_PI;
				static double PI_SQUARED;
				static double EPS;
				static double DEG2RAD;
				static double RAD2DEG;
				static double SHIFT23;
				static double INV_SHIFT23;
				static double SIN_A;
				static double SIN_B;
				static double SIN_P;

				union int_float_bits
				{
					unsigned int_bits;
					float float_bits;
				};

				static double abs( double x );
				static float abs( float x );
				static int abs( int x );

				static int ceilPowerOf2( const int x );
				static int floorPowerOf2( int x );

				static double clip( double a, double min, double max );
				static float clip( float a, float min, float max );
				static int clip( int a , int min, int max );
				static long clip( long a, long min, long max );

				static int clipNormalized( int a );
				static int clipNormalized( long a );
				static float clipNormalized( float a );
				static double clipNormalized( double a );

				static float cos( int theta );
				static double cos( double theta );
				static float cos( float theta );

				static double sin( double theta );
				static float sin( float theta );
				static float sin( int theta );

				static double degrees( double radians );
				static double radians( double degrees );
				static float degrees( float radians );
				static float radians( float degrees );
				static float degrees( int radians );
				static float radians( int degrees );

				static long floor( double x );
				static int floor( float x );

				static bool flipCoin( void );
				static double dualSign( double a, double b );
				static float dualSign( float a, float b );
				static int gcd( int p, int q );
				static double impulse( double k, double t );
				static float impulse( float k, float t );
				static int lcm( int p, int q );

				// TODO: find some faster implementations of those functions
				static double fastCos( double x);
				static double fastInverseSqrt( double x );
				static double fastPow( double a, double b );
				static double fastSin( double x );

				static double max( double a, double b );
				static double max( double a, double b, double c );
				static float max( float a, float b );
				static float max( float a, float b, float c );
				static int max( int a, int b );
				static int max( int a, int b, int c );
				static long max( long a, long b );
				static long max( long a, long b, long c );

				static double min( double a, double b );
				static double min( float a, float b );
				static double min( double a, double b, double c );
				static float min( float a, float b, float c );
				static int min( int a, int b );
				static int min( int a, int b, int c );
				static int min( int values );

				static double normalizedRandom( void );
				static double random( double max );
				static double random( double min, double max );
				static float random( float max );
				static float random( float min, float max );
				static double random( int max );
				static double random( int min, int max );

				static double reduceAngle( double theta );
				static float reduceAngle( float theta );

				static double roundTo( double val, double prec );
				static float roundTo( float val, float prec );
				static int roundTo( int val, int prec );

				static int sign( double x );
				static int sign( float x );
				static int sign( int x );
				
				static double sqrt( double x );
				static float sqrt( float x );

				//TODO
				static unsigned floatToBits( float x );
				static float intBitsToFloat ( unsigned x );

				static bool isNan( double d );
		};
	}
}

#endif
