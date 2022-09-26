#include "pch.h"

#include "PiggyController.h"

int PiggyController::Controller::AddSupervisor(SystemUser^ supervisor)
{
    supervisorsList->Add(supervisor);
    return 1;
}

int PiggyController::Controller::AddSalesman(SystemUser^ salesman)
{
    salesmenList->Add(salesman);
    return 1;
}

int PiggyController::Controller::UpdateSupervisor(SystemUser^ supervisor)
{
    for (int i = 0; i < supervisorsList->Count; i++) {
        if (supervisor->Id == supervisorsList[i]->Id) {
            supervisorsList[i] = supervisor;
            return 1;
        }
    }
    return 0;
}

int PiggyController::Controller::UpdateSalesman(SystemUser^ salesman)
{
    for (int i = 0; i < salesmenList->Count; i++) {
        if (salesman->Id == salesmenList[i]->Id) {
            salesmenList[i] = salesman;
            return 1;
        }
    }
    return 0;
}

int PiggyController::Controller::DeleteSupervisor(int supervisorId)
{
    for (int i = 0; i < supervisorsList->Count; i++) {
        if (supervisorId == supervisorsList[i]->Id) {
            supervisorsList->RemoveAt(i);
            return 1;
        }
    }
    return 0;
}

int PiggyController::Controller::DeleteSalesman(int salesmanId)
{
    for (int i = 0; i < salesmenList->Count; i++) {
        if (salesmanId == salesmenList[i]->Id) {
            salesmenList->RemoveAt(i);
            return 1;
        }
    }
    return 0;
}

SystemUser^ PiggyController::Controller::QuerySupervisorById(int supervisorId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

SystemUser^ PiggyController::Controller::QuerySalesmanById(int salesmanId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}


SystemUser^ PiggyController::Controller::Login(String^ username, String^ password)
{
    SystemUser^ systemuser;

   
    if (username == "avelis" && password == "vichito") {
        systemuser = gcnew SystemUser();
        systemuser->Id = 1;
        systemuser->Name = "Alonso";
        systemuser->Surname = "Velis";
        systemuser->DNI = "66666666";
        systemuser->Email = "alonso.velis@pucp.edu.pe";
        systemuser->Salary = 4500;
        systemuser->Username = "avelis";
        systemuser->Password = "vichito";
        return systemuser;
    }
    

    for (int i = 0; i < salesmenList->Count; i++) {
        if (username == salesmenList[i]->Username && password == salesmenList[i]->Password) {
            return systemuser;
        }
    }

    for (int j = 0; j < supervisorsList->Count; j++) {
        if (username == supervisorsList[j]->Username && password == supervisorsList[j]->Password) {
            return systemuser;
        }
    }
    return systemuser;
    // TODO: Insertar una instrucción "return" aquí
}

int PiggyController::Controller::AddProduct(Product^ product)
{
    productlist->Add(product);
    return 1;
}

int PiggyController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productlist->Count; i++) {
        if (product->Id == productlist[i]->Id) {
            productlist[i] = product;
            return 1;
        }
    }
    return 0;
}


int PiggyController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productlist->Count; i++) {
        if (productId ==productlist[i]->Id) {
            productlist->RemoveAt(i);
            return 1;
        }
    }

    return 0;
}


List<Product^>^ PiggyController::Controller::QueryAllProducts()
{
    List<Product^>^ activeProductsList = gcnew List<Product^>();

    for (int i = 0; i < productlist->Count; i++) {
        if (productlist[i]->Status == 'A') {
            activeProductsList->Add(productlist[i]);
        }
    }

    return activeProductsList;
    // TODO: Insertar una instrucción "return" aquí
}

Product^ PiggyController::Controller::QueryProductById(int productId)
{
    for (int i = 0; i < productlist->Count; i++) {
        if (productId == productlist[i]->Id) {
            return productlist[i];
        }
    }
    return nullptr;
    // TODO: Insertar una instrucción "return" aquí
}