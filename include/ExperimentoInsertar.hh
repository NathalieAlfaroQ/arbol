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

// Encabezado
#ifndef EXPERIMENTOINSERTAR_HH
#define EXPERIMENTOINSERTAR_HH

class ExperimentoInsertar
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
  void insertarOrdenArbol(int operacionesTotal, int batch);
  void insertarDesordenArbol(int operacionesTotal, int batch);
  // Set
  void insertarOrdenSet(int operacionesTotal, int batch);
  void insertarDesordenSet(int operacionesTotal, int batch);
  // Unset
  void insertarOrdenUnset(int operacionesTotal, int batch);
  void insertarDesordenUnset(int operacionesTotal, int batch);
  // Vector
  void insertarOrdenVector(int operacionesTotal, int batch);
  void insertarDesordenVector(int operacionesTotal, int batch);
};
#endif