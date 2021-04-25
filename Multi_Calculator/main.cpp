#include "Functions.h"

int main() {

	int ending = 0;

	while (ending == 0)
	{
		////////// WELCOME MENU //////////

		//Displaying the welcome message
		cout << "" << endl;
		cout << "What do you want to know today?" << endl;
		cout << "" << endl;

		//Displaying the menu options
		cout << "1 Exit\n"
				"2 General\n"
				"3 Probability...\n"
				"4 Survery Calculations...\n"
				"5 Cards...\n"
				"6 Linear Algebra...\n"
				" " << endl;

		cout << "Option: ";

		//This value decides which option the user picks
		int val;
		cin >> val;

		//Clears the screen after picking a main menu option
		system("CLS");


		////////// OPTIONS //////////

		//1 Exit
		if (val == 1) {

			cout << "See you next time! :)" << endl;

			ending = 1;

		}



		//2... General
		if (val == 2) {

			cout << "" << endl;
			cout << "1 Factorial\n"
					"2 Sum of a series\n"
					" " << endl;

			int GenVal;
			cin >> GenVal;
			cout << "" << endl;


			//2-1 Factorial
			if (GenVal == 1) {

				double x;
				cout << "" << endl;
				cout << "Factorial Calculator " << endl;
				cout << "" << endl;

				cout << "Enter a number: ";
				cin >> x;
				cout << "" << endl;

				double f = Factorial(x);

				cout << x << "! is " << f << endl;
				cout << "" << endl;

			}



			//2-2 Sum of a series
			if (GenVal == 2) {

				int s, e, x;
				cout << "" << endl;
				cout << "Calculating the sum of a series" << endl;
				cout << " " << endl;


				cout << "Enter an intial value: ";
				cin >> s;
				cout << " " << endl;

				cout << "Enter a final value: ";
				cin >> e;
				cout << " " << endl;

				x = SumOfSeries(s, e);

				cout << "The sum of the series from " << s << " to " << e << " is: " << x << endl;
				cout << "" << endl;

			}

		}




		//3... Probability
		if (val == 3) {

			cout << "" << endl;
			cout << "1 Permutations (nPr)\n"
					"2 Combinations(nCr)\n"
					" " << endl;

			int ProbVal;
			cin >> ProbVal;
			cout << "" << endl;

			//3-1 Permuations
			if (ProbVal == 1) {

				double P, n, r;
				cout << "Enter an n value: " << endl;
				cin >> n;
				cout << "" << endl;

				cout << "Enter an r value: " << endl;
				cin >> r;
				cout << "" << endl;

				P = nPr(n, r);

				cout << n << " pick " << r << " is: " << P << endl;
				cout << "" << endl;

			}

			//3-2 Combinations
			if (ProbVal == 2) {

				double C, n, r;
				cout << "Enter an n value: " << endl;
				cin >> n;
				cout << "" << endl;

				cout << "Enter an r value: " << endl;
				cin >> r;
				cout << "" << endl;

				C = nCr(n, r);

				cout << n << " choose " << r << " is: " << C << endl;
				cout << "" << endl;

			}

		}



		//4... Survery Calculations
		if (val == 4) {

			cout << "" << endl;
			cout << "1 Linear Precision\n"
					"2 DMS to Degrees\n"
					"3 Degrees to DMS\n"
					"4 Standardization Error\n"
					"5 Thermal Expansion\n"
					"6 Tension Correction\n"
					"7 Sag Correction\n"
					" " << endl;

			int SurVal;
			cout << "Option: ";
			cin >> SurVal;
			cout << "" << endl;


			//4-1... Linear Precision
			if (SurVal == 1) {

				double err, dist, lp;
				int LinOp;
				cout << "Do you want to find error or linear precision? Type 1 for error or 2 for Linear Precision" << endl;
				cin >> LinOp;
				cout << "" << endl;


				//4-1-1 Calculating error
				if (LinOp == 1) {

					cout << "Enter a distance: " << endl;
					cin >> dist;
					cout << "" << endl;

					cout << "Enter a linear precision: " << endl;
					cout << "1/";
					cin >> lp;
					cout << "" << endl;

					err = LinPrec(0, dist, lp, 1);

					cout << "The error for a distance of " << dist << " and a linear precision of 1/" << lp << " is: " << err << endl;
					cout << "" << endl;

				}


				//4-1-2 Calculating linear precision
				if (LinOp == 2) {

					cout << "Enter an error: " << endl;
					cin >> err;
					cout << "" << endl;

					cout << "Enter a distance: " << endl;
					cin >> dist;
					cout << "" << endl;

					lp = LinPrec(err, dist, 0, 2);

					cout << "The linear precision for an error of " << err << " and a distance of " << dist << " is: 1/" << lp << endl;
					cout << "" << endl;


				}


			}


			//4-2 DMS to Degrees
			if (SurVal == 2) {

				double d, m, s, RD;
				cout << "Enter the degrees: ";
				cin >> d;
				cout << "" << endl;

				cout << "Enter the arc-minutes: ";
				cin >> m;
				cout << "" << endl;

				cout << "Enter the arc-seconds: ";
				cin >> s;
				cout << "" << endl;

				RD = DMS_to_Deg(d, m, s);

				cout << "The value of the angle in decimal degrees is " << RD << endl;
				cout << "" << endl;

			}


			//4-3 Decimal Degrees to DMS
			if (SurVal == 3) {

				double DecDeg;
				string DMS;

				cout << "Enter a decimal degree value" << endl;
				cin >> DecDeg;
				cout << "" << endl;

				DMS = Deg_to_DMS(DecDeg);

				cout << "The value of the angle in DMS is " << DMS << endl;
				cout << "" << endl;
				
			}


			//4-4 Standardization Error
			if (SurVal == 4) {

				double StErr, s, l, lnom;
				cout << "Enter the distance: ";
				cin >> s;
				cout << "" << endl;

				cout << "Enter the tape length: ";
				cin >> l;
				cout << "" << endl;

				cout << "Enter the nominal tape length: ";
				cin >> lnom;
				cout << "" << endl;

				StErr = StaErr(s, l, lnom);

				cout << "The standardization error is " << StErr << endl;
				cout << "" << endl;

			}


			//4-5 Thermal Expansion
			if (SurVal == 5) {

				double Ct, a, s, t, to;
				int TapeMaterial;

				cout << "What material is the tape made out of?" << endl;
				cout << "1 Steel\n"
						" " << endl;

				cout << "Material: ";
				cin >> TapeMaterial;
				cout << "" << endl;

				cout << "Enter a distance: ";
				cin >> s;
				cout << "" << endl;

				cout << "Enter a temperature: ";
				cin >> t;
				cout << "" << endl;

				cout << "Enter a standard temperature: ";
				cin >> to;
				cout << "" << endl;


				//Steel
				if (TapeMaterial == 1) {

					a = pow(10, -5);
					Ct = ThermExp(a, s, t, to);

					cout << "The thermal expansion is " << Ct << endl;
					cout << "" << endl;

				}


			}


			//4-6 Tension Correction
			if (SurVal == 6) {

				double Cp, S, P, Po, a, E;
				int Material;

				cout << "What material is the tape made out of?" << endl;
				cout << "1 Steel\n"
						" " << endl;

				cout << "Material: ";
				cin >> Material;
				cout << "" << endl;

				cout << "What is the distance?: ";
				cin >> S;
				cout << "" << endl;

				cout << "What is the tension?: ";
				cin >> P;
				cout << "" << endl;

				cout << "What is the standard tension?: ";
				cin >> Po;
				cout << "" << endl;

				cout << "What is the cross-sectional area?: ";
				cin >> a;
				cout << "" << endl;

				
				//Steel
				if (Material == 1) {

					E = 2.1 * pow(10, 6);
					Cp = TensCorr(S, P, Po, a, E);

					cout << "The tension correction is " << Cp << endl;
					cout << "" << endl;

				}


			}


			//4-7 Sag Correction
			if (SurVal == 7) {

				double Cs, w, S, P;

				cout << "What is the weight per length?: ";
				cin >> w;
				cout << "" << endl;

				cout << "What is the distance?: ";
				cin >> S;
				cout << "" << endl;

				cout << "What is the tension applied?: ";
				cin >> P;
				cout << "" << endl;

				Cs = SagCorr(w, S, P);

				cout << "The sag correction is " << Cs << endl;
				cout << "" << endl;

			}


		}



		//5... Cards

		if (val == 5) {

			cout << "" << endl;
			cout << "1 Pick a card\n"
					"2 Number of possible unique ways to arrange a deck\n"
					" " << endl;

			int MagVal;
			cout << "Option: ";
			cin >> MagVal;
			cout << "" << endl;


			//5-1 Pick a card
			if (MagVal == 1) {

				srand((unsigned)time(NULL));
				int r = rand() % 52 + 1;
				vector<string> Deck = DeckOfCards();

				cout << Deck[r];
				cout << "" << endl;

			}


			//5-2 Number of possible unique ways to arrange a deck
			if (MagVal == 2) {

				cout << Factorial(52) << endl;
				cout << "" << endl;

			}



		}



		//6... Linear Algebra

		if (val == 6) {

			cout << "" << endl;
			cout << "1 Matrix Addition\n"
					"2 Matrix Subtraction\n"
					"3 Matrix Multiplication\n"
					" " << endl;

			int LinAlgVal;
			cout << "Option: ";
			cin >> LinAlgVal;
			cout << "" << endl;


			//6-1 Matrix Addition
			if (LinAlgVal == 1) {

				int r1 = 0;
				int c1 = 1; 
				int r2 = 2; 
				int c2 = 3;

				while (r1 != r2 || c1 != c2) {

					cout << "First Matrix" << endl;
					cout << "How many rows? ";
					cin >> r1;
					cout << "How many columns? ";
					cin >> c1;
					cout << "" << endl;

					cout << "Second Matrix" << endl;
					cout << "How many rows? ";
					cin >> r2;
					cout << "How many columns? ";
					cin >> c2;
					cout << "" << endl;

					if (r1 != r2 || c1 != c2) {

						cout << "Matrices not compatible for addition!" << endl;
						cout << "Please try again" << endl;
						cout << "" << endl;

					}

				}

				//Two matrices to be added
				MatrixXd m1(r1, c1);
				MatrixXd m2(r2, c2);

				//Adding the matrices
				MatrixXd Add = MatOp(m1, m2, 1);

				cout << "The sum of these matrices is: " << endl;
				cout << Add << endl;
				cout << endl;

			}



			//6-2 Matrix Subtraction
			if (LinAlgVal == 2) {

				int r1 = 0;
				int c1 = 1;
				int r2 = 2;
				int c2 = 3;

				while (r1 != r2 || c1 != c2) {

					cout << "First Matrix" << endl;
					cout << "How many rows? ";
					cin >> r1;
					cout << "How many columns? ";
					cin >> c1;
					cout << "" << endl;

					cout << "Second Matrix" << endl;
					cout << "How many rows? ";
					cin >> r2;
					cout << "How many columns? ";
					cin >> c2;
					cout << "" << endl;

					if (r1 != r2 || c1 != c2) {

						cout << "Matrices not compatible for subtraction!" << endl;
						cout << "Please try again" << endl;
						cout << "" << endl;

					}

				}

				//Two matrices to be subtracted
				MatrixXd m1(r1, c1);
				MatrixXd m2(r2, c2);

				//Subtracting the matrices
				MatrixXd Minus = MatOp(m1, m2, 2);

				cout << "Subtracting the second matrix from the first: " << endl;
				cout << Minus << endl;
				cout << "" << endl;


			}



			//6-3 Matrix Multiplication
			if (LinAlgVal == 3) {

				int r1 = 0;
				int c1 = 1;
				int r2 = 2;
				int c2 = 3;

				while (c1 != r2) {

					cout << "First Matrix" << endl;
					cout << "How many rows? ";
					cin >> r1;
					cout << "How many columns? ";
					cin >> c1;
					cout << "" << endl;

					cout << "Second Matrix" << endl;
					cout << "How many rows? ";
					cin >> r2;
					cout << "How many columns? ";
					cin >> c2;
					cout << "" << endl;

					if (c1 != r2) {

						cout << "Matrices not compatible for Multiplication!" << endl;
						cout << "Please try again" << endl;
						cout << "" << endl;

					}

				}

				//Two matrices to be multiplied
				MatrixXd m1(r1, c1);
				MatrixXd m2(r2, c2);

				//Multiplying the matrices
				MatrixXd Mult = MatOp(m1, m2, 3);

				cout << "Product of the two matrices is: " << endl;
				cout << Mult << endl;
				cout << "" << endl;


			}







		}




	}

	return 0;
}