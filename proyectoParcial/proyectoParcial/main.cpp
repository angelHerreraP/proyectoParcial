#include<iostream>
#include <cmath> //libreria para operaciones matemáticas
#include <string> //libreria para manipulación de elementos string

using namespace std;
int main()
{
    // Definicion de variables
    // x, y & z son variables para almacenar los numeros ingresados, num para seleccionar el menu principal
    int numFigura, numUnidades, numMenu, contra, x, y, z;
    float raiz, numRaiz, horas, segundos, metros, pies, millas, kilometros, area, perimetro, altura;
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
                
                if (x>y && y>z){
                    cout << "Es el mayor de los tres"<< endl;
                    cout<< x;
                }
                else{
                    if (y>x && x>z) {
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
                    raiz=sqrt(numRaiz);
                    cout << "La raíz es: " << endl;
                    cout <<raiz;
                    break;
                // Calcula el area y perimetro de varias figuras
                case 5:
                    cout << "Usted ha elegido sacar el perímetro y área de figuras" << endl;
                    cout <<"Este es el menude calculo de perimetro y area, seleccione la figura a evaluar: " << endl;
                    cout <<"1. Cuadrado";
                    cout <<"2. Rectangulo";
                    cout <<"3. Triangulo";
                    cout <<"4. Circulo";
                    cin>>numFigura;
                    switch(numFigura){
                        //Cuadrados
                        case 1:
                            int lado;
                            cout<<"Usted ha escogido calcular el area y perimetro de un cuadrado"<<endl;
                            cout<<"Ingrese uno de los lados de su cuadrado"<<endl;
                            cin>>lado;
                            perimetro = lado*lado;
                            area = lado*4;
                            cout<<"Su perimetro es: "<<endl;
                            cout<<perimetro;
                            cout<<"Su area es: "<<endl;
                            cout<<area;
                            break;
                        //Rectangulo
                        case 2:
                            float base;
                            cout<<"Usted ha escogido calcular el area y perimetro de un rectangulo"<<endl;
                            cout<<"Ingrese la base del rectangulo";
                            cin>>base;
                            cout <<"ingrese la altura del rectangulo";
                            cin>>altura;
                            perimetro = base*altura;
                            area = 2*(base+altura);
                            cout<<"Su perimetro es: "<<endl;
                            cout<<perimetro;
                            cout<<"Su area es: "<<endl;
                            cout<<area;
                            break;
                        //Triangulo
                        case 3:
                            float ladoUno, ladoDos, ladoTres, alturaChoice;
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
                            area=((max(ladoUno, ladoDos, ladoTres))*altura)/2;
                            cout<<"Su perimero es: "<<endl;
                            cout<<perimetro;
                            cout<<"Su area es: "<<endl;
                            cout<<area;
                            break;
                        //Circulo
                        case 4:
                            float radio, pi = 3.1416;
                            cout<<"Usted ha escogido calcular el area y perimetro de un circulo"<<endl;
                            cout<<"Ingrese el radio del circulo: "<<endl;
                            cin>>radio;
                            perimetro = pi* (radio*radio);
                            area = 2*(pi*radio);
                            cout<<"Su perimero es: "<<endl;
                            cout<<perimetro;
                            cout<<"Su area es: "<<endl;
                            cout<<area;
                    }
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
                        segundos=horas*60;
                        cout << "Los segundos son: " << endl;
                        cout << segundos<< '\n';
                        break;
                    //metros a pies
                    case 2:
                        cout << "Usted ha elegido convertir metros a pies" << endl;
                        cout << "Inserte las metros que desea convertir" << endl;
                        std::cin >> metros;
                        pies=metros*3.28084;
                        cout << "Los pies son: " << endl;
                        cout << pies<< '\n';
                        break;
                    //millas a kilometros
                    case 3:
                        cout << "Usted ha elegido convertir millas a kilómetros" << endl;
                        cout << "Inserte las millas que desea convertir" << endl;
                        cin >> millas;
                        kilometros=millas*1.60934;
                        cout << "Los kilómetros son: " << endl;
                        cout << kilometros<< '\n';
                        break;

                    default:
                        cout <<"\n USTED APRETO UN CARACTER ILEGAL";
                        break;
                }
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
