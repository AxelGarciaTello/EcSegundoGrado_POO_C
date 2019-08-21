#include "EcuacionSegundoGrado.cpp"

class Problema{
private:
    EcuacionSegundoGrado *ecuacion;
    FormulaGeneral *formula;
    
public:
    void solucionarProblema(){
        ecuacion = new EcuacionSegundoGrado();
        formula = new FormulaGeneral();
        int coeficienteCuadratico,
            coeficienteLineal,
            terminoIndependiente;
        float resultado1,
              resultado2;
        ecuacion->pedirEcuacion(&coeficienteCuadratico,&coeficienteLineal,
                &terminoIndependiente);
        int comprobacion=formula->verificarSiTieneSolucion(
        coeficienteCuadratico,coeficienteLineal,terminoIndependiente);
        if(comprobacion==0){
            cout<<"La solucion tienen numeros complejos"<<endl;
        }
        else{
            formula->solucionarEcuacion(&resultado1, &resultado2);
            if(resultado1==resultado2){
                cout<<"El resultado es:\nx="<<resultado1<<endl;
            }
            else{
                cout<<"El resultado es:\nx1="<<resultado1<<"\nx2="
                        <<resultado2<<endl;
            }
        }
    }
};