#include <gtest/gtest.h>
#include <BST.hh>
using namespace std;

TEST(BSTTest, insertarNodoValido1)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(arbolPrueba->insertarNodo(100), true);
}

TEST(BSTTest, insertarNodoValido2)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(arbolPrueba->insertarNodo(-5), true);
}

TEST(BSTTest, insertarNodoInvalido)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(arbolPrueba->insertarNodo(3.14), false);
}

TEST(BSTTest, insertarNodoInvalido1)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(arbolPrueba->insertarNodo(-3.14), false);
}

