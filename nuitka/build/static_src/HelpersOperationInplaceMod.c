//     Copyright 2020, Kay Hayen, mailto:kay.hayen@gmail.com
//
//     Part of "Nuitka", an optimizing Python compiler that is compatible and
//     integrates with CPython, but also works on its own.
//
//     Licensed under the Apache License, Version 2.0 (the "License");
//     you may not use this file except in compliance with the License.
//     You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//     Unless required by applicable law or agreed to in writing, software
//     distributed under the License is distributed on an "AS IS" BASIS,
//     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//     See the License for the specific language governing permissions and
//     limitations under the License.
//
/* WARNING, this code is GENERATED. Modify the template HelperOperationInplace.c.j2 instead! */

/* This file is included from another C file, help IDEs to still parse it on its own. */
#ifdef __IDE_ONLY__
#include "nuitka/prelude.h"
#endif

/* C helpers for type in-place "%" (MOD) operations */

#if PYTHON_VERSION < 300
/* Code referring to "INT" corresponds to Python2 'int' and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_INT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyInt_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    {
        PyObject *result = _BINARY_OPERATION_MOD_OBJECT_INT_INT(*operand1, operand2);

        if (unlikely(result == NULL)) {
            return false;
        }

        // We got an object handed, that we have to release.
        Py_DECREF(*operand1);

        // That's our return value then. As we use a dedicated variable, it's
        // OK that way.
        *operand1 = result;

        return true;
    }
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_INT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_INT_INT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "OBJECT" corresponds to any Python object and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_OBJECT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (PyInt_CheckExact(*operand1) && 1) {
        return _BINARY_OPERATION_MOD_INT_INT_INPLACE(operand1, operand2);
    }
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_INT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "INT" corresponds to Python2 'int' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_INT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyInt_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (1 && PyInt_CheckExact(operand2)) {
        return _BINARY_OPERATION_MOD_INT_INT_INPLACE(operand1, operand2);
    }
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_INT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_INT_OBJECT_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "LONG" corresponds to Python2 'long', Python3 'int' and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_LONG_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyLong_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_LONG_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_LONG_LONG_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_OBJECT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_LONG_INPLACE(operand1, operand2);
}

/* Code referring to "LONG" corresponds to Python2 'long', Python3 'int' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_LONG_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyLong_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_LONG_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_LONG_OBJECT_INPLACE(operand1, operand2);
}

/* Code referring to "FLOAT" corresponds to Python 'float' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_FLOAT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyFloat_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_FLOAT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_FLOAT_FLOAT_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_OBJECT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_FLOAT_INPLACE(operand1, operand2);
}

/* Code referring to "FLOAT" corresponds to Python 'float' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_FLOAT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyFloat_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_FLOAT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_FLOAT_OBJECT_INPLACE(operand1, operand2);
}

#if PYTHON_VERSION < 300
/* Code referring to "INT" corresponds to Python2 'int' and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_INT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyInt_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_INT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_INT_LONG_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "INT" corresponds to Python2 'int' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_INT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyInt_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_INT_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_INT_FLOAT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "LONG" corresponds to Python2 'long', Python3 'int' and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_LONG_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyLong_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_LONG_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_LONG_INT_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "LONG" corresponds to Python2 'long', Python3 'int' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_LONG_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyLong_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_LONG_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_LONG_FLOAT_INPLACE(operand1, operand2);
}

#if PYTHON_VERSION < 300
/* Code referring to "FLOAT" corresponds to Python 'float' and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_FLOAT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyFloat_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_FLOAT_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_FLOAT_INT_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "FLOAT" corresponds to Python 'float' and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_FLOAT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyFloat_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_FLOAT_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_FLOAT_LONG_INPLACE(operand1, operand2);
}

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_STR_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_INT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_STR_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_LONG_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_STR_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_FLOAT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "STR" to Python2 'str'. */
static bool _BINARY_OPERATION_MOD_STR_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyString_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_STR_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "UNICODE" to Python2 'unicode', Python3 'str'. */
static bool _BINARY_OPERATION_MOD_STR_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyUnicode_CheckExact(operand2));
    assert(NEW_STYLE_NUMBER(operand2));

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_UNICODE_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "TUPLE" to Python 'tuple'. */
static bool _BINARY_OPERATION_MOD_STR_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyTuple_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_TUPLE_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "LIST" to Python 'list'. */
static bool _BINARY_OPERATION_MOD_STR_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyList_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_LIST_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "DICT" to Python 'dict'. */
static bool _BINARY_OPERATION_MOD_STR_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyDict_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_DICT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "STR" corresponds to Python2 'str' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_STR_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyString_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_STR_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_STR_OBJECT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "INT" to Python2 'int'. */
static bool _BINARY_OPERATION_MOD_UNICODE_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyInt_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_INT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_INT_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "LONG" to Python2 'long', Python3
 * 'int'. */
static bool _BINARY_OPERATION_MOD_UNICODE_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_LONG_INPLACE(operand1, operand2);
}

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_UNICODE_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_FLOAT_INPLACE(operand1, operand2);
}

#if PYTHON_VERSION < 300
/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "STR" to Python2 'str'. */
static bool _BINARY_OPERATION_MOD_UNICODE_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyString_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_STR_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "BYTES" to Python3 'bytes'. */
static bool _BINARY_OPERATION_MOD_UNICODE_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyBytes_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_BYTES_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "UNICODE" to Python2 'unicode',
 * Python3 'str'. */
static bool _BINARY_OPERATION_MOD_UNICODE_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyUnicode_CheckExact(operand2));
    assert(NEW_STYLE_NUMBER(operand2));

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_UNICODE_INPLACE(operand1, operand2);
}

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "TUPLE" to Python 'tuple'. */
static bool _BINARY_OPERATION_MOD_UNICODE_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyTuple_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_TUPLE_INPLACE(operand1, operand2);
}

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "LIST" to Python 'list'. */
static bool _BINARY_OPERATION_MOD_UNICODE_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyList_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_LIST_INPLACE(operand1, operand2);
}

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "DICT" to Python 'dict'. */
static bool _BINARY_OPERATION_MOD_UNICODE_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);
    assert(PyDict_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_DICT_INPLACE(operand1, operand2);
}

/* Code referring to "UNICODE" corresponds to Python2 'unicode', Python3 'str' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_UNICODE_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyUnicode_CheckExact(*operand1));
    assert(NEW_STYLE_NUMBER(*operand1));
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_UNICODE_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_UNICODE_OBJECT_INPLACE(operand1, operand2);
}

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "BYTES" to Python3 'bytes'. */
static bool _BINARY_OPERATION_MOD_BYTES_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyBytes_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_BYTES_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "LONG" to Python2 'long', Python3 'int'. */
static bool _BINARY_OPERATION_MOD_BYTES_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyLong_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_LONG_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_LONG_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "FLOAT" to Python 'float'. */
static bool _BINARY_OPERATION_MOD_BYTES_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyFloat_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_FLOAT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_FLOAT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "UNICODE" to Python2 'unicode', Python3 'str'. */
static bool _BINARY_OPERATION_MOD_BYTES_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyUnicode_CheckExact(operand2));
    assert(NEW_STYLE_NUMBER(operand2));

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_UNICODE_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "TUPLE" to Python 'tuple'. */
static bool _BINARY_OPERATION_MOD_BYTES_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyTuple_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_TUPLE_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "LIST" to Python 'list'. */
static bool _BINARY_OPERATION_MOD_BYTES_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyList_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_LIST_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "DICT" to Python 'dict'. */
static bool _BINARY_OPERATION_MOD_BYTES_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);
    assert(PyDict_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_DICT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "BYTES" corresponds to Python3 'bytes' and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_BYTES_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    assert(PyBytes_CheckExact(*operand1));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(*operand1));
#endif
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_BYTES_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_BYTES_OBJECT_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION < 300
/* Code referring to "OBJECT" corresponds to any Python object and "STR" to Python2 'str'. */
static bool _BINARY_OPERATION_MOD_OBJECT_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyString_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_STR_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_STR_INPLACE(operand1, operand2);
}
#endif

#if PYTHON_VERSION >= 300
/* Code referring to "OBJECT" corresponds to any Python object and "BYTES" to Python3 'bytes'. */
static bool _BINARY_OPERATION_MOD_OBJECT_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyBytes_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_BYTES_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_BYTES_INPLACE(operand1, operand2);
}
#endif

/* Code referring to "OBJECT" corresponds to any Python object and "UNICODE" to Python2 'unicode', Python3 'str'. */
static bool _BINARY_OPERATION_MOD_OBJECT_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyUnicode_CheckExact(operand2));
    assert(NEW_STYLE_NUMBER(operand2));

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_UNICODE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_UNICODE_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "TUPLE" to Python 'tuple'. */
static bool _BINARY_OPERATION_MOD_OBJECT_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyTuple_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_TUPLE_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_TUPLE_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "LIST" to Python 'list'. */
static bool _BINARY_OPERATION_MOD_OBJECT_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyList_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_LIST_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_LIST_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "DICT" to Python 'dict'. */
static bool _BINARY_OPERATION_MOD_OBJECT_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);
    assert(PyDict_CheckExact(operand2));
#if PYTHON_VERSION < 300
    assert(!NEW_STYLE_NUMBER(operand2));
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_DICT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_DICT_INPLACE(operand1, operand2);
}

/* Code referring to "OBJECT" corresponds to any Python object and "OBJECT" to any Python object. */
static bool _BINARY_OPERATION_MOD_OBJECT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    assert(operand1); // Pointer must be non-null.

    CHECK_OBJECT(*operand1);
    CHECK_OBJECT(operand2);

#if PYTHON_VERSION < 300
    if (PyInt_CheckExact(*operand1) && PyInt_CheckExact(operand2)) {
        return _BINARY_OPERATION_MOD_INT_INT_INPLACE(operand1, operand2);
    }
#endif

#if PYTHON_VERSION < 300
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#else
    if (Py_REFCNT(*operand1) == 1) {
        // We more or less own the operand, so we might re-use its storage and
        // execute stuff in-place.
    }

#endif

    PyObject *result = PyNumber_InPlaceMod(*operand1, operand2);

    if (unlikely(result == NULL)) {
        return false;
    }

    // We got an object handed, that we have to release.
    Py_DECREF(*operand1);

    // That's our return value then. As we use a dedicated variable, it's
    // OK that way.
    *operand1 = result;

    return true;
}

bool BINARY_OPERATION_MOD_OBJECT_OBJECT_INPLACE(PyObject **operand1, PyObject *operand2) {
    return _BINARY_OPERATION_MOD_OBJECT_OBJECT_INPLACE(operand1, operand2);
}