#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int aux;
    int i;
    int suma=0;

    printf("bienvenido a ventas online\n");
    printf("opciones numero 1 alta de usuario,numero 2 modificar datos del usuario,\n");
    printf("numero 3 baja del usuario, numero 4 publicar producto,\n");
    printf("numero 5 modificar publicacion, numero 6 cancelar publicacion,\n");
    printf("numero 7 comprar producto, numero 8 listar publicaciones del usuario,\n");
    printf("numero 9 listar publicaciones, numero 10 listar usuarios.\n");



     printf("ingrese opcion:");
     for(i=0;i<10;i++){
            scanf("%d",&a);
         suma=suma+a;

    switch (a)
    {
    case 1:

        printf("escriba su pasword para el alta de usuario");
        scanf("%d",&a);
        printf("%dbienvenido",a);
        break;


    case 2:
        printf("modificar datos del usuario");
        break;
         case 3:
        printf("baja del ususario");
        break;
          case 4:
        printf("publicar producto");
        break;
          case 5:
        printf("modificar publicacion");
        break;
         case 6:
        printf("cancelar publicacion");
        break;
         case 7:
        printf("comprar producto");
        break;
         case 8:
        printf("listar publicaciones del usuario");
        break;
         case 9:
        printf("listar publicaciones");
        break;
 case 10:
        printf("listar usuarios");
        break;

    }
     }




  return a;

}







