#include "TriangleIntersector.h"
#include "IsectData3D.h"
#include "Triangle3D.h"
#include "Ray3D.h"


toxi::geom::TriangleIntersector::TriangleIntersector(void)
{
	//TriangleIntersector( Triangle3D() );
}

toxi::geom::TriangleIntersector::TriangleIntersector( const Triangle3D & tri )
{
	this->triangle = tri;
	this->isectData = IsectData3D();
}


toxi::geom::TriangleIntersector::~TriangleIntersector(void)
{
}

toxi::geom::IsectData3D toxi::geom::TriangleIntersector::getIntersectionData()
{
	return isectData;
}

toxi::geom::Triangle3D toxi::geom::TriangleIntersector::getTriangle()
{
	return triangle;
}

bool toxi::geom::TriangleIntersector::intersectsRay( Ray3D & ray )
{
	isectData.isIntersection = false;
	Vec3D n = triangle.computeNormal();
	float dotprod = n.dot(ray.dir);
	if (dotprod < 0) {
		Vec3D rt = ray.sub(triangle.a);
		double t = -(double) (n.getX() * rt.getX() + n.getY() * rt.getY() + n.getZ() * rt.getZ())
			/ (n.getX() * ray.dir.getX() + n.getY() * ray.dir.getY() + n.getZ() * ray.dir.getZ());
		if (t >= toxi::math::MathUtils::EPS) {
			Vec3D pos = ray.getPointAtDistance((float) t);
			// check if pos is inside triangle
			if (triangle.containsPoint( pos )) {
				isectData.isIntersection = true;
				isectData.pos = pos;
				isectData.normal = n;
				isectData.dist = (float) t;
				isectData.dir = isectData.pos.sub( ray ).normalize();
			}
		}
	}
	return isectData.isIntersection;
}

toxi::geom::TriangleIntersector toxi::geom::TriangleIntersector::setTriangle( Triangle3D & tri )
{
	this->triangle = tri;
	return *this;
}
