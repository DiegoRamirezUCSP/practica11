#include <iostream>

using namespace std;

int suma(const int arr[],const int legth){
int resultado = 0;
for(int i=0;i<legth;i++){
    resultado = resultado + arr[i];
}
return resultado;
}

int menorelemento(const int arrr[],const int leght){
int menor=arrr[0];
for(int j=0;j<leght;j++){
    if(arrr[j]<arrr[j+1]){
        menor=arrr[j];

    }else{
    menor=arrr[j+1];
    }
}
return menor;
}
bool perfeccion(const int arrrr[],const int leghtt){
for(int K=0;K<leghtt;K++){
    int sumaa = 0, i = arrrr[K]-1;

    while(i > 1){
        if(arrrr[K] % i == 0){
        sumaa += i;
        i--;
        }
    }

    return sumaa == arrrr[K]? "es perfecto" : "no es perfecto";
        }}

//problema 3

bool primo(const int arrrrr[],const int leghttt){


    for(int ii=0; arrrrr[ii]<arrrrr[leghttt]; ii++){
            int e=0;
            for (int jj=1; jj<arrrrr[ii];jj++){
                if(arrrrr[ii]%jj==0){
                   e += 1;}
            }
        if (e<2){
           return arrrrr[ii];

            }
        }
}
int foo[] = {22,13,23};
int n, result=0;

int main ()
{
  cout << suma(foo,2) << endl;
  cout << menorelemento(foo,2) << endl;

  cout << primo(foo,2) << endl;
    cout << perfeccion(foo,2) << endl;
  return 0;
}

