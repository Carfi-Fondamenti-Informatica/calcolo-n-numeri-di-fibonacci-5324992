#include <iostream>
using namespace std;

int main() {
   int n=0,a=1,b=1,somma=a+b;
 
   cout<<a<<endl<<b<<endl;
   for (i=1;i<=n;i++) {
      somma=a+b;
      cout<<somma<<endl;
      a=b;
      b=somma;
   }
   return 0;
}
