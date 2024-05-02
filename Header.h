// Incluir las cabeceras necesarias
#include <string>
#include <unordered_map>

namespace N_Nodo 
{

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;

    // Definir la clase Nodo
    public ref class Nodo
    {
    public:
        bool esEstadoFinal;
        String^ ID;
        Dictionary<String^, Nodo^>^ transiciones;

        // Constructor que inicializa un nodo
        Nodo(bool estadoFinal, String^ id)
        {
            this->esEstadoFinal = estadoFinal;
            this->ID = id;
            this->transiciones = gcnew Dictionary<String^, Nodo^>();
        }

        // M�todo para a�adir una transici�n
        void agregarTransicion(String^ palabra, Nodo^ nodoDestino)
        {
            transiciones->Add(palabra, nodoDestino);
        }

        bool palabraAFD(String^ palabra, Nodo^ nodoActual)
        {
            // Verificar si la palabra es vac�a
            if (palabra->Length == 0)
            {
                // Verificar si el nodo actual es final
                if (nodoActual != nullptr)
                {
                    return nodoActual->esEstadoFinal;
                }
                else
                {
                    return false;
                }
            }

            // Obtener el primer car�cter de la palabra
            String^ caracter = palabra[0].ToString();

            // Obtener el siguiente nodo a trav�s de la transici�n del car�cter
            Nodo^ nodoSiguiente = nullptr;
            if (nodoActual->transiciones->TryGetValue(caracter, nodoSiguiente))
            {
                // Recortar la palabra eliminando el primer car�cter
                String^ palabraRecortada = palabra->Substring(1);

                // Llamar recursivamente a palabraAFD con el nodo siguiente y la palabra recortada
                return palabraAFD(palabraRecortada, nodoSiguiente);
            }
            else
            {
                // No hay una transici�n para el car�cter actual, la palabra no es aceptada
                return false;
            }
        }
    };
}

