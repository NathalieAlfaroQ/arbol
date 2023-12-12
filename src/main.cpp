#include <iostream>
#include <fstream>
#include <time.h>
#include <unistd.h>
#include <chrono>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>
#include <stdexcept>

#include <BST.hh>
#include <ExperimentoInsertar.hh>

using namespace std;

int main()
{
  try
  {
    int experimento, operacionesTotal, batch;

    cout << "\n\nDigite la cantidad de operaciones total:\n";
    cin >> operacionesTotal;

    cout << "\n\nDigite las operaciones por batch:\n";
    cin >> batch;

    cout << "Experimento que desea ejecutar:\n\n1-Insertar en orden.\n2-Insertar en desorden."
            "\n3-Buscar en orden.\n4-Buscar en desorden.\n";
    cin >> experimento;

    if (experimento == 1)
    {
      // Insertar en orden
      void insertarOrdenArbol(int operacionesTotal, int batch);
      void insertarOrdenSet(int operacionesTotal, int batch);
      void insertarOrdenUnset(int operacionesTotal, int batch);
      void insertarOrdenVector(int operacionesTotal, int batch);
    }
    else if (experimento == 2)
    {
      // Insertar en desorden
      void insertarDesordenArbol(int operacionesTotal, int batch);
      void insertarDesordenSet(int operacionesTotal, int batch);
      void insertarDesordenUnset(int operacionesTotal, int batch);
      void insertarDesordenVector(int operacionesTotal, int batch);
    }
    else if (experimento == 3)
    {
      // Buscar en orden
      void contieneOrdenArbol(int operacionesTotal, int batch);
      void contieneOrdenSet(int operacionesTotal, int batch);
      void contieneOrdenUnset(int operacionesTotal, int batch);
      void contieneOrdenVector(int operacionesTotal, int batch);
    }
    else if (experimento == 4)
    {
      // Buscar en desorden
      void contieneDesordenArbol(int operacionesTotal, int batch);
      void contieneDesordenSet(int operacionesTotal, int batch);
      void contieneDesordenUnset(int operacionesTotal, int batch);
      void contieneDesordenVector(int operacionesTotal, int batch);
    }
    else
    {
      throw invalid_argument("Solo puede digitar 1, 2, 3 o 4.");
    }
  }
  catch (invalid_argument &e)
  {
    cerr << e.what() << endl;
    return -1;
  }
  return 0;
}