/**
 * Project Untitled
 */


#pragma once

using namespace System;

namespace PiggyModel {
    public ref class Stock {
    public:
        property int AvailableQuantity;
        property int TargetQuantity;
        property String^ Unit;
    };
}



