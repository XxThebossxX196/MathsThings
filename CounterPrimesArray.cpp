#include <iostream>

/*
___________.__          ___.                        
\__    ___/|  |__   ____\_ |__   ____  ______ ______
  |    |   |  |  \_/ __ \| __ \ /  _ \/  ___//  ___/
  |    |   |   Y  \  ___/| \_\ (  <_> )___ \ \___ \ 
  |____|   |___|  /\___  >___  /\____/____  >____  >
                \/     \/    \/           \/     \/ 
*/

using namespace std;

typedef int MyArray[100];


bool esPrimo(int numero) { //FUNCION QUE EVALUA SI UN NUMERO ES PRIMO
	for (int valor = 2; valor < numero / 2; valor++) {
		if (numero % valor == 0) {
			return false;
		}
	}
	return true;
}
int rellenarArray(MyArray t) { //RELLENAMOS EL ARRAY CON LOS VALORES DEL USUARIO
	int num=0,i=0;
	while (num != -1 && i < 101) {
		cout << "[+] Introduce un numero para poner en la posicion del array N: (-1 Para parar)" << i << "--->  ";
		cin >> num;
		t[i] = num;
		i++;
	}
	return i; //i es la longitud del array
}
int primo(MyArray t, int longitud) { //PASAMOS EL ARRAY Y CONTAMOS LOS PRIMOS
	int contador=0;
	for (int valorArray = 0; valorArray < longitud; valorArray++){
		if (t[valorArray] == 1) { //el uno no es primo
			valorArray += 1;
		}
		else if (esPrimo(t[valorArray])) {
			contador += 1;
		}
	}
	return contador;
}
//-------------Flujo Principal del Programa----------------
int main() {
	MyArray Array;
	int longitud=rellenarArray(Array);
	cout << "[+] La cantidad de primos en el array es: " << primo(Array, longitud)-1 << endl;
}
