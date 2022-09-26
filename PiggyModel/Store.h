/**
 * Project Untitled
 */


#pragma once

using namespace System;
using namespace System::Collections::Generic;
#include "StoreProduct.h"

namespace PiggyModel {
    public ref class Store {
    public:
        property String^ Name;
        property String^ Address;
        property int PostalCode;
        property int WorkersCount;
        property double SaleGoal;
        property double RentingPrince;
        property List<StoreProduct^>^ StoreProducts;
    };
}




