#include <iostream>
#include "PNNKernelType.h"
#include "PNNOutputMode.h"

using namespace std;

class AbstractPNN {
private:
    double* _deriv;
    double* _deriv2;
    int _inputCount;
    //PNNKernelType _kernel;
    int _outputCount;
    //PNNOutputMode _outputMode;
    int* _confusion;
protected:
    AbstractPNN(PNNKernelType kernel,
        PNNOutputMode outputMode, int inputCount,
        int outputCount) {}
    ~AbstractPNN();

};