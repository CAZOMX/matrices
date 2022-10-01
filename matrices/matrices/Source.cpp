
#include <iostream>
#include <cstdlib>
#include<math.h>
#include <cmath>
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
        cout << "2. Suma de matrices" << endl;
        cout << "3. Funciones trigonométricas" << endl;
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
                  
            int r, c, a[100][100], b[100][100], sum[100][100], i, j;

            cout << "Ingresa un Numero de Filas (entre 1 y 100): ";
            cin >> r;

            cout << "Ingresa un Numero de Columnas  (entre 1 y 100): ";
            cin >> c;

            cout << endl << "Ingresa los elementos de la matriz A" << endl;

            // Storing elements of first matrix entered by user.
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j)
                {
                    cout << "Ingresa los elemento A" << i + 1 << j + 1 << " : ";
                    cin >> a[i][j];
                }

            // Storing elements of second matrix entered by user.
            cout << endl << "Ingresa los elementos de la matriz B" << endl;
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j)
                {
                    cout << "Ingresa el elemento B" << i + 1 << j + 1 << " : ";
                    cin >> b[i][j];
                }

            // Adding Two matrices
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j)
                    sum[i][j] = a[i][j] + b[i][j];

            // Displaying the resultant sum matrix.
            cout << endl << "------------------El resultado de la suma es:------------ " << endl;
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j)
                {
                    cout << sum[i][j] << "  ";
                    if (j == c - 1)
                        cout << endl;
                }

            return 0;
        
            system("pause>nul"); 
            break;

        case 3:
            double x;
            cout << "\n\nIngrese un angulo en grados:";
            cin >> x;
            double rad, seno, coseno, tang;
            rad = x * PI / 180;
            seno = sin(rad);
            coseno = cos(rad);
            tang = tan(rad);
            cout << "El seno es: " << seno << "\n";
            cout << "El coseno es: " << coseno << "\n";
            cout << "La tangente es: " << tang << "\n";
           

            system("pause>nul"); // Pausa            
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}











