#include "TFeynman.h"
#include "TFeynmanEntry.h"
#include <TFile.h>
#include <iostream>
#include "TCanvas.h"

int main() {
 TCanvas *c1 = new TCanvas();
  TFeynman *f = new TFeynman();

  // proton decay (beta minus)
  //f->AddPair("q", 50, 30, 6);
  f->AddItem("fermion", 10, 10, 30, 30, 5, 6, "d");
   

   return 0;
}

// const char* particleName, Double_t x1, Double_t y1, Double_t x2, Double_t y2, Double_t labelX, Double_t labelY, const char* label
