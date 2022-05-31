#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    cout << "Hola mundo en Git y Github!" << endl;
    Persona p;
    p.nombre = "Sebastian";
    p.edad= 18;
    cout << p.nombre << endl;
    cout << p.edad << endl;
    return 0;
}
