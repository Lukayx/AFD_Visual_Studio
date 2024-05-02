#pragma once

namespace Automata_Finito_Determinista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		private: System::Windows::Forms::Label^ Titulo2;
		private: System::Windows::Forms::TextBox^ txt_palabra;
		private: System::Windows::Forms::Button^ boton_usarAFD;
		private: System::Windows::Forms::Button^ boton_leerPalabra;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ out_textBox;
	private: System::Windows::Forms::Button^ boton_limpiarInfo;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Titulo2 = (gcnew System::Windows::Forms::Label());
			this->txt_palabra = (gcnew System::Windows::Forms::TextBox());
			this->boton_usarAFD = (gcnew System::Windows::Forms::Button());
			this->boton_leerPalabra = (gcnew System::Windows::Forms::Button());
			this->boton_limpiarInfo = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->out_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Titulo2
			// 
			this->Titulo2->AutoSize = true;
			this->Titulo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo2->Location = System::Drawing::Point(99, 29);
			this->Titulo2->Name = L"Titulo2";
			this->Titulo2->Size = System::Drawing::Size(265, 20);
			this->Titulo2->TabIndex = 11;
			this->Titulo2->Text = L"DEFINIR LA PALABRA A LEER";
			// 
			// txt_palabra
			// 
			this->txt_palabra->BackColor = System::Drawing::Color::White;
			this->txt_palabra->Enabled = false;
			this->txt_palabra->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_palabra->Location = System::Drawing::Point(198, 72);
			this->txt_palabra->Name = L"txt_palabra";
			this->txt_palabra->Size = System::Drawing::Size(232, 20);
			this->txt_palabra->TabIndex = 12;
			this->txt_palabra->Text = L"Ejemplo: \"00110100\"";
			this->txt_palabra->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// boton_usarAFD
			// 
			this->boton_usarAFD->Enabled = false;
			this->boton_usarAFD->Location = System::Drawing::Point(42, 115);
			this->boton_usarAFD->Name = L"boton_usarAFD";
			this->boton_usarAFD->Size = System::Drawing::Size(118, 37);
			this->boton_usarAFD->TabIndex = 13;
			this->boton_usarAFD->Text = L"Usar este AFD";
			this->boton_usarAFD->UseVisualStyleBackColor = true;
			this->boton_usarAFD->Click += gcnew System::EventHandler(this, &MyForm::boton_usarAFD_Click);
			// 
			// boton_leerPalabra
			// 
			this->boton_leerPalabra->Enabled = false;
			this->boton_leerPalabra->Location = System::Drawing::Point(181, 115);
			this->boton_leerPalabra->Name = L"boton_leerPalabra";
			this->boton_leerPalabra->Size = System::Drawing::Size(118, 37);
			this->boton_leerPalabra->TabIndex = 14;
			this->boton_leerPalabra->Text = L"Leer Palabra";
			this->boton_leerPalabra->UseVisualStyleBackColor = true;
			this->boton_leerPalabra->Click += gcnew System::EventHandler(this, &MyForm::boton_leerPalabra_Click);
			// 
			// boton_limpiarInfo
			// 
			this->boton_limpiarInfo->Enabled = false;
			this->boton_limpiarInfo->Location = System::Drawing::Point(319, 115);
			this->boton_limpiarInfo->Name = L"boton_limpiarInfo";
			this->boton_limpiarInfo->Size = System::Drawing::Size(118, 37);
			this->boton_limpiarInfo->TabIndex = 15;
			this->boton_limpiarInfo->Text = L"Limpiar Información";
			this->boton_limpiarInfo->UseVisualStyleBackColor = true;
			this->boton_limpiarInfo->Click += gcnew System::EventHandler(this, &MyForm::boton_limpiarInfo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 15);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ingrese la palabra a leer: ";
			// 
			// out_textBox
			// 
			this->out_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->out_textBox->Location = System::Drawing::Point(12, 191);
			this->out_textBox->Multiline = true;
			this->out_textBox->Name = L"out_textBox";
			this->out_textBox->Size = System::Drawing::Size(476, 266);
			this->out_textBox->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 469);
			this->Controls->Add(this->out_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->boton_limpiarInfo);
			this->Controls->Add(this->boton_leerPalabra);
			this->Controls->Add(this->boton_usarAFD);
			this->Controls->Add(this->txt_palabra);
			this->Controls->Add(this->Titulo2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void boton_usarAFD_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void boton_leerPalabra_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void boton_limpiarInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
