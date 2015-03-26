// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Planeta.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;
int formato = 25;
//Escribe los datos del objeto mascota dado en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varias mascotas en un solo archivo
void escribir(string nombre_archivo, Planeta*planeta, int posicion)
{
    ofstream esc(nombre_archivo.c_str(),ios::in);
    esc.seekp(posicion*25);
    esc.write(planeta->nombre.c_str(), 10);

    int h = planeta->habitantes;
    esc.write((char*)&h, 4);

    double d = planeta->diametro;
    esc.write((char*)&d, 8);

    esc.write(&planeta->categoria, 1);
    esc.close();


}

//Devuelve una mascota previamente escrita (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varias mascotas de un solo archivo
Planeta* leer(string nombre_archivo, int posicion)
{
    ifstream ver(nombre_archivo.c_str());
    ver.seekg(posicion*25);\

    char* num = new char[10];
    string c;

    int personas;
    double dia;
    char tipo;

    ver.read(num,10);
    c = num;

    ver.read((char*)&personas, 4);
    ver.read((char*)&dia, 8);
    ver.read(&tipo, 1);


    Planeta *p = new Planeta(c, personas, dia, tipo);
    return p;

}

//Devuelve el primer valor fue ingresado en mi_pila (dada)
//Nota: devuelve el valor mas viejo
string getFondo(stack<string> mi_pila)
{
    string resultado;
    return resultado;
}


//Devuelve el ultimo valor que fue ingresado en mi_cola (dada)
//Nota: devuelve el valor mas nuevo
char getUltimo(queue<char> mi_cola)
{
    char resultado;
    return resultado;
}

//Dado una lista, devuelve un vector que contenga los datos de la lista en el mismo orden
vector<int> convertirAVector(list<int> mi_lista)
{
    vector<int> mi_vector;
    return mi_vector;
}

//Dado un numero, devuelve un mapa que contenga su tabla de multiplicacion
//Ejemplo:
//Dado num = 5
//Devuelve el siguiente mapa
//{1=>5,2=>10,3=>15,4=>20,5=>25,6=>30,7=>35,8=>40,9=>45,10=>50}
map<int,int> getTabla(int num)
{
    map<int,int> mi_mapa;
    return mi_mapa;
}

//Dado un arbol con raiz dada, devuelve un set que contenga todos los valores almacenados en el arbol
//Nota los valores estan almacendados en el atributo valor en la clase NodoBinario
set<string> getValores(NodoBinario* raiz)
{
    set<string> mi_set;
    return mi_set;
}

//Dado un arbol con raiz dada, busca el nodo que contenga el valor buscado (dado) y lo reemplaza con la variable reemplazo (dada)
//Nota los valores estan almacendados en el atributo valor en la clase NodoBinario
void buscarYReemplazar(NodoBinario* raiz, string buscado, string reemplazo)
{
    if(raiz!=NULL)
    {
        if (raiz->valor!=buscado)
        {
            cout<<"por aqui no lo econtro"<<raiz->valor<<endl;
        }
        else
        {
            (raiz->valor=reemplazo);

        }
        buscarYReemplazar(raiz->hijo_der, buscado, reemplazo);
        buscarYReemplazar(raiz->hijo_izq, buscado, reemplazo);
    }

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

