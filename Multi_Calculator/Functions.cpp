#include "Functions.h"

///// GENERAL /////

double Factorial(double k) {

	double sum = 1.0;

	if (k == 0) {

		sum = 1.0;

	}

	else {

		for (int i = 1; i <= k; i++) {

			sum = i * sum;

		}

	}

	return sum;

}


double SumOfSeries(double s, double e) {

	double sum = 0;

	for (double i = s; i <= e; i++) {

		sum += i;

	}

	return sum;

}


///// PROBABILITY /////

double nPr(double n, double r) {

	double P;

	P = Factorial(n) / Factorial(n - r);

	return P;

}


double nCr(double n, double r) {

	double C;

	C = Factorial(n) / (Factorial(n - r) * Factorial(r));

	return C;

}


///// SURVERY CALCULATIONS /////

double LinPrec(double err, double dist, double lp, int o) {

	//Finding error
	if (o == 1) {

		return (dist / lp);

	}

	//Finding linear precision
	if (o == 2) {

		return (dist / err);

	}

}


double DMS_to_Deg(double d, double m, double s) {

	return (d + (m / 60) + (s / 3600));

}


string Deg_to_DMS(double deg) {

	double d, m, s;

	d = floor(deg);
	m = (deg - d) * 60;
	s = (m - floor(m)) * 60;

	return to_string(d) + "° " + to_string(floor(m)) + "' " + to_string(s) + "'' ";

}


double StaErr(double s, double l, double lnom) {

	return ((s * (l - lnom)) / lnom);

}


double ThermExp(double a, double s, double t, double to) {

	return (a * s * (t - to));

}


double TensCorr(double S, double P, double Po, double a, double E) {

	return ((S * (P - Po)) / (a * E));

}


double SagCorr(double w, double s, double p) {

	return (-(pow(w, 2) * pow(s, 3)) / 24 * pow(p, 2));

}



///// 6 CARDS /////

vector<string> DeckOfCards() {

	vector<string> deck(52);

	//Clubs
	deck[0] = "Ace of Clubs";
	deck[10] = "Jack of Clubs";
	deck[11] = "Queen of Clubs";
	deck[12] = "King of Clubs";
	for (int i = 2; i < 11; i++) {

		deck[i-1] = to_string(i) + " of Clubs";

	}

	//Hearts
	deck[13] = "Ace of Heart";
	deck[23] = "Jack of Hearts";
	deck[24] = "Queen of Hearts";
	deck[25] = "King of Hearts";
	for (int i = 2; i < 11; i++) {

		deck[i + 13 - 1] = to_string(i) + " of Hearts";

	}

	//Spades
	deck[26] = "Ace of Spades";
	deck[36] = "Jack of Spades";
	deck[37] = "Queen of Spades";
	deck[38] = "King of Spades";
	for (int i = 2; i < 11; i++) {

		deck[i + 26 - 1] = to_string(i) + " of Spades";

	}

	//Diamonds
	deck[39] = "Ace of Diamonds";
	deck[49] = "Jack of Diamonds";
	deck[50] = "Queen of Diamonds";
	deck[51] = "King of Diamonds";
	for (int i = 2; i < 11; i++) {

		deck[i + 39 - 1] =  to_string(i) + " of Diamonds";

	}

	return deck;

}



//// 7 LINEAR ALGEBRA ////

MatrixXd MatOp(MatrixXd m1, MatrixXd m2, int val) {

	//Looping for first Matrix
	cout << "Please enter values for the first matrix column by column" << endl;
	cout << "" << endl;
	for (int i = 0; i < m1.cols(); i++) {

		cout << "" << endl;
		cout << "Col " + to_string(i + 1) << "		";

		for (int j = 0; j < m1.rows(); j++) {

			cin >> m1(j, i);

			if (j < m1.rows() - 1) {
				cout << "		";
			}
			
		}

	}


	//Looping for second Matrix
	cout << "" << endl;
	cout << "Please enter values for the second matrix column by column" << endl;
	cout << "" << endl;
	for (int i = 0; i < m2.cols(); i++) {

		cout << " " << endl;
		cout << "Col " + to_string(i + 1) << "		";

		for (int j = 0; j < m2.rows(); j++) {

			cin >> m2(j, i);

			if (j < m2.rows() - 1) {
				cout << "		";
			}

		}

		cout << "" << endl;

	}


	//Addition
	if (val == 1) {

		return m1 + m2;

	}

	//Subtraction
	if (val == 2) {

		return m1 - m2;

	}

	//Multiplication
	if (val == 3) {

		return m1 * m2;

	}

}

