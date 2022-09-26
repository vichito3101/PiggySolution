/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Person.h"

namespace PiggyModel {
    public ref class Provider : public Person {
    public:
        property int Id;
        property String^ RUC;
        property String^ Website;
        property String^ AccountNumber;
        property String^ Email;
        property String^ Name;
    };
}



