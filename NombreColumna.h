#pragma once

namespace Automata_Finito_Determinista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NomColumna
	/// </summary>
	public ref class NomColumna : public System::Windows::Forms::Form
	{
	public:
		property String^ respuesta;
		NomColumna(void)
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
		~NomColumna()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(323, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INGRESA EL NOMBRE DE LA COLUMNA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(59, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"*Este será el simbolo con el cual pasas de un estado a otro*";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(147, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"*Debe ser de largo 1*";
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(174, 36);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Ejemplo: \'a\'";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Enter += gcnew System::EventHandler(this, &NomColumna::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &NomColumna::textBox1_Leave);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &NomColumna::textBox1_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ingresa simbolo: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NomColumna::button1_Click);
			// 
			// NomColumna
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 166);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NomColumna";
			this->Text = L"NomColumna";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Ejemplo: 'a'")
		{
			textBox1->Text = "";
			textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
		}
	}

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "Ejemplo: 'a'";
			textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
		}
	}
	
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			button1->PerformClick();
	}	   

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 1) {
			MessageBox::Show("Verifique el formato del simbolo.");
			return;
		}
		this->respuesta = textBox1->Text;

		this->DialogResult = System::Windows::Forms::DialogResult::OK;

		this->Close();
	}
};
}
