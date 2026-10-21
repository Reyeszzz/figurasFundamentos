
#include <iostream>
using namespace std;

float areaCuadrado(float lado) {
    float area =  lado * lado;
    return area;
}

float volumenCilindro(float radio, float altura, double PI =3.1415) {
    float resultado = PI * radio * radio * altura;
    return resultado;
}

float volumenEsfera(float radio, double PI =3.1415) {
    float resultado = (4.0 / 3.0) * PI * radio * radio * radio;
    return resultado;
}

int main() {

    int opcion= 0;
    double lado = 0, radio = 0, altura = 0;
    do
    {
        cout << "1. Area de un cuadrado" << endl;
        cout << "2. Volumen de un cilindro" << endl;
        cout << "3. Volumen de una esfera" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "Ingrese el lado: ";
                cin >> lado;

                if (lado > 0) {
                    cout << "El area es: " << areaCuadrado(lado) << endl;
                } else {
                    cout << "El lado debe ser positivo." << endl;
                }
                break;

            case 2:
                cout << "Ingrese el radio: ";
                cin >> radio;
                cout << "Ingrese la altura: ";
                cin >> altura;

                if (radio > 0 && altura > 0) {
                    cout << "El volumen es: "
                         << volumenCilindro(radio, altura) << endl;
                } else {
                    cout << "Los valores deben ser positivos." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el radio: ";
                cin >> radio;

                if (radio > 0) {
                    cout << "El volumen es: "
                         << volumenEsfera(radio) << endl;
                } else {
                    cout << "El radio debe ser positivo." << endl;
                }
                break;

            case 4:
                cout << "Salió exitosamente del programa" << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 4);
    
}
