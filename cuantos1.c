#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main(void){
  
  int t;  

  printf("ingrese tamaño del arreglo \n");
  scanf("%d",&t);

  int b[t];
  

  void pedirArreglo(int a[], int n_max){
    
    int i;
    i=0;
    while(i<n_max){
      printf("ingrese el %dº elemento del arreglo \n",i+1);
      scanf("%d",&a[i]);
      i=i+1;
    }
  }

  pedirArreglo(b,t);

  struct comp_t {
    int menores;
    int iguales;
    int mayores;
  };

  struct comp_t esto;

  struct comp_t cuantos(int a[], int tam, int elem){

    int i;
    i=0;

    struct comp_t otro;
    otro.menores=0;
    otro.mayores=0;
    otro.iguales=0;

    while(i < tam){
      if(a[i]==elem){
        otro.iguales=otro.iguales+1;
      }
      if(a[i]<elem){
        otro.menores=otro.menores+1;
      }
      if(a[i]>elem){
        otro.mayores=otro.mayores+1;
      }
      i=i+1;
    }
    return otro;
  }

  int z;
  printf("elija un numero cualquiera\n");
  scanf("%d",&z);

  esto = cuantos(b,t,z);
  
  printf("los menores son: %d\n los iguales son: %d\n los mayores son: %d\n ",esto.menores,esto.iguales,esto.mayores);
  
  void imprimeArreglo(int a[], int n_max){
    
    printf("el arreglo resultante es este \n");
    int i;
    i=0;
    printf("[");
    while(i<n_max){
      printf("%d,",a[i]);
      i=i+1;
    }
    printf("] \n");
  }

  imprimeArreglo(b,t);

  return 0;
}