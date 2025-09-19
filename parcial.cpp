#include <iostream>
#include <cmath>

// Definir la estructura de un punto en 2D
struct Point
{
    double x, y;
};

// Función para calcular la distancia entre dos puntos
/*Como puede modificar la declaración de la función para que sea mas eficiente en el manejo de memoria?
Teniendo en cuenta que solo necesita leer los valores, pero no modificarlos*/
double calcularDistancia(Point p1, Point p2)
{
    double p1 = [3, 3];
    double p2 = [2, 2];
    double fo = pow(point p1, 2) + pow(point p2, 2);
    double div = sqrt(fo);
    cout <<"La distancia es de: ", div;

    return 0;
}

// Función para leer las coordenadas de varios puntos
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    std::cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    // Leer la respuesta del usuario
    cin >> respuesta;
    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if (respuesta == <"s"><Operador logico> respuesta == <"n">)
    {   cout << "Coordenadas punto 1:";
        cin >> p1;
    
        cout << "Coordenadas punto 2:";
        
        // Completar: Leer las coordenadas de cada punto
        for (point p1 )
        {
            std::cout << "Ingrese las coordenadas del punto " << i + 1 << " (x, y): ";
            std::cin >> puntos[].>> puntos;
        }
    }
    else
    {
        // Usar puntos predeterminados
        std::cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  // Punto 1 (0, 0)
        puntos[1] = {3, 4};  // Punto 2 (3, 4)
        puntos[2] = {6, 8};  // Punto 3 (6, 8)
        puntos[3] = {9, 12}; // Punto 4 (9, 12)
    }
}

// Función para calcular la distancia más cercana desde un punto específico
double calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)
{

    return distanciaMinima;
}
/*BONO:
Escribir una función que reciba un arreglo de puntos y devuelva la distancia total de los puntos que conforman el arreglo si estos fueran recorridos en orden.
*/

// Función para mostrar el punto más cercano y la distancia
void mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)
{
    std::cout << "El punto más cercano es: (" << puntos[indiceMasCercano].x << ", " << puntos[indiceMasCercano].y << ")\n";
    std::cout << "La distancia al punto más cercano es: " << distancia << std::endl;
}

int main()
{
    <tipo> n;

    std::cout << "Ingrese el número de puntos (mínimo 2): ";
    // Leer el número de puntos
    std::<funcion> >> n;

    if ()
    {
        std::cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }

    Point puntos[n]; // Arreglo de estructuras para almacenar las coordenadas (x, y)

    // Leer los puntos (manual o predeterminado)
    leerPuntos(<completar argumentos>);

    // Ingresar el punto del usuario
    Point pUsuario;
    std::cout << "Ingrese las coordenadas del punto desde el que calcular la distancia (x, y): ";
    std::cin >> pUsuario.>> pUsuario.;

    // Calcular la distancia más cercana

    <type> indiceMasCercano;
    // Mostrar el resultado
    mostrarResultado(puntos, <variable>, distancia);

    return 0;
}
