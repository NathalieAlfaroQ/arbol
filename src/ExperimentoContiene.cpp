// Bibliotecas
#include <iostream>
#include <time.h>
#include <unistd.h>
#include <chrono>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>
#include <numeric>
using namespace std;

// Encabezados
#include <BST.hh>
#include <ExperimentoInsertar.hh>
#include <ExperimentoContiene.hh>

// Contiene en orden por estructura de arbol
void ExperimentoContiene::contieneOrdenArbol(int operacionesTotal, int batch)
{
  for (int x = 0; x < 100000; x++) {
    arbolC->insertarNodo(rand());
    valor[x];
  }

  // operacionesTotal
  for (int x = 0; x < operacionesTotal; x++)
  {
    // Se inicia a contar el tiempo de la insercion
    inicio = chrono::high_resolution_clock::now();
    // Por batch
    for (int y = 0; y < batch; y++)
    {
      arbol->insertarNodo(y + x * 10000);
    }
    // Se termina de medir el tiempo de la insercion
    fin = chrono::high_resolution_clock::now();
    // Se guarda el numero de operacion en el arreglo
    numeroOperacion[x] = x;
    // Se guarda el numero en el arreglo
    valor[x] = x;
    // Se busca la duracion, para guardarla en el arreglo
    diferencia = fin - inicio;
    // Se guarda la duracion en nanosegundos
    duracion[x] = diferencia.count();
    // Se imprime la duracion en nanosegundos
  }
}

// Contiene aleatoriamente por estructura del arbol
void ExperimentoContiene::contieneDesordenArbol(int operacionesTotal, int batch)
{}

// Contiene en orden por medio de Set
void ExperimentoContiene::contieneOrdenSet(int operacionesTotal, int batch)
{
}

// Contiene en desorden por medio de Set
void ExperimentoContiene::contieneDesordenSet(int operacionesTotal, int batch)
{
}

// Contiene en orden Unorderedset
void ExperimentoContiene::contieneOrdenUnset(int operacionesTotal, int batch)
{
}

// Contiene en desorden por medio de Unorderedset
void ExperimentoContiene::contieneDesordenUnset(int operacionesTotal, int batch)
{
}

// Contiene en orden vector
void ExperimentoContiene::contieneOrdenVector(int operacionesTotal, int batch)
{
  // ??????????
}

// Contiene en desorden vector
void ExperimentoContiene::contieneDesordenVector(int operacionesTotal, int batch)
{
  // ??????????
}
