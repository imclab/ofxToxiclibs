#pragma once

#ifndef __ISECDATA3D_H__
#define __ISECDATA3D_H__

#include < string >
#include < sstream >

#include "Vec3D.h"

namespace toxi
{
	namespace geom
	{
		class Vec3D;
		class IsectData3D
		{
		public:
			IsectData3D(void);
			~IsectData3D(void);

			void clear();
			std::string toString();

			bool isIntersection;
			float dist;
			toxi::geom::Vec3D pos;
			toxi::geom::Vec3D dir;
			toxi::geom::Vec3D normal;
		};
	}
}

#endif
