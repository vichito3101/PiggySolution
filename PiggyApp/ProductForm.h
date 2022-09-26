#pragma once

namespace PiggyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PiggyModel;
	using namespace PiggyController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;


	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtStock;




	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::DataGridView^ dgvProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductStock;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvProduct = (gcnew System::Windows::Forms::DataGridView());
			this->ProductId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(668, 28);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Descripción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Precio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Stock";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(153, 38);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(178, 22);
			this->txtId->TabIndex = 7;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(153, 67);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(245, 22);
			this->txtName->TabIndex = 8;
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(448, 31);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(136, 161);
			this->pbPhoto->TabIndex = 9;
			this->pbPhoto->TabStop = false;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(153, 96);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(245, 66);
			this->txtDescription->TabIndex = 10;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(153, 169);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(102, 22);
			this->txtPrice->TabIndex = 11;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(153, 198);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 22);
			this->txtStock->TabIndex = 12;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(40, 244);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(149, 23);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(245, 244);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(140, 23);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(448, 244);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(122, 23);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// dgvProduct
			// 
			this->dgvProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ProductId,
					this->ProductName, this->ProductPrice, this->ProductStock
			});
			this->dgvProduct->Location = System::Drawing::Point(13, 299);
			this->dgvProduct->Name = L"dgvProduct";
			this->dgvProduct->RowHeadersWidth = 51;
			this->dgvProduct->RowTemplate->Height = 24;
			this->dgvProduct->Size = System::Drawing::Size(533, 150);
			this->dgvProduct->TabIndex = 16;
			this->dgvProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProduct_CellClick);
			// 
			// ProductId
			// 
			this->ProductId->HeaderText = L"Id";
			this->ProductId->MinimumWidth = 6;
			this->ProductId->Name = L"ProductId";
			this->ProductId->Width = 50;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 250;
			// 
			// ProductPrice
			// 
			this->ProductPrice->HeaderText = L"Precio";
			this->ProductPrice->MinimumWidth = 6;
			this->ProductPrice->Name = L"ProductPrice";
			this->ProductPrice->Width = 80;
			// 
			// ProductStock
			// 
			this->ProductStock->HeaderText = L"Stock";
			this->ProductStock->MinimumWidth = 6;
			this->ProductStock->Name = L"ProductStock";
			this->ProductStock->Width = 125;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 505);
			this->Controls->Add(this->dgvProduct);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"ProductForm";
			this->Text = L"Mantenimiento de Productos";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void RefreshGrid() {
				List<Product^>^ productList=Controller::QueryAllProducts();
				dgvProduct->Rows->Clear();
				for (int i = 0; i < productList->Count; i++) {
					dgvProduct->Rows->Add(gcnew array<String^>{"" + productList[i], productList[i]->Name, "" + productList[i]->Price, "" + productList[i]->Stock});
				}
			}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ p = gcnew Product();
		p->Id == Int32::Parse(txtId->Text);
		p -> Name = txtName->Text;
		p->Description = txtDescription->Text;
		p->Price = Double::Parse(txtPrice->Text);
		p->Stock = Int32::Parse(txtStock->Text);
		p->Status = 'A';
		Controller::AddProduct(p);
		RefreshGrid();


	}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ p = gcnew Product();
	p->Id == Int32::Parse(txtId->Text);
	p->Name = txtName->Text;
	p->Description = txtDescription->Text;
	p->Price = Double::Parse(txtPrice->Text);
	p->Stock = Int32::Parse(txtStock->Text);
	p->Status = 'A';
	Controller::UpdateProduct(p);
	RefreshGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtId->Text);
	Controller::DeleteProduct(productId);
	RefreshGrid();
}
private: System::Void dgvProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvProduct->SelectedCells[0]->RowIndex;
	int productId = Int32::Parse(dgvProduct->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);

	txtId->Text = "" + p->Id;
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtPrice->Text = "" + p->Price;
	txtStock->Text = "" + p->Stock;
}
};
}
