// Incluir las cabeceras necesarias
#include <string>
#include <unordered_map>

using namespace System;
using namespace System::Collections::Generic;

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
        esEstadoFinal = estadoFinal;
        ID = id;
        transiciones = gcnew Dictionary<String^, Nodo^>();
    }

    // Método para añadir una transición
    void agregarTransicion(String^ palabra, Nodo^ nodoDestino)
    {
        transiciones->Add(palabra, nodoDestino);
    }

    // Método para avanzar la secuencia
    bool avanzarSecuencia(String^ palabra)
    {
        Nodo^ nodoActual = this;

        // Iterar a través de la secuencia de caracteres
        for (int i = 0; i < palabra->Length; i++)
        {
            // Obtener el carácter actual como String^
            String^ caracter = Convert::ToString(palabra[i]);

            // Buscar la transición correspondiente en el nodo actual
            Nodo^ nodoSiguiente = nullptr;
            if (transiciones->TryGetValue(caracter, nodoSiguiente))
            {
                // Avanzar al siguiente nodo
                nodoActual = nodoSiguiente;
            }
            else
            {
                // Si no se encuentra la transición, la secuencia no pertenece al lenguaje
                return false;
            }
        }

        // Verificar si el nodo actual es un estado final
        return nodoActual->esEstadoFinal;
    }
};

// Función principal (main) omitida para este ejemplo
