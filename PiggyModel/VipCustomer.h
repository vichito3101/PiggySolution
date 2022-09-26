/**
 * Project Untitled
 */

#pragma once

using namespace System;

#include "Customer.h"

namespace PiggyModel {
	public ref class VipCustomer : public Customer {
	public:
		property bool CardWasDelivered;
	};
}



