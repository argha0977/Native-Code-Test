/*Operations on GMP multiprecision number for BigInteger */
#include <gmpxx.h>
#include <iostream>
 
int main()
{
  mpz_class x;
  mpz_class y;
  mpz_class z;

  x="125";
  y="987654321123456790";

  //mpz_pow_ui(x.get_mpz_t(),x.get_mpz_t(),2);	//Power of a no.
  //x=sqrt(x);//Square root of a no.
  mpz_root(z.get_mpz_t(),x.get_mpz_t(),3);//Nth root of a no.
  //z=x+y;
  int r=cmp(x,y);//Compare two no.s.
 
  std::cout << "\n    " << x << "\n+\n    " << y;
  std::cout << "\n--------------------\n" << z << "\n\n";
  std::cout <<"result="<<r<<"\n";
}
