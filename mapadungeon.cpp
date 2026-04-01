#include <iostream>
#include <array>
#include<cmath>
using namespace std;

int main (){
    float max= - INFINITY,  min= INFINITY;
    int ifmax,ifmin, jfmax,jfmin;
    //0 vacia, valores altos =mas peligrosa
    /*empieza paso 1*/
    array <array<int, 4>, 3> mapa ={{{2, 0, 5, 0}, {3, 8, 0, 4},{1, 6, 7, 0}}};//paso 1
    /*termina paso 1*/
    /*empieza paso 2*/
    for (int i =0 ;i <mapa.size();i++){

        for(int j =0 ;j<mapa[i].size();j++){

            cout<<mapa[i][j]<<" ";
        }
        cout<<endl;
    }
    /*termina paso 2*/
    /*empieza paso 3*/
    mapa[0][2]= 9;
    cout<<"Se modifica el valor del mapa[0][2] es: "<<mapa[0][2]<<endl;
    mapa[2][3]= 3;
    cout<<"Se modifica el valor del mapa[2][3] es: "<<mapa[2][3]<<endl;
    /*termina paso 3*/
    /*empieza paso 4 y 5*/
    for (int i =0 ;i <mapa.size();i++){
        float suma_= 0;
        for(int j =0 ;j<mapa[i].size();j++){

           suma_ += mapa[i][j];//paso 4
            if(mapa[i][j] > max){max = mapa[i][j];  ifmax = i; jfmax= j;}//Paso 5
            if(mapa[i][j] < min){min = mapa[i][j]; ifmin = i ; jfmin= j ;}//Paso 5
        }
        
        float promedio = suma_/mapa[i].size();//paso 4
        cout<<"El promedio de la fila "<<i<<" es: "<<promedio<<endl;//paso 4
    }

    cout<<"El valor máximo es: "<<max<<"en la fila "<<ifmax<<" y columna "<<jfmax<<endl;//paso 5
    cout<<"El valor mínimo es: "<<min<<"en la fila "<<ifmin<<" y columna "<<jfmin<<endl;//paso 5
    /*termina paso 4 y 5*/
    /*empieza paso 6*/
    for (int i =0 ;i <mapa.size();i++){

        for(int j =0 ;j<mapa[i].size();j++){

            cout<<mapa[i][j]<<" ";
        }
        cout<<endl;
    }
    /*termina paso 6*/   
    return 0;
}
