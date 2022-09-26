/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Product.h"

namespace PiggyModel {
    public ref class SaleDetail : public Product {
    public:
        property int Id;
        property int Quantity;
        property double Subtotal;
        property double UnitPrice;
    };
}



