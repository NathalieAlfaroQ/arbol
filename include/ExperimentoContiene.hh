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

// Encabezados ajenos
#include <BST.hh>
#include <ExperimentoInsertar.hh>

// Encabezado
#ifndef EXPERIMENTOCONTIENE_HH
#define EXPERIMENTOCONTIENE_HH

class ExperimentoContiene
{
  // Estructuras
  BST *arbol = new BST;
  BST *arbol2 = new BST;
  vector<int> arreglo;
  vector<int> arreglo2;
  set<int> arbolSet;
  set<int> arbolSet2;
  unordered_set<int> arbolUnset;
  unordered_set<int> arbolUnset2;

  // Tiempos
  chrono::high_resolution_clock::time_point inicio;
  chrono::high_resolution_clock::time_point fin;
  chrono::duration<double, nano> diferencia;

  // Guardar los datos
  double *duracion = new double[100];
  int *numeroOperacion = new int[100];
  int *valor = new int[100];

  // Metodos:
  // Arbol
  void contieneOrdenArbol(int operacionesTotal, int batch);
  void contieneDesordenArbol(int operacionesTotal, int batch);
  // Set
  void contieneOrdenSet(int operacionesTotal, int batch);
  void contieneDesordenSet(int operacionesTotal, int batch);
  // Unset
  void contieneOrdenUnset(int operacionesTotal, int batch);
  void contieneDesordenUnset(int operacionesTotal, int batch);
  // Vector
  void contieneOrdenVector(int operacionesTotal, int batch);
  void contieneDesordenVector(int operacionesTotal, int batch);
};
#endif