#pragma once
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib> 
#include <ctime>
#include <stdlib.h>
#include "Eigen/Eigen"

using namespace Eigen;
using namespace std;

//// GENERAL ////

//Computes the factorial of an input value
double Factorial(double k);

//Computes the sum of a series from an input interval
double SumOfSeries(double i, double f);


//// 4 PROBABILITY ////

//Computes Permutations
double nPr(double n, double r);

//Computes Combinations
double nCr(double n, double r);


//// 5 SURVERY CALCULATIONS ////

//Computing Linear Precision calculations
double LinPrec(double err, double dist, double lp, int o);

//Converts a DMS value to decimal degreees
double DMS_to_Deg(double d, double m, double s);

//Converts a decimal degree value to DMS
string Deg_to_DMS(double deg);

//Computes the standardization error
double StaErr(double s, double l, double lnom);

//Computes the thermal expansion
double ThermExp(double a, double s, double t, double to);

//Computes the tension correction
double TensCorr(double S, double P, double Po, double a, double E);

//Computes the sag correction
double SagCorr(double w, double s, double p);


//// 6 CARDS ////

vector<string> DeckOfCards();


//// 7 LINEAR ALGEBRA ////

//Simple operation with two matrices
MatrixXd MatOp(MatrixXd m1, MatrixXd m2, int val);


