#include<iostream>
#include <cmath> //libreria para operaciones matemáticas
#include <string> //libreria para manipulación de elementos string

using namespace std;
int main()
{
    // Definicion de variables
    // x, y & z son variables para almacenar los numeros ingresados, num para seleccionar el menu principal
    int numFigura, numUnidades, numMenu, contra, x, y, z;
    float numRaiz, horas, metros, millas, area=0, perimetro=0, altura, base=0, resultado=0;
    // Revisa que la contrasena sea la correcta
    cout << "Ingrese la contraseña correcta" << endl;
    cin >> contra;
    if (contra==16730){
        // Menu principal
        cout << "Bienvenido" << endl;
        cout << "Este es el menú de conversiones" << endl;
        cout << "Seleccione 1. Calcular el numero mayor" << endl;
        cout << "Seleccione 2. Calcular el numero menor" << endl;
        cout << "Seleccione 3. Si el numero es Par o impar" << endl;
        cout << "Seleccione 4. Calcular la Raíz cuadrada" << endl;
        cout << "Seleccione 5. Calcular el Perímetro y área de figuras" << endl;
        cout << "Seleccione 6. Conversión de unidades" << endl;
        cout <<"\n\n Escriba su selección y luego pulse <<ENTER>>: ";
        cin >> numMenu;
        switch(numMenu){
            // Evalua quien es el mayor de los 3 numeros
            case 1:
                cout << "Usted ha elegido saber cuál es el numero mayor de 3 numeros que ingrese" << endl;
                cout << "El número mayor de 3 números" << endl;
                cout << "Ingresa primer número entero" << endl;
                cin >> x;
                cout << "Ingresa segundo número entero" << endl;
                cin >> y;
                cout << "Ingresa tercer número entero" << endl;
                cin >> z;
                if (x>y && x>z){
                    cout << "Es el mayor de los tres"<< endl;
                    cout<< x;
                }
                else{
                    if (y>x && y>z) {
                        cout << "Es el mayor de los tres"<< endl;
                        cout<< y;
                    }
                    else{
                        cout << "Es el mayor de los tres"<< endl;
                        cout<< z;
                    }
                }
                break;
            //Evalua quien es el menor de los 3 numeros
            case 2:
                cout << "Usted ha elegido saber cuál es el numero menor de 3 numeros que ingrese" << endl;
                cout << "El número menor de 3 números" << endl;
                cout << "Ingresa 1 números enteros" << endl;
                cin >> x;
                cout << "Ingresa segundo número enteros" << endl;
                cin >> y;
                cout << "Ingresa tercer número enteros" << endl;
                cin >> z;
                if (x<y && y<z){
                    cout << "Es el menor de los tres"<< endl;
                    cout<< x;
                }
                else{
                    if (y<x && x<z) {
                        cout << "Es el menor de los tres"<< endl;
                        cout<< y;
                    }
                    else{
                        cout << "Es el menor de los tres"<< endl;
                        cout<< z;
                    }
                }
                break;
            //Evalua si el numero (x) es par o impar
            case 3:
                cout << "Usted ha elegido saber si el numero es par o impar" << endl;
                cout << "Ingrese un número para saber si es par o impar" << endl;
                cin >> x;
                if(x % 2 == 0){
                    cout << "el numero es par"<< endl;
                    cout<< x;
                    }
                else if(x % 2 != 0){
                    cout << "el numero es impar"<< endl;
                    cout<< x;
                    }
                break;
                // Calcula la raiz del numero decimal introducido por usuario
                case 4:
                    cout << "Usted ha elegido sacar la raíz de un numero" << endl;
                    cout << "Ingrese un número para sacar su raíz" << endl;
                    cin >> numRaiz;
                    resultado=sqrt(numRaiz);
                    cout << "La raíz es: " << endl;
                    cout <<resultado;
                    break;
                // Calcula el area y perimetro de varias figuras
                case 5:
                    cout << "Usted ha elegido sacar el perímetro y área de figuras" << endl;
                    cout <<"Este es el menude calculo de perimetro y area, seleccione la figura a evaluar: " << endl;
                    cout <<"1. Cuadrado"<<endl;
                    cout <<"2. Rectangulo"<<endl;
                    cout <<"3. Triangulo"<<endl;
                    cout <<"4. Circulo"<<endl;
                    cin>>numFigura;
                    switch(numFigura){
                        //Cuadrados
                        case 1:
                            int lado;
                            cout<<"Usted ha escogido calcular el area y perimetro de un cuadrado"<<endl;
                            cout<<"Ingrese uno de los lados de su cuadrado"<<endl;
                            cin>>lado;
                            perimetro = lado*4;
                            area = lado*lado;
                            break;
                        //Rectangulo
                        case 2:
                            cout<<"Usted ha escogido calcular el area y perimetro de un rectangulo"<<endl;
                            cout<<"Ingrese la base del rectangulo";
                            cin>>base;
                            cout <<"ingrese la altura del rectangulo";
                            cin>>altura;
                            area = base*altura;
                            perimetro = (2*base)+(2*altura);
                            break;
                        //Triangulo
                        case 3:
                            float ladoUno, ladoDos, ladoTres;
                            cout<<"Usted ha escogido calcular el area y perimetro de un triangulo"<<endl;
                            cout <<"Ingrese el primer lado del triangulo"<<endl;
                            cin>>ladoUno;
                            cout <<"Ingrese el segundo lado del triangulo"<<endl;
                            cin>>ladoDos;
                            cout <<"Ingrese el tercer lado del triangulo"<<endl;
                            cin>>ladoTres;
                            cout<<"Ingrese la altura: "<<endl;
                            cin>>altura;
                            perimetro = ladoUno+ladoDos+ladoTres;
                            if(ladoUno > ladoDos & ladoUno>ladoTres){
                                base = ladoUno;
                            }
                            else{
                                if (ladoDos > ladoUno & ladoDos > ladoTres){
                                    base=ladoDos;
                                }
                                else{
                                    if (ladoTres > ladoUno & ladoTres>ladoDos){
                                        base = ladoTres;
                                    }
                                }
                            }
                            area=(base*altura)/2;
                            break;
                        //Circulo
                        case 4:
                            float radio, pi = 3.1416;
                            cout<<"Usted ha escogido calcular el area y perimetro de un circulo"<<endl;
                            cout<<"Ingrese el radio del circulo: "<<endl;
                            cin>>radio;
                            perimetro = pi* (radio*radio);
                            area = 2*(pi*radio);
                    }
                    cout<<"Su perimetro es: "<<endl;
                    cout<<perimetro<<endl;
                    cout<<"Su area es: "<<endl;
                    cout<<area<<endl;
                    break;
                // Calcula distintos conversiones de unidades
                case 6:
                    cout << "Usted ha elegido sacar conversión de unidades" << endl;
                    cout << "Este es el menú de conversión de unidades" << endl;
                    cout << "Elija 1= Horas a segundos" << endl;
                    cout << "Elija 2= Metros a pies" << endl;
                    cout << "Elija 3= Millas a kilómetros" << endl;
                    cout <<"\n\n Escriba su selección y luego pulse <<ENTER>>:";
                    cin >> numUnidades;
                    switch(numUnidades){
                    //horas a segundos
                        case 1:
                            cout << "Usted ha elegido convertir horas a segundos" << endl;
                            cout << "Inserte las horas que desea convertir" << endl;
                            cin >> horas;
                            resultado=horas*60;
                            cout << "Los segundos son: " << endl;\
                            break;
                    //metros a pies
                        case 2:
                            cout << "Usted ha elegido convertir metros a pies" << endl;
                            cout << "Inserte las metros que desea convertir" << endl;
                            std::cin >> metros;
                            resultado=metros*3.28084;
                            cout << "Los pies son: " << endl;
                            break;
                    //millas a kilometros
                        case 3:
                            cout << "Usted ha elegido convertir millas a kilómetros" << endl;
                            cout << "Inserte las millas que desea convertir" << endl;
                            cin >> millas;
                            resultado=millas*1.60934;
                            cout << "Los kilómetros son: " << endl;
                            break;
                        default:
                            cout <<"\n USTED APRETO UN CARACTER ILEGAL";
                            break;
                    }
                cout << resultado << '\n';
                default:
                    cout <<"\n USTED APRETO UN CARACTER ILEGAL";
                    break;
        }
    }
    else{
         cout << "Ingresó la contraseña incorrecta" << endl;
    }

    return 0;
 }
