#include "precision.h"

#include <time.h>

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void doPrecisionExperiment() {
  double a = 1234.56789, b = 45.67834, c = 0.0004;

  // Berechnung 1:
  double result_1 = (a + b) + c;

  // Berechnung 2:
  double result_2 = a + (b + c);

  // TODO: Welche Ausgabe erwarten Sie beim Ausführen des Programms?

  cout << "Result 1: " << result_1 << endl;
  cout << "Result 2: " << result_2 << endl;

  if (result_1 == result_2) {
    cout << "Beide Ergebnisse sind identisch!" << endl;
  } else {
    cout << "Beide Ergebnisse sind NICHT identisch!" << endl;
  }

  // TODO: Starten Sie das Programm. Wie erklären Sie die Ausgabe des Programms?

  // TODO: Geben Sie den Unterschied zwischen den beiden Ergebnissen aus.

  // TODO: Korrigieren Sie den Vergleich der Ergebnisse.
}

int main() {

  doPrecisionExperiment();

  return 0;
}