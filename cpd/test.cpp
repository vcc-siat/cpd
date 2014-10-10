#include <iostream>
#include "Base/vector.hpp"
#include "Base/matrix.hpp"
#include "Base/data.hpp"
#include "Core/registrator.hpp"
//#include "Core/cpd_base.h"
#include "Core/cpd_rigid.hpp"

int main()
{
	cpd::Matrix2<cpd::value_type> m;
	m(0,0) = 3;
	m(1,0) = 2.5;
	m(0,1) = -1;
	m(1,1) = m(1,0) + m(0,1);
	std::cout << "Here is the matrix m:\n" << m << std::endl;
	cpd::Vector2<float> v;
	v(0) = 4;
	v(1) = v(0) - 1;
	std::cout << "Here is the vector v:\n" << v << std::endl;

	cpd::Matrix2<cpd::value_type> mat;
	cpd::Registrator<cpd::Matrix2<cpd::value_type> > reg;
	reg.getCorrespondences();
	mat = reg.getData();

	cpd::CPDRigid<cpd::Matrix3<cpd::value_type> >* cpd_base = new cpd::CPDRigid<cpd::Matrix3<cpd::value_type> >;
	cpd_base->apply();

}