#include<stdio.h>
#include<stdbool.h>
 int main(){
    int n = 13;
    int i = 2;
    bool Primo;
    Primo = true;
    while (i != n /2) {
      if (n % i == 0)
        Primo = false;
      i++;
    }
    if (n == 1 || n == 2 || n == 3 || n == 5 || n == 7 || Primo == true)
      return 1;
    else
      return 0;
}
