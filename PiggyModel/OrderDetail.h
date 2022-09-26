/**
 * Project Untitled
 */

#pragma once

using namespace System;
using namespace System::Collections::Generic;
#include "Product.h"


namespace PiggyModel {
    public ref class OrderDetail {
    public:
        property int Id;
        property int Quantity;
        property double Subtotal;
        property double UnitPrice;
        property List<Product^>^ Products;
    };
}



