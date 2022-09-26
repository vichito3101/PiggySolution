/**
 * Project Untitled
 */


#pragma once

using namespace System;
using namespace System::Collections::Generic;

#include "Salesman.h"
#include "Customer.h"
#include "SaleDetail.h"
#include "Store.h"

namespace PiggyModel {
    public ref class Sale {
    public:
        property double Total;
        property int Id;
        property DateTime TxnDate;
        property DateTime Hour;
        property Salesman^ Salesman;
        property Customer^ Customer;
        property Store^ Store;
        property List<SaleDetail^>^ SaleDetails;
    };
}



