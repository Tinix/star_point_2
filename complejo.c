#include "complejo.h"
#include <stdio.h>

struct scompl{
    real rl, 
         img;                   
};

compl
compl_create(const real rl, const real img){
    compl res;

    res.rl = rl;
    res.img = img;
   
    return res;  
}

compl
compl_suma(const compl a, const compl b){
    compl res;

    res.rl = a.rl + b.rl;
    res.img = a.img + b.img;

    return res;
}

compl
compl_resta(const compl a, const compl b){
    compl res;

    res.rl = a.rl - b.rl;
    res.img = a.img - b.img;

    return res;
}

compl
compl_prod(const compl a, const compl b){
 
    compl res;
 
    res.rl = (a.rl * b.rl)-(a.img * b.img);
    res.img = (a.rl * b.img)+(a.img * b.rl);

    return res;
}

void
compl_print(const compl c){
    if (c.img >= 0 ){
        printf ("\t%f + i*%f\n",c.rl,c.img);
    }else{
        printf ("\t%f + i*(%f)\n",c.rl,c.img);
    }
}
  
compl
compl_leer(void){
    real r1,
         r2;
    compl res;

    printf ("Ingrese parte real:\n");
    scanf ("%f", &r1);
    printf ("Ingrese parte imaginaria:\n");
    scanf ("%f", &r2);
    res = compl_create(r1, r2);

    return res;
}
