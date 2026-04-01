#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main (){
    int suma = 0;
    int  imax, imin;//paso 5 y 6
    float min = INFINITY,max = -INFINITY;//paso 5 y 6
    array <int,7> inventario ={3,0,7,2,5,1,4};// paso 1
    /*empieza paso 2*/
    for(int i=0 ;i<inventario.size(); i++){
        cout<< "inventrario[ "<<i<<"] = "<<inventario[i]<<endl;
    }
     /*termina paso 2*/
      /*empieza paso 3*/
    int objetoElejido = inventario[4];
     /*termina paso 3*/
    cout<< "Del objeto elegido hay: "<<objetoElejido<<" items"<<endl;
    inventario[1]=10;  // paso 4
    inventario[5]=0;    //paso 4
    
     /*empieza paso 5 y 6*/
    for(int i = 0;i <inventario.size(); i++){
        suma += inventario[i];//paso 5
        if(inventario[i] > max){max = inventario[i]; imax= i;}//paso 6
        if(inventario[i] < min){min = inventario[i]; imin= i;}  //paso 6
    }
     /*termina paso 5 y 6*/
    cout<< "La suma total es: "<<suma<<endl;//paso 5
    cout<< "El máximo es: "<<max<<" el indice es "<<imax<<endl;//paso 6
    cout<< "El mínimo es: "<<min<<" el indice es "<<imin<<endl;//paso 6

    return 0;
}