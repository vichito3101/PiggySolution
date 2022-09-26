/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Stock.h"

namespace PiggyModel {
    public ref class Product {
    public:
        property int Id;
        property double Price;
        property String^ Name;
        property String^ Description;
        property array<Byte>^ Photo;
        property int Stock;
        property char Status;
    };
}



