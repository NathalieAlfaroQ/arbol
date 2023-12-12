#include <gtest/gtest.h>
#include <BST.hh>
using namespace std;

TEST(BSTTest, insertarNodoValido)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodo(1), true);
}

TEST(BSTTest, insertarNodoValido1)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodo(100), true);
}

TEST(BSTTest, insertarNodoValido2)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodo(-5), true);
}

TEST(BSTTest, insertarNodoInvalido)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodo(3.14), false);
}

TEST(BSTTest, insertarNodoInvalido1)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodo(-3.14), false);
}

TEST(BSTTest, insertarNodoRecursivoValido)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodoRecursivo(1, 33), true);
}

TEST(BSTTest, insertarNodoRecursivoInvalido)
{
  BST *arbolPrueba = new BST();
  ASSERT_EQ(BST.insertarNodoRecursivo(1, 33.33), false);
}
