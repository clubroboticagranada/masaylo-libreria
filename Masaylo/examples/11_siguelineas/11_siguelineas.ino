#include <Masaylo.h>
Masaylo m;

void setup() {
  m.init(6, 7, 8, 11, 12, 13);
  m.infrarrojos(A0, A1);
}

void loop() {
  if ((m.nIzquierda()) & (m.bDerecha())) {
    m.izquierda(140); // LEFT
  } else if ((m.bIzquierda()) & (m.nDerecha())) {
    m.derecha(140); // RIGHT
  } else if ((m.bIzquierda()) & (m.bDerecha())) {
    m.adelante(140); // FORWARD
  } else {
    m.alto();
  }

}
