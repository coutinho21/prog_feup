#include <iostream>
#include <cmath>

using namespace std;

//! define the Fraction class.
class Fraction{
public:
    Fraction();
    Fraction(int numer, int denom);
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);
    int numerator() const;
    int denominator() const;
    int gcd(int a, int b);
    void normalise();
    void write() const;

private:
    int numer;
    int denom;
};

int Fraction::numerator() const{
    return numer;
}

int Fraction::denominator() const{
    return denom;
}

Fraction::Fraction(){
    numer = 0;
    denom = 1;
}

Fraction::Fraction(int numer, int denom){
    Fraction a;
    a.numer = numer;
    a.denom = denom;
    a.normalise();
    this->numer = a.numer;
    this->denom = a.denom;
}

//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(numer, denom);
  numer /= g;
  denom /= g;
  if (denom < 0) {
    numer = - numer;
    denom = - denom;
  }
}

// shows fraction f on the screen
void Fraction::write() const {
  cout << numerator() << '/' << denominator();
}

Fraction Fraction::sum(const Fraction& right){
    int num = right.numerator(), den = right.denominator(), temp = denom;
    Fraction f;
    numer *= den;
    denom *= den;
    num *= temp;
    den *= temp;

    numer += num;
    f = Fraction(numer,denom);
    f.normalise();
    return f;
}

Fraction Fraction::sub(const Fraction& right){
    int num = right.numerator(), den = right.denominator(), temp = denom;
    Fraction f;
    numer *= den;
    denom *= den;
    num *= temp;
    den *= temp;

    numer -= num;
    f = Fraction(numer,denom);
    f.normalise();
    return f;
}

Fraction Fraction::mul(const Fraction& right){
    int num = right.numerator(), den = right.denominator();
    Fraction f;

    f = Fraction(numer*num,denom*den);
    f.normalise();
    return f;
}

Fraction Fraction::div(const Fraction& right){
    int num = right.numerator(), den = right.denominator();
    Fraction f;

    f = Fraction(numer*den,denom*num);
    f.normalise();
    return f;
}