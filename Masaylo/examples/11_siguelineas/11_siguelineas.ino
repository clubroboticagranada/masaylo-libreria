#include <Masaylo.h>
Masaylo m;

//no defs


void setup() {
  m.init(6,7,8,11,12,13);
  m.infrarrojos(A0,A1);
}

void loop() {
  if ((m.nIzquierda())) {
    m.derecha(153); // RIGHT
  } else if ((m.nDerecha())) {
    m.izquierda(153); // LEFT
  } else {
    m.adelante(153); // FORWARD
  }

}
