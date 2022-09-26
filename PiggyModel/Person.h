/**
 * Project Untitled
 */


#pragma once

using namespace System;

namespace PiggyModel {
    public ref class Person {
    public:
        property String^ Name;
        property String^ Surname;
        property String^ Email;
        property String^ DNI;
        property DateTime BirthDate;
        property String^ Gender;
        property int Id;
    };
}



