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
      insertarOrdenArbol(operacionesTotal, batch);
      insertarOrdenSet(operacionesTotal, batch);
      insertarOrdenUnset(operacionesTotal, batch);
      insertarOrdenVector(operacionesTotal, batch);
    }
    else if (experimento == 2)
    {
      // Insertar en desorden
      insertarDesordenArbol(operacionesTotal, batch);
      insertarDesordenSet(operacionesTotal, batch);
      insertarDesordenUnset(operacionesTotal, batch);
      insertarDesordenVector(operacionesTotal, batch);
    }
    else if (experimento == 3)
    {
      // Buscar en orden
      contieneOrdenArbol(operacionesTotal, batch);
      contieneOrdenSet(operacionesTotal, batch);
      contieneOrdenUnset(operacionesTotal, batch);
      contieneOrdenVector(operacionesTotal, batch);
    }
    else if (experimento == 4)
    {
      // Buscar en desorden
      contieneDesordenArbol(operacionesTotal, batch);
      contieneDesordenSet(operacionesTotal, batch);
      contieneDesordenUnset(operacionesTotal, batch);
      contieneDesordenVector(operacionesTotal, batch);
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