/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Provider.h"


namespace PiggyModel {
    public ref class Order {
    public:
        property String^ Status;
        property Double TotalCost;
        property Provider^ Provider;
    };
}


