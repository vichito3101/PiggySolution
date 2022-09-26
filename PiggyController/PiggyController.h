#pragma once

using namespace System;
using namespace PiggyModel;
using namespace System::Collections::Generic;


namespace PiggyController {
	public ref class Controller
	{
	private: 
		static List <SystemUser^>^ supervisorsList = gcnew List <SystemUser^>();
		static List <SystemUser^>^ salesmenList = gcnew List <SystemUser^>();
		static List <Product^>^ productlist = gcnew List <Product^>();
	public:
		static int AddSupervisor(SystemUser^ supervisor);
		static int AddSalesman(SystemUser^ salesman);
		static int UpdateSupervisor(SystemUser^ supervisor);
		static int UpdateSalesman(SystemUser^ salesman);
		static int DeleteSupervisor(int supervisorId);
		static int DeleteSalesman(int salesmanId);
		//static int PromoteSalesman(SystemUser^ salesman);
		static SystemUser^ QuerySupervisorById(int supervisorId);
		static SystemUser^ QuerySalesmanById(int salesmanId);
		static SystemUser^ Login(String^ username, String^ password);
		
		static int AddProduct(Product^ product); //Métodos estáticos o de clase
		static int UpdateProduct(Product^ product);
		static int DeleteProduct(int productId);
		static List <Product^>^ QueryAllProducts();
		static Product^ QueryProductById(int productId);
	


		// TODO: Agregue aquí los métodos de esta clase.
	};
}
