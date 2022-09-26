/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "SystemUser.h"

namespace PiggyModel {
    public ref class Supervisor : public SystemUser {
    public:
        property String^ Turn;
        property String^ Area;
    };
}



