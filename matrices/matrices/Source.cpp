
#include <iostream>
#include <cstdlib>
#include<math.h>
#define PI 3.14159265


using namespace std;

int main()
{
    int opcion;
    bool repetir = true;

    do {
        system("cls");
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. multiplicar una matriz" << endl;
        cout << "2. Seuma de matrices" << endl;
        cout << "3. Funciones Trigonometricas" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:

            using namespace std;
            {
                int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

                cout << "ingresa el numero de filas y columnas de la primer matriz: ";
                cin >> r1 >> c1;
                cout << "ingresa el numero de filas y columnas de la segunda matriz:";
                cin >> r2 >> c2;

                while (c1 != r2)
                {
                    cout << "\n!!!!! error el numero de culumnas de la primer matríz no es igual al de la segunda!!!!!\n";

                    cout << "\ningresa el numero de filas y columnas de la primer matriz:\n ";
                    cin >> r1 >> c1;

                    cout << "ingresa el numero de filas y columnas de la segunda matriz:  ";
                    cin >> r2 >> c2;
                }

                cout << endl << "Ingresa los elementos de la matriz 1:" << endl;
                for (i = 0; i < r1; ++i)
                    for (j = 0; j < c1; ++j)
                    {
                        cout << "Ingresa el elemento a" << i + 1 << j + 1 << " : ";
                        cin >> a[i][j];
                    }


                cout << endl << "Ingresa los elementos de la matriz 2:" << endl;
                for (i = 0; i < r2; ++i)
                    for (j = 0; j < c2; ++j)
                    {
                        cout << "Ingresa el elemento b" << i + 1 << j + 1 << " : ";
                        cin >> b[i][j];
                    }

   
                for (i = 0; i < r1; ++i)
                    for (j = 0; j < c2; ++j)
                    {
                        mult[i][j] = 0;
                    }

              
                for (i = 0; i < r1; ++i)
                    for (j = 0; j < c2; ++j)
                        for (k = 0; k < c1; ++k)
                        {
                            mult[i][j] += a[i][k] * b[k][j];
                        }

                cout << endl << "-------------Resultado------------- " << endl;
                for (i = 0; i < r1; ++i)
                    for (j = 0; j < c2; ++j)
                    {
                        cout << " " << mult[i][j];
                        if (j == c2 - 1)
                            cout << endl;
                    }

                return 0;
            }
            system("pause>nul"); 
            break;

        case 2:
                  

            system("pause>nul"); 
            break;

        case 3:
            // Lista de instrucciones de la opción 3                

            system("pause>nul"); // Pausa            
            break;

        case 4:
            // Lista de instrucciones de la opción 4                

            system("pause>nul"); // Pausa                
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}











