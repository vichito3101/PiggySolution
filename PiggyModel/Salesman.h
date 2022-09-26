/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "Person.h"
#include "SystemUser.h"

namespace PiggyModel {
    public ref class Salesman : public SystemUser {
    public:
        property String^ Turn;
        property String^ Performance;
    };
}




