/**
 * Project Untitled
 */


#pragma once

using namespace System;
using namespace System::Collections::Generic;

#include "Product.h"
#include "StoreManager.h"
#include "ComboDetail.h"

namespace PiggyModel {
    public ref class Combo : public Product {
    public:
        property DateTime StartTime;
        property DateTime EndTime;
        property bool Status;
        property StoreManager^ StoreManager;
        property List<ComboDetail^>^ ComboDetails;
    };
}