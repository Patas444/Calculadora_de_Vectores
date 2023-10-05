#pragma once
#include "Commons.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class App
{
public:
	App();
	~App();
		//Menu principal de la calculadora, aqui se selecciona si se usara el vector 2,3 o 4
		void Menu() 
		{
			cout << "----------------------------------------" << endl;
			cout << "Por favor selcciona una de las opciones para realizar sus respectivas operaciones:" << endl;
			cout << "1- Vector 2" << endl;
			cout << "2- Vector 3" << endl;
			cout << "3- Vector 4" << endl;
			cout << "4- Salir" << endl;
			cout << "----------------------------------------" << endl;
			int op;
			cin >> op;
			switch (op)
			{
			case 1:
				Vector2D();
			break;
			case 2:
				Vector3D();
			break;
			case 3:
				Vector4D();
			break;
			case 4:
				exit(0);
			break;
			default:
				cout << "Error . . . " << endl;
			break;
			}

		}
		//Menu de operaciones de 2 Vectores 
		void Vector2D()
		{
			cout << "----------------------------------------" << endl;
			cout << "Selecciona la operación deseas realizar:" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Basicas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "1- Suma" << endl;
			cout << "2- Resta" << endl;
			cout << "3- Multiplicacion" << endl;
			cout << "4- Division" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Avanzadas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "5- Producto Punto" << endl;
			cout << "6- Producto Cruz" << endl;
			cout << "7- Magnitud" << endl;
			cout << "8- Normalizar" << endl;
			cout << "9- Salir" << endl;
			cout << "----------------------------------------" << endl;
			
			int op;
			cin >> op;
			switch (op)
			{
			case 1:
			{
				//Resultado de la suma de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.suma(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 2:
			{
				//Resultado de la resta de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.resta(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 3:
			{
				//Resultado de la multiplicacion de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.multiplicacion(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 4:
			{
				//Resultado de la division de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.division(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 5:
			{
				//Resultado del producto punto de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				double v3 = v1.productoEscalar(v2);
				cout << "R= " << v3;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 6:
			{
				//Resultado del producto cruz de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.productoVectorial(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 7:
			{
				//Resultado de la magnitud de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1): ";
				cin >> x1 >> y1;
				Vector2 v1(x1, y1);
				double mag = v1.magnitud();
				cout << "R= " << mag << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 8:
			{
				//Resultado de la normalizacion de 2 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1): ";
				cin >> x1 >> y1;
				Vector2 v1(x1, y1);
				Vector2 v2 = v1.normalizar();
				cout << "R= ";
				v2.mostrar();
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 9:
			{
				Menu();
				break;
			}
			}
		}
		//Menu de operaciones de 3 Vectores 
		void Vector3D()
		{
			cout << "----------------------------------------" << endl;
			cout << "Selecciona la operación deseas realizar:" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Basicas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "1- Suma" << endl;
			cout << "2- Resta" << endl;
			cout << "3- Multiplicacion" << endl;
			cout << "4- Division" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Avanzadas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "5- Producto Punto" << endl;
			cout << "6- Producto Cruz" << endl;
			cout << "7- Magnitud" << endl;
			cout << "8- Normalizar" << endl;
			cout << "9- Salir" << endl;
			cout << "----------------------------------------" << endl;
			int op;
			cin >> op;
			switch (op)
			{
			case 1:
			{
				//Resultado de la suma de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.suma(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 2:
			{
				//Resultado de la resta de 3 vectores de los valores ingresados
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.resta(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 3:
			{
				//Resultado de la multiplicacion de 3 vectores de los valores ingresados
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.multiplicacion(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 4:
			{
				//Resultado de la division de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.division(v2);
				cout << "R= ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 5:
			{
				//Resultado del producto punto de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				double v3 = v1.productoEscalar(v2);
				cout << "R= " << v3;
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 6:
			{
				//Resultado del producto cruz de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.productoVectorial(v2);
				cout << "R=  ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 7:
			{
				//Resultado de la magnitud de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				Vector3 v1(x1, y1, z1);
				double mag = v1.magnitud();
				cout << "R=  " << mag << endl;
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 8:
			{
				//Resultado de la normalizacion de 3 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				Vector3 v1(x1, y1, z1);
				Vector3 v2 = v1.normalizar();
				cout << "R=  ";
				v2.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 9:
			{
				Menu();
				break;
			}
			}
		}
		//Menu de operaciones de 4 Vectores 
		void Vector4D()
		{
			cout << "----------------------------------------" << endl;
			cout << "Selecciona la operación deseas realizar:" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Basicas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "1- Suma" << endl;
			cout << "2- Resta" << endl;
			cout << "3- Multiplicacion" << endl;
			cout << "4- Division" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Operaciones Avanzadas" << endl;
			cout << "----------------------------------------" << endl;
			cout << "5- Producto Punto" << endl;
			cout << "6- Magnitud" << endl;
			cout << "7- Normalizar" << endl;
			cout << "8- Salir" << endl;
			cout << "----------------------------------------" << endl;
			int op;
			cin >> op;
			switch (op)
			{
			case 1:
			{
				//Resultado de la suma de 4 vectores de los valores ingresados
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.suma(v2);
				cout << "R=  ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 2:
			{
				//Resultado de la resta de 4 vectores de los valores ingresados
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.resta(v2);
				cout << "R=  ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 3:
			{
				//Resultado de la multiplicacion de 4 vectores de los valores ingresados
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.multiplicacion(v2);
				cout << "R=  ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 4:
			{
				//Resultado de la division de 4 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.division(v2);
				cout << "R=  ";
				v3.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 5:
			{
				//Resultado del producto punto de 4 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				double v3 = v1.productoEscalar(v2);
				cout <<"R=  " << v3;
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 6:
			{
				//Resultado de la magnitud de 4 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				Vector4 v1(x1, y1, z1, w1);
				double mag = v1.magnitud();
				cout << "R=  " << mag << endl;
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 2)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 7:
			{
				//Resultado de la normalizacion de 4 vectores de los valores ingresados 
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2 = v1.normalizar();
				cout << "R=  ";
				v2.mostrar();
				cout << "----------------------------------------" << endl;
				cout << "¿Desea continuar? (1-Si/2-No) :";
				int op;
				cin >> op;

				if (op == 2)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 8:
			{
				Menu();
				break;
			}
			}
		}
	private:
		double w1, x1, y1, z1, w2, x2, y2, z2;

};