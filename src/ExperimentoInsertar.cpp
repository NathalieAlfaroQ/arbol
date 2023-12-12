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

// Insertar en orden por estructura de arbol
void ExperimentoInsertar::insertarOrdenArbol(int operacionesTotal, int batch)
{
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

// Insertar aleatoriamente por estructura del arbol
void ExperimentoInsertar::insertarDesordenArbol(int operacionesTotal, int batch)
{
  for (int x = 0; x < operacionesTotal; x++)
  {
    inicio = chrono::high_resolution_clock::now();
    for (int y = 0; y < batch; y++)
    {
      // Se busca un numero aleatorio
      valor[x * batch +  y] = rand();
      arbol2->insertarNodo(valor[y]);
    }
    fin = chrono::high_resolution_clock::now();
    numeroOperacion[x] = x;
    diferencia = fin - inicio;
    duracion[x] = diferencia.count();
  }
}

// Insertar en orden por medio de Set
void ExperimentoInsertar::insertarOrdenSet(int operacionesTotal, int batch)
{
  for (int x = 0; x < operacionesTotal; x++)
  {
    inicio = chrono::high_resolution_clock::now();
    for (int y = 0; y < batch; y++)
    {
      arbolSet.insert(y + x * 10000);
    }
    fin = chrono::high_resolution_clock::now();
    numeroOperacion[x] = x;
    valor[x] = x;
    diferencia = fin - inicio;
    duracion[x] = diferencia.count();
  }
}

// Insertar en desorden por medio de Set
void ExperimentoInsertar::insertarDesordenSet(int operacionesTotal, int batch)
{
  for (int x = 0; x < operacionesTotal; x++)
  {
    valor[x] = rand();
    inicio = chrono::high_resolution_clock::now();
    for (int y = 0; y < batch; y++)
    {
      arbolSet2.insert(valor[x]);
    }
    fin = chrono::high_resolution_clock::now();
    numeroOperacion[x] = x;
    diferencia = fin - inicio;
    duracion[x] = diferencia.count();
  }
}

// Insertar en orden Unorderedset
void ExperimentoInsertar::insertarOrdenUnset(int operacionesTotal, int batch)
{
  for (int x = 0; x < operacionesTotal; x++)
  {
    inicio = chrono::high_resolution_clock::now();
    for (int y = 0; y < batch; y++)
    {
      arbolUnset.insert(y + x * 10000);
    }
    fin = chrono::high_resolution_clock::now();
    numeroOperacion[x] = x;
    valor[x] = x;
    diferencia = fin - inicio;
    duracion[x] = diferencia.count();
  }
}

// Insertar en desorden por medio de Unorderedset
void ExperimentoInsertar::insertarDesordenUnset(int operacionesTotal, int batch)
{
  for (int x = 0; x < operacionesTotal; x++)
  {
    valor[x] = rand();
    inicio = chrono::high_resolution_clock::now();
    for (int y = 0; y < batch; y++)
    {
      arbolUnset2.insert(valor[x]);
    }
    fin = chrono::high_resolution_clock::now();
    numeroOperacion[x] = x;
    diferencia = fin - inicio;
    duracion[x] = diferencia.count();
  }
}

// Insertar en orden vector
void ExperimentoInsertar::insertarOrdenVector(int operacionesTotal, int batch)
{
  // ??????????
}

// Insertar en desorden vector
void ExperimentoInsertar::insertarDesordenVector(int operacionesTotal, int batch)
{
  // ??????????
}
