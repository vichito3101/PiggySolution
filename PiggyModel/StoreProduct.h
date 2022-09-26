/**
 * Project Untitled
 */

#pragma once

using namespace System;
#include "Product.h"

namespace PiggyModel {
    public ref class StoreProduct {
    public:
        property double SalePrice;
        property double DiscountPercentage;
        property Product^ Product;
    };
}



