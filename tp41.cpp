#include <iostream>

using namespace std;

int ConvertirPesos(int dolares);

int main(){
    int cantidad;
    cout << "Ingrese la cantidad en dolares: ";
    cin >> cantidad;
    int resultado = ConvertirPesos(cantidad);
    cout << cantidad << " dolares equivalen a " << resultado << " pesos" << endl;
    return 0;
}

int ConvertirPesos(int dolares){
    const double tasaCambio = 331.37;
    return dolares * tasaCambio;
}

