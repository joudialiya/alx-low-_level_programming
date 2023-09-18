#include <Python.h>

PyObject *add(PyObject *a, PyObject *b)
{
	return (PyNumber_Add(a, b));
}

PyObject *sub(PyObject *a, PyObject * b)
{
	return (PyNumber_Subtract(a, b));
}

PyObject *mul(PyObject *a, PyObject *b)
{
	return (PyNumber_Multiply(a, b));
}

PyObject *_div(PyObject *a, PyObject *b)
{
	return (PyNumber_FloorDivide(a, b));
}

PyObject *mod(PyObject *a, PyObject *b)
{
	return (PyNumber_Divmod(a, b));
}
