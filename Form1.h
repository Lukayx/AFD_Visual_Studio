#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used


#include "NombreColumna.h"
#include "PlaceHolder.h"
#include "Header.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace PlaceHolder;
    using namespace N_Nodo;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txt_estadoInicial;
    private: System::Windows::Forms::TextBox^ txt_estadosFinales;
    private: System::Windows::Forms::Button^ boton_transiciones;
    private: System::Windows::Forms::Label^ Titulo1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::Windows::Forms::Button^ boton_agregarFila;
    private: System::Windows::Forms::Button^ boton_agregarColumna;
    private: System::Windows::Forms::Button^ boton_quitarFila;
    private: System::Windows::Forms::Button^ boton_quitarColumna;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estados;
    private: ArrayList^ nombreEstados = gcnew ArrayList();;
    private: ArrayList^ estadosFinales = gcnew ArrayList();
    private: ArrayList^ simbolos = gcnew ArrayList();
    private: List<Nodo^>^ listaEstados;
    private: Nodo^ Nodo;






    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txt_estadosFinales = (gcnew System::Windows::Forms::TextBox());
            this->boton_transiciones = (gcnew System::Windows::Forms::Button());
            this->Titulo1 = (gcnew System::Windows::Forms::Label());
            this->txt_estadoInicial = (gcnew System::Windows::Forms::TextBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Estados = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->boton_agregarFila = (gcnew System::Windows::Forms::Button());
            this->boton_agregarColumna = (gcnew System::Windows::Forms::Button());
            this->boton_quitarFila = (gcnew System::Windows::Forms::Button());
            this->boton_quitarColumna = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(46, 135);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(83, 15);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Estado Inicial:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(46, 188);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(97, 15);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Estados Finales:";
            // 
            // txt_estadosFinales
            // 
            this->txt_estadosFinales->ForeColor = System::Drawing::SystemColors::ScrollBar;
            this->txt_estadosFinales->Location = System::Drawing::Point(160, 187);
            this->txt_estadosFinales->Name = L"txt_estadosFinales";
            this->txt_estadosFinales->Size = System::Drawing::Size(242, 20);
            this->txt_estadosFinales->TabIndex = 7;
            this->txt_estadosFinales->Text = L"Ejemplo: 3,5,7";
            this->txt_estadosFinales->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txt_estadosFinales->Enter += gcnew System::EventHandler(this, &Form1::txt_estadosFinales_EnterLeave);
            this->txt_estadosFinales->Leave += gcnew System::EventHandler(this, &Form1::txt_estadosFinales_EnterLeave);
            // 
            // boton_transiciones
            // 
            this->boton_transiciones->Location = System::Drawing::Point(150, 243);
            this->boton_transiciones->Name = L"boton_transiciones";
            this->boton_transiciones->Size = System::Drawing::Size(149, 37);
            this->boton_transiciones->TabIndex = 9;
            this->boton_transiciones->Text = L"Ver Transiciones de Estados";
            this->boton_transiciones->UseVisualStyleBackColor = true;
            this->boton_transiciones->Click += gcnew System::EventHandler(this, &Form1::boton_Transiciones_Click);
            // 
            // Titulo1
            // 
            this->Titulo1->AutoSize = true;
            this->Titulo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Titulo1->Location = System::Drawing::Point(23, 90);
            this->Titulo1->Name = L"Titulo1";
            this->Titulo1->Size = System::Drawing::Size(410, 20);
            this->Titulo1->TabIndex = 10;
            this->Titulo1->Text = L"DEFINIR EL AUTOMATA FINITO DETERMINISTA";
            // 
            // txt_estadoInicial
            // 
            this->txt_estadoInicial->ForeColor = System::Drawing::SystemColors::ScrollBar;
            this->txt_estadoInicial->Location = System::Drawing::Point(160, 134);
            this->txt_estadoInicial->Name = L"txt_estadoInicial";
            this->txt_estadoInicial->Size = System::Drawing::Size(242, 20);
            this->txt_estadoInicial->TabIndex = 16;
            this->txt_estadoInicial->Text = L"Ingrese el numero del estado inicial";
            this->txt_estadoInicial->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txt_estadoInicial->Enter += gcnew System::EventHandler(this, &Form1::txt_estadoInicial_EnterLeave);
            this->txt_estadoInicial->Leave += gcnew System::EventHandler(this, &Form1::txt_estadoInicial_EnterLeave);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AllowUserToResizeColumns = false;
            this->dataGridView1->AllowUserToResizeRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
            this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::MenuHighlight;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
            dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->ColumnHeadersHeight = 25;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Estados });
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::InactiveCaption;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView1->EnableHeadersVisualStyles = false;
            this->dataGridView1->Location = System::Drawing::Point(5, 17);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            this->dataGridView1->RowHeadersWidth = 4;
            this->dataGridView1->Size = System::Drawing::Size(447, 297);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->Tag = L"";
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
            this->dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &Form1::dataGridView1_CellFormatting);

            // 
            // Estados
            // 
            this->Estados->HeaderText = L"Estados";
            this->Estados->Name = L"Estados";
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->boton_agregarFila);
            this->flowLayoutPanel1->Controls->Add(this->boton_agregarColumna);
            this->flowLayoutPanel1->Controls->Add(this->boton_quitarFila);
            this->flowLayoutPanel1->Controls->Add(this->boton_quitarColumna);
            this->flowLayoutPanel1->Location = System::Drawing::Point(7, 336);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(442, 75);
            this->flowLayoutPanel1->TabIndex = 17;
            // 
            // boton_agregarFila
            // 
            this->boton_agregarFila->BackColor = System::Drawing::Color::DarkGreen;
            this->boton_agregarFila->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->boton_agregarFila->ForeColor = System::Drawing::Color::White;
            this->boton_agregarFila->Location = System::Drawing::Point(3, 3);
            this->boton_agregarFila->Name = L"boton_agregarFila";
            this->boton_agregarFila->Size = System::Drawing::Size(215, 30);
            this->boton_agregarFila->TabIndex = 0;
            this->boton_agregarFila->TabStop = false;
            this->boton_agregarFila->Text = L"Agregar  Fila";
            this->boton_agregarFila->UseVisualStyleBackColor = false;
            this->boton_agregarFila->UseWaitCursor = true;
            this->boton_agregarFila->Click += gcnew System::EventHandler(this, &Form1::boton_agregarFila_Click);
            // 
            // boton_agregarColumna
            // 
            this->boton_agregarColumna->BackColor = System::Drawing::Color::DarkGreen;
            this->boton_agregarColumna->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->boton_agregarColumna->ForeColor = System::Drawing::Color::White;
            this->boton_agregarColumna->Location = System::Drawing::Point(224, 3);
            this->boton_agregarColumna->Name = L"boton_agregarColumna";
            this->boton_agregarColumna->Size = System::Drawing::Size(215, 30);
            this->boton_agregarColumna->TabIndex = 1;
            this->boton_agregarColumna->Text = L"Agregar Columna";
            this->boton_agregarColumna->UseVisualStyleBackColor = false;
            this->boton_agregarColumna->UseWaitCursor = true;
            this->boton_agregarColumna->Click += gcnew System::EventHandler(this, &Form1::boton_agregarColumna_Click);
            // 
            // boton_quitarFila
            // 
            this->boton_quitarFila->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(10)));
            this->boton_quitarFila->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->boton_quitarFila->ForeColor = System::Drawing::Color::White;
            this->boton_quitarFila->Location = System::Drawing::Point(3, 39);
            this->boton_quitarFila->Name = L"boton_quitarFila";
            this->boton_quitarFila->Size = System::Drawing::Size(215, 30);
            this->boton_quitarFila->TabIndex = 2;
            this->boton_quitarFila->Text = L"Quitar Fila";
            this->boton_quitarFila->UseVisualStyleBackColor = false;
            this->boton_quitarFila->UseWaitCursor = true;
            this->boton_quitarFila->Click += gcnew System::EventHandler(this, &Form1::boton_quitarFila_Click);
            // 
            // boton_quitarColumna
            // 
            this->boton_quitarColumna->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(10)));
            this->boton_quitarColumna->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->boton_quitarColumna->ForeColor = System::Drawing::Color::White;
            this->boton_quitarColumna->Location = System::Drawing::Point(224, 39);
            this->boton_quitarColumna->Name = L"boton_quitarColumna";
            this->boton_quitarColumna->Size = System::Drawing::Size(215, 30);
            this->boton_quitarColumna->TabIndex = 3;
            this->boton_quitarColumna->Text = L"Quitar columna";
            this->boton_quitarColumna->UseVisualStyleBackColor = false;
            this->boton_quitarColumna->UseWaitCursor = true;
            this->boton_quitarColumna->Click += gcnew System::EventHandler(this, &Form1::boton_quitarColumna_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->Titulo1);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->txt_estadoInicial);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->txt_estadosFinales);
            this->panel1->Controls->Add(this->boton_transiciones);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(462, 436);
            this->panel1->TabIndex = 18;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->dataGridView1);
            this->panel2->Controls->Add(this->flowLayoutPanel1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
            this->panel2->Location = System::Drawing::Point(460, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(456, 436);
            this->panel2->TabIndex = 19;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(916, 436);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

    // You can call the functions at a button click. If you prefer, 
        // you can call them by clicking a menu item.

    void MyForm_Load(Object^ sender, EventArgs^ e)
    {
        
    }

    private: System::Void creaAFD()
    {
        int rowLength = dataGridView1->Rows->Count;
        int columnLength = dataGridView1->ColumnCount;        
        listaEstados = gcnew List<N_Nodo::Nodo^>(rowLength);
        N_Nodo::Nodo^ nodo;
        for (size_t i = 0; i < rowLength; i++)
        {
            int index = 0;
            while (index < estadosFinales->Count && estadosFinales[index] != i)index++;
            nodo = gcnew N_Nodo::Nodo(index < estadosFinales->Count, nombreEstados[i]->ToString());
            listaEstados->Add(nodo);
            for (size_t j = 1; j < columnLength; j++)
            {
                String^ valor = (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) ? dataGridView1->Rows[i]->Cells[j]->Value->ToString() : "";
                if(valor->Length!=0)
                {
                    int indice = Int32::Parse(valor->Substring(1,valor->Length-1));
                    listaEstados[i]->agregarTransicion(simbolos[j - 1]->ToString(), listaEstados[indice]);
                }
                else
                {
                    listaEstados[i]->agregarTransicion(simbolos[j - 1]->ToString(), nullptr);
                }
            }
                    
        }
    }

    private: bool encontrarEstado(String^ valor)
    {
        for (int i = 0; i < nombreEstados->Count; i++) {
            if (nombreEstados[i]->ToString() == valor) {
                return true;
            }
        }
        return false;
    }      
    
    private: bool verificaAFD(int estadoInicial) {
        return false;
    }

    private: System::Void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
    {
        if (dataGridView1->Columns[e->ColumnIndex]->GetType() == DataGridViewTextBoxColumn::typeid &&
            e->RowIndex >= 0 && e->ColumnIndex > 0) {
            // Obtener el valor de la celda actual
            String^ value = Convert::ToString(e->Value);

            // Verificar si el valor es nulo o está vacío
            if (!String::IsNullOrEmpty(value)) {
                // Truncar el texto si excede 3 caracteres
                if (value->Length > 3) {
                    e->Value = "";
                }
                else
                {
                    bool encontrado = encontrarEstado(e->Value->ToString());
                    if (!encontrado) {
                        e->Value = "";
                    }
                }
            }
        }
    }

    private: System::Void boton_Transiciones_Click(System::Object^ sender, System::EventArgs^ e)
    {
        int rowLength = dataGridView1->Rows->Count;
        int columnLength = dataGridView1->ColumnCount;
        if (columnLength == 1) {
            MessageBox::Show("Debe haber almenos 1 columna con simbolo.");
            return;
        }
        if (rowLength == 0) {
            MessageBox::Show("Debe haber almenos 1 fila.");
            return;
        }
        for (int i = 1; i < columnLength; i++)
        {
            String^ valor = dataGridView1->Columns[i]->HeaderText;
            simbolos->Add(valor);
        }

        String^ txt_estadosF = txt_estadosFinales->Text;
        int numero;
        array<String^>^ finales = txt_estadosF->Split(',');
        for each (String^ nodo in finales)
        {
            if (!Int32::TryParse(nodo, numero) || numero < 0)
            {
                MessageBox::Show(String::Format("Error de formato en estados finales.\n Verifique que los numeros sean positivos y estén separados por comas."));
                return;
            }
            if (numero > rowLength - 1)
            {
                MessageBox::Show("Verifique que los estados finales esten dentro del rango de estados existentes.");
                estadosFinales->Clear();
                return;
            }   
            estadosFinales->Add(numero);
        }

        creaAFD();

        String^ estadoInicial = txt_estadoInicial->Text;
        if (!Int32::TryParse(estadoInicial, numero) || numero < 0)
        {
            MessageBox::Show(String::Format("Error de formato en estado inicial.\n Verifique que sea un estado inicial valido"));
            return;
        }
        if (numero > rowLength - 1)
        {
            MessageBox::Show("Verifique que el estado inicial se encuentre dentro del rango de estados existentes.");
            return;
        }

        if (!verificaAFD(numero)) {
            MessageBox::Show(String::Format("Con el estado inicial Q{0} no se puede llegar a todos los Nodos.\n\nVerifique el estado inicial o cambie las transiciones.", numero));
        }

    }

    private: System::Void txt_estadoInicial_EnterLeave(System::Object^ sender, System::EventArgs^ e) 
    {
        setPlaceHolder(txt_estadoInicial, "Ingrese el numero del estado inicial");
    }

    private: System::Void txt_estadosFinales_EnterLeave(System::Object^ sender, System::EventArgs^ e) 
    {
        setPlaceHolder(txt_estadosFinales, "Ejemplo: 3,5,7");
    }

    private: System::Void CheckButtonEnabled() {
        if (txt_estadosFinales->ForeColor == ::Drawing::SystemColors::ScrollBar || txt_estadoInicial->ForeColor == ::Drawing::SystemColors::ScrollBar)
            boton_transiciones->Enabled = true;
        else
            boton_transiciones->Enabled = false;
    }

    private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e)   
    {
        int rowIndex = e->RowIndex;

        dataGridView1->Rows[rowIndex]->Cells[0]->Value = "Q" + rowIndex.ToString();
        dataGridView1->Rows[rowIndex]->Cells[0]->ReadOnly = true;
    }

    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
    {
       
    }

    private: System::Void boton_agregarFila_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        dataGridView1->Rows->Add();
        int rowIndex = dataGridView1->Rows->Count - 1;
        String^ estado = "Q" + rowIndex;
        dataGridView1->Rows[rowIndex]->Cells[0]->Value = estado;
        nombreEstados->Add(estado);
    }

    private: System::Void boton_agregarColumna_Click(System::Object^ sender, System::EventArgs^ e) 
    {   
        int rowslength = dataGridView1->Rows->Count;
        DataGridViewTextBoxColumn^ nuevaColumna = gcnew DataGridViewTextBoxColumn();
        Automata_Finito_Determinista::NomColumna^ ventanaColumna = gcnew Automata_Finito_Determinista::NomColumna();
        System::Windows::Forms::DialogResult respuesta = ventanaColumna->ShowDialog();
        if (respuesta == System::Windows::Forms::DialogResult::OK)
        {
            String^ nombreColumna = ventanaColumna->respuesta;
            int columnCount = dataGridView1->ColumnCount;
            for (size_t i = 1; i < columnCount; i++)
            {
                String^ headerText = dataGridView1->Columns[i]->HeaderText;
                if (nombreColumna == headerText)
                {
                    MessageBox::Show("El valor ingresado ya se encuentra entre las columnas actuales.\n\rElija un simbolo diferente.");
                    return;
                }
            }
            nuevaColumna->HeaderText = nombreColumna;
            dataGridView1->Columns->Add(nuevaColumna);
            return;
        }
    }

    private: System::Void boton_quitarFila_Click(System::Object^ sender, System::EventArgs^ e) 
    {   
        int rowsCount = dataGridView1->Rows->Count;
        if (rowsCount > 0)
        {
            dataGridView1->Rows->RemoveAt(rowsCount - 1);
            nombreEstados->Remove("Q" + (rowsCount-1));
        }
    }

    private: System::Void boton_quitarColumna_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        int columnCount = dataGridView1->ColumnCount;
        if (columnCount > 1)
        {
            dataGridView1->Columns->RemoveAt(columnCount - 1);
        }
    }  

}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

