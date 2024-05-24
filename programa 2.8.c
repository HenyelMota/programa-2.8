#include <stdio.h>

int main()
{
    int MAT, CAR, SEM; // Declara las variables enteras MAT (matr�cula), CAR (carrera) y SEM (semestre)
    float PRO;         // Declara la variable flotante PRO (promedio)

    printf("Ingrese matricula: "); // Pide al usuario que ingrese la matr�cula
    scanf("%d", &MAT);             // Lee un valor entero del usuario y lo asigna a MAT

    // Pide al usuario que ingrese la carrera (1: Industrial, 2: Telem�tica, 3: Computaci�n, 4: Mec�nica)
    printf("Ingrese carrera (1-industrial 2-Telematica 3-Computacion 4-Mecanica) : ");
    scanf("%d", &CAR); // Lee un valor entero del usuario y lo asigna a CAR

    printf("Ingrese semestre: ");  // Pide al usuario que ingrese el semestre
    scanf("%d", &SEM); // Lee un valor entero del usuario y lo asigna a SEM

    printf("Ingrese promedio: ");  // Pide al usuario que ingrese el promedio
    scanf("%f", &PRO); // Lee un valor flotante del usuario y lo asigna a PRO

    // Selecciona la operaci�n a realizar seg�n el valor de CAR
    switch(CAR)
    {
        // Caso 1: Carrera Industrial
        case 1:
            if(SEM >= 6 && PRO >= 8.5) // Verifica si el semestre es mayor o igual a 6 y el promedio mayor o igual a 8.5
        {
        // Imprime la matr�cula, la carrera y el promedio formateado con dos decimales
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        }break;

        // Caso 2: Carrera Telem�tica
        case 2:
            if(SEM >= 5 && PRO >= 9.0) // Verifica si el semestre es mayor o igual a 5 y el promedio mayor o igual a 9.0
            {
        // Imprime la matr�cula, la carrera y el promedio formateado con dos decimales
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        }break;

        // Caso 3: Carrera Computaci�n
        case 3:
            if(SEM >= 6 && PRO >= 8.8) // Verifica si el semestre es mayor o igual a 6 y el promedio mayor o igual a 8.8
                {
        // Imprime la matr�cula, la carrera y el promedio formateado con dos decimales
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        }break;

        // Caso 4: Carrera Mec�nica
        case 4:
            if(SEM >= 7 && PRO >= 9.0) // Verifica si el semestre es mayor o igual a 7 y el promedio mayor o igual a 9.0
                {
        // Imprime la matr�cula, la carrera y el promedio formateado con dos decimales
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        }break;

        // Cualquier otro caso: Carrera no v�lida
        default: printf("\n Error en la carrera");
        break;
    }
    return 0;
}
