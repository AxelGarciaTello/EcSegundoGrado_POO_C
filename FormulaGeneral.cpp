#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class FormulaGeneral{
private:
    int coeficienteCuadratico,
        coeficienteLineal,
        terminoIndependiente,
        valorComprobacion;
    
public:
    int verificarSiTieneSolucion(int coeficienteCuadratico,
            int coeficienteLineal, int terminoIndependiente){
        int coeficienteLinealCuadrado,
            multiplicacionTerminos,
            salida=0;
        coeficienteLinealCuadrado=coeficienteLineal*coeficienteLineal;
        multiplicacionTerminos=4*coeficienteCuadratico*terminoIndependiente;
        valorComprobacion=coeficienteLinealCuadrado-multiplicacionTerminos;
        if(valorComprobacion>=0){
            this->coeficienteCuadratico=coeficienteCuadratico;
            this->coeficienteLineal=coeficienteLineal;
            this->terminoIndependiente=terminoIndependiente;
            salida=1;
        }
        return salida;
    }
    
    void solucionarEcuacion(float *resultado1, float *resultado2){
        float raiz;
        raiz=sqrt(valorComprobacion);
        (*resultado1)=(-coeficienteLineal+raiz)/(2*coeficienteCuadratico);
        if(valorComprobacion!=0){
            (*resultado2)=(-coeficienteLineal-raiz)/(2*coeficienteCuadratico);
        }
    }
    
};