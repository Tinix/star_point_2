#include "complejo.h"
#include <stdio.h>

struct scompl{
    real rl,
         img;
};

int main (void){
    compl x,
          y,
          a,
          b,
          c,
          res1,
          res2,
          res3,
          res4;
    
    a = compl_create (2.0, 3.0);
    b = compl_create (8.0, 1.0);
    c = compl_create (5.0, 7.0);

    printf ("\tSea a = 2 + i*3;\n");
    printf ("\t    b = 8 + i;\n");
    printf ("\t    c = 5 + i*7;\n\n");

    x = compl_leer ();
    printf ("\tEl número complejo x ingresado es:\n");
    compl_print (x);
    printf ("\n");
    
    y = compl_leer ();
    printf ("\tEl número complejo y ingresado es:\n");
    compl_print (y);
    printf ("\n");
   
    res1 = compl_prod (a, x);
    res2 = compl_prod (b, y);
    res3 = compl_resta (res1, res2);
    res4 = compl_suma (res3, c);

    printf ("\t	El resultado de a * x - b * y + c es:\n");
    compl_print (res4);
  
    return 0;
}
