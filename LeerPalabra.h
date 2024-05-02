#pragma once
#include "Header.h"
namespace Automata_Finito_Determinista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de leerPalabra
	/// </summary>
	public ref class leerPalabra : public System::Windows::Forms::Form
	{
	public:
		leerPalabra(N_Nodo::Nodo^ nodo)
		{
			this->nodo = nodo;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~leerPalabra()
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
	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ Titulo2;
	private: System::Windows::Forms::TextBox^ txt_palabra;
	private: System::Windows::Forms::Button^ boton_volver;
	private: System::Windows::Forms::Button^ boton_leerPalabra;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ out_textBox;
	private: N_Nodo::Nodo^ nodo;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->Titulo2 = (gcnew System::Windows::Forms::Label());
			   this->txt_palabra = (gcnew System::Windows::Forms::TextBox());
			   this->boton_volver = (gcnew System::Windows::Forms::Button());
			   this->boton_leerPalabra = (gcnew System::Windows::Forms::Button());
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
			   this->txt_palabra->ForeColor = System::Drawing::SystemColors::MenuText;
			   this->txt_palabra->Location = System::Drawing::Point(198, 72);
			   this->txt_palabra->Name = L"txt_palabra";
			   this->txt_palabra->Size = System::Drawing::Size(232, 20);
			   this->txt_palabra->TabIndex = 12;
			   this->txt_palabra->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			   // 
			   // boton_volver
			   // 
			   this->boton_volver->Location = System::Drawing::Point(49, 115);
			   this->boton_volver->Name = L"boton_volver";
			   this->boton_volver->Size = System::Drawing::Size(170, 40);
			   this->boton_volver->TabIndex = 13;
			   this->boton_volver->Text = L"Volver";
			   this->boton_volver->UseVisualStyleBackColor = true;
			   this->boton_volver->Click += gcnew System::EventHandler(this, &leerPalabra::boton_volver_Click);
			   // 
			   // boton_leerPalabra
			   // 
			   this->boton_leerPalabra->Location = System::Drawing::Point(261, 115);
			   this->boton_leerPalabra->Name = L"boton_leerPalabra";
			   this->boton_leerPalabra->Size = System::Drawing::Size(170, 40);
			   this->boton_leerPalabra->TabIndex = 14;
			   this->boton_leerPalabra->Text = L"Leer Palabra";
			   this->boton_leerPalabra->UseVisualStyleBackColor = true;
			   this->boton_leerPalabra->Click += gcnew System::EventHandler(this, &leerPalabra::boton_leerPalabra_Click);
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
			   // leerPalabra
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(500, 469);
			   this->Controls->Add(this->out_textBox);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->boton_leerPalabra);
			   this->Controls->Add(this->boton_volver);
			   this->Controls->Add(this->txt_palabra);
			   this->Controls->Add(this->Titulo2);
			   this->Name = L"leerPalabra";
			   this->Text = L"Leer Palabra";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void boton_volver_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	private: System::Void boton_leerPalabra_Click(System::Object^ sender, System::EventArgs^ e)
	{
		bool pertenece = nodo->palabraAFD(txt_palabra->Text->ToString(), nodo);
		if (pertenece)
		{
			out_textBox->Text += String::Format("La palabra '{0}' es aceptada por el AFD\r\n", txt_palabra->Text);
		}
		else
		{
			out_textBox->Text += String::Format("La palabra '{0}' NO es aceptada por el AFD\r\n", txt_palabra->Text);
		}
	}
	};
}
