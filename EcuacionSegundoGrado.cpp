#include "FormulaGeneral.cpp"

class EcuacionSegundoGrado{
public:
    void pedirEcuacion(int *coeficienteCuadratico, int *coeficienteLineal,
            int *terminoIndependiente){
        int termino1,
            termino2,
            termino3;
        cout<<"Programa para salucionar ecuaciones cuadraticas de la forma "
                "Ax2+Bx+C=0"<<endl;
        cout<<"Ingrese el coeficiente cuadratico (A):"<<endl;
        cin>>termino1;
        cout<<"Ingrese el coeficiente lineal (B):"<<endl;
        cin>>termino2;
        cout<<"Ingrese el termino independiente (C):"<<endl;
        cin>>termino3;
        (*coeficienteCuadratico)=termino1;
        (*coeficienteLineal)=termino2;
        (*terminoIndependiente)=termino3;
    }
};