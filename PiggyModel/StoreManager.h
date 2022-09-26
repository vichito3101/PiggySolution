/**
 * Project Untitled
 */


#pragma once

using namespace System;

#include "SystemUser.h"
#include "Store.h"


namespace PiggyModel {
	public ref class StoreManager : public SystemUser {
	public:
		property String^ StoreName;
		property Store^ Store;
	};
}




