#include <Python.h>
#include <iostream>

int main() {
    // Initialize the Python interpreter
    Py_Initialize();

    // Run a Python script
    const char* script = "print('Hello from Python!')";
    PyRun_SimpleString(script);

    // Finalize the Python interpreter
    Py_Finalize();

    return 0;
}
