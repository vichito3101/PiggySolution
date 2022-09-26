/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Person.h"

namespace PiggyModel {
    public ref class Customer : public Person {
    public:
        property int PurchaseCount;
        property double ExpendedAmount;
    };
}


