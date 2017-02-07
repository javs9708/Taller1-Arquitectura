#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>


using namespace std;

int x,y,r=0,p=1;
int k[]={4,2,1,10,20};

int multiplicacion(int x,int y){

    for(int i=0;i<y;i++){
            r=r+x;
            }
    cout<<r;
    getchar();
 
}


int potencia(int x,int y){
    
    for(int i=0;i<y;i++){
            p=p*x;
    }
    cout<<p;
    getchar();

}

int polinomio(int k[],int a, int n){

    
    for(int i=0;k[i]<4;i++)  {

    r=r+pow((k[i]*a),n-1);
    
}
    cout<<r; 
    getchar();
    
}
    



int main(){
       
           
    
    cout<<"Ingrese el primer numero: ";
    cin>>x;
    
    cout<<"Ingrese el segundo numero: ";
    cin>>y;
    
    cout<<"La multiplicacion de estos dos numeros es: ";
    multiplicacion(x,y);
    
    cout<<endl;
    
    cout<<"La potencia entre estos dos numeros es: ";
    potencia(x,y);
    
   polinomio(k,2,4);
    
    getchar();
       
       } 
