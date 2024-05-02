#pragma once

namespace PlaceHolder
{
    using namespace System;
    using namespace System::Windows::Forms;
    Void setPlaceHolder(TextBox^ textBox, String^ texto) {
        if (textBox->Text->Equals(texto))
        {
            textBox->Text = "";
            textBox->ForeColor = System::Drawing::SystemColors::MenuText;
            return;
        }
        if (textBox->Text->Equals(""))
        {
            textBox->Text = texto;
            textBox->ForeColor = System::Drawing::SystemColors::ScrollBar;
            return;
        }
        return;
    }
}