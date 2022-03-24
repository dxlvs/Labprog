#include <iostream>

using namespace std;

int main(){
    char sec;
      printf("Ingrese seccion: \n");
      scanf("%c", &sec);
    char nombre[30];
    float corte1, corte2;
    float NotaDef, i=0;
    int x=0, b=0, v=0;
    int opc;
    do{
      system("cls");
      i=i+NotaDef;
      printf("Seccion %c\n",sec);
    printf("Cantidad de estudiantes de la seccion: %d\n\n",x);
    printf("Cantidad de aprobados de la seccion: %d\n\n",b);
    printf("Cantidad de reprobados de la seccion: %d\n\n",v);
    printf("Promedio de la seccion: %f\n\n",i/x);
      printf("1) Agregar estudiante\n");
        printf("2) Salir\n");
      printf("Usted quiere: ");
      scanf("%d",&opc);
      switch(opc) {
          case 1:
              system("cls");
              printf("Usted selecciono %i\n",opc);
        /* por favor separar con guiones bajos el nombre y el apellido*/
            printf("ingrese nombre: ", nombre);
            scanf("%s", &nombre);
            printf("ingrese nota del primer corte : ", corte1);
            scanf("%f", &corte1);
            printf("ingrese nota del segundo corte : ", corte2);
            scanf("%f", &corte2);
            NotaDef=((corte1*0.4)+(corte2*0.6));
            printf("Nota final: %f\n\n", NotaDef);
            if(NotaDef<10){v=v+1;}
            if(NotaDef>=10){b=b+1;}x=x+1;
                if (NotaDef>=0 && NotaDef<6){
                    printf("Reprobado con Nota Deficiente\n\n\n");}
                if (NotaDef>=6 && NotaDef<10){
                    printf("Reprobado con Nota Mejorable\n\n\n");}
                if (NotaDef>=10 && NotaDef<13){
                    printf("Aprobado con Nota Regular\n\n\n");}
                if (NotaDef>=13 && NotaDef<16){
                    printf("Aprobado con Buena Nota\n\n\n");}
                if (NotaDef>=16 && NotaDef<19){
                    printf("Aprobado con Muy Buena Nota\n\n\n");}
                if (NotaDef>=19 && NotaDef<21){
                    printf("Aprobado con Excelente Nota\n\n\n");}
              system("pause");
          break;
          case 2:
          break;
          default:
              system("cls");
              printf("Opcion incorrecta\n");
          break;
        }
      }while(opc != 2);
    return 0;
}

