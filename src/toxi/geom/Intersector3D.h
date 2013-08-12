#pragma once

#include "IsectData3D.h"
#include "Ray3D.h"

namespace toxi
{
	namespace geom
	{
		class Intersector3D
		{
		public:
			Intersector3D(void);
			~Intersector3D(void);

			virtual IsectData3D getIntersectionData() = 0;
			virtual bool intersectsRay( Ray3D ray ) = 0;
		};
	}
}


