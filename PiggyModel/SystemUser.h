/**
 * Project Untitled
 */


#pragma once

using namespace System;
#include "Person.h"


namespace PiggyModel {
    public ref class SystemUser : public Person {
    public:
        property String^ Username;
        property double Salary;
        property String^ Password;
    };
}



