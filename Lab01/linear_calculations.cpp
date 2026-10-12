/*************************************
* Автор:   Хребтов Андрей            *
* Задание: Линейные алгоритмы        *
* Вариант: 13                        *
*                                    *
*                                    *
*                                    *
*************************************/

#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
  //sides of the lower base (cm)
  double a1 = 6.37;
  double b1 = 7.75;
  double c1 = 10.1;

  //sides of the upper base (cm)
  double a2 = 4.63;
  double b2 = 6.92;
  double c2 = 8.53;

  //height (cm)
  double h = 21.47;

  //areas of the bases (cm)
  double s1 = 0;
  double s2 = 0;

  //semiperimeter of the triangle (m)
  double p1 = 0;
  double p2 = 0;

  //height of the center of gravity (cm)
  double e = 0;

  //conversion from centimeters to meters
  a1 = a1 / 100.0;
  b1 = b1 / 100.0;
  c1 = c1 / 100.0;
  a2 = a2 / 100.0;
  b2 = b2 / 100.0;
  c2 = c2 / 100.0;
  h = h / 100.0;

  //calculation of P (m)
  p1 = (a1 + b1 + c1) / 2;
  p2 = (a2 + b2 + c2) / 2;

  //calculation of S (m)
  s1 = sqrt(p1 * ((p1 - a1) * (p1 - b1) * (p1 - c1)));
  s2 = sqrt(p2 * ((p2 - a2) * (p2 - b2) * (p2 - c2)));

  //calculation of E (m)
  e = ((h / 4) * (s1 + 2 * sqrt(s1 * s2) + 3 * s2) / (s1 + sqrt(s1 * s2) + s2));

  //answer
  cout << fixed << setprecision(6) << e;

  return 0;
}