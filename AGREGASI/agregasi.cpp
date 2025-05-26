#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main(){
    ibu*varibu1 = new ibu ("dini");
    ibu* varibu2 = new ibu ("novi");
    anak* varanak1 = new anak ("tono");
    anak* varanak2 = new anak ("rini");
    anak* varanak3 = new anak ("dewi");

    varibu1->tambahAnak(varanak1);
    varibu1->tambahAnak(varanak2);
    varibu2->tambahAnak(varanak3);
    varibu2->tambahAnak(varanak1);

   

    

    return 0;
}