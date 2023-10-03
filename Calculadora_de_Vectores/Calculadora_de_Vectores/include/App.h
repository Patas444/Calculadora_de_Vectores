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

		void Menu() 
		{
			cout << "----------------------------------------" << endl;
			cout << "Seleccione una opcion:" << endl;
			cout << "1- Vector 2D" << endl;
			cout << "2- Vector 3D" << endl;
			cout << "3- Vector 4D" << endl;
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.sum(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.rest(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.mult(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.div(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				double v3 = v1.prEsc(v2);
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1): ";
				cin >> x1 >> y1;
				cout << "Ingrese los valores del segundo vector (x2 y2): ";
				cin >> x2 >> y2;
				Vector2 v1(x1, y1);
				Vector2 v2(x2, y2);
				Vector2 v3 = v1.prVect(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1): ";
				cin >> x1 >> y1;
				Vector2 v1(x1, y1);
				Vector2 v2 = v1.norm();
				cout << "R= ";
				v2.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.sum(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.rest(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.mult(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.div(v2);
				cout << "R= ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				double v3 = v1.prEsc(v2);
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2): ";
				cin >> x2 >> y2 >> z2;
				Vector3 v1(x1, y1, z1);
				Vector3 v2(x2, y2, z2);
				Vector3 v3 = v1.prVect(v2);
				cout << "R=  ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1): ";
				cin >> x1 >> y1 >> z1;
				Vector3 v1(x1, y1, z1);
				Vector3 v2 = v1.norm();
				cout << "R=  ";
				v2.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.sum(v2);
				cout << "R=  ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.rest(v2);
				cout << "R=  ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.mult(v2);
				cout << "R=  ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.div(v2);
				cout << "R=  ";
				v3.Mostrar();
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del primer vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				cout << "Ingrese los valores del segundo vector (x2 y2 z2 w2): ";
				cin >> x2 >> y2 >> z2 >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				double v3 = v1.prEsc(v2);
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
				cout << "----------------------------------------" << endl;
				cout << "Ingrese los valores del vector (x1 y1 z1 w1): ";
				cin >> x1 >> y1 >> z1 >> w1;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2 = v1.norm();
				cout << "R=  ";
				v2.Mostrar();
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