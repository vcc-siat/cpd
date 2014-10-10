#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include "Base/matrix.hpp"

namespace cpd
{
	typedef enum {EMPTY, RIGID, AFFINE, NONRIGID} RegType;

	template <class T>
	void getInputData(const std::string& model_file, const std::string& data_file, 
		T& model, T& data)
	{
		// read files and fill the model and data matrices
	}
}

#endif 