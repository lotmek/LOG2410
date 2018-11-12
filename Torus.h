///////////////////////////////////////////////////////////
//  Torus.h
//  Implementation of the Class Torus
//  Created on:      25-oct.-2018 20:47:57
//  Original author: p482457
///////////////////////////////////////////////////////////


#include "PrimitiveAbs.h"

class Torus : public PrimitiveAbs
{

public:
	Torus(const Point3D& pt, float smallRad, float bigRad);
	virtual ~Torus();
	virtual Torus* clone() const;

	virtual size_t getNbParameters() const;
	virtual PrimitiveParams getParameters() const;
	virtual void setParameter(size_t pIndex, float pValue);

private:
	virtual std::ostream& toStream(std::ostream& o) const;


	float m_radius[2];
	
};

#pragma once
