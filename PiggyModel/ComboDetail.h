/**
 * Project Untitled
 */


#pragma once

using namespace System;
using namespace System::Collections::Generic;

#include "Product.h"

namespace PiggyModel {
	public ref class ComboDetail {
	public:
		property double FinalPrice;
		property List<Product^>^ Products;
	};
}


