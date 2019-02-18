/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
** Mihai Anton                                                    11/02/2019     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5;          // donar nom al pin 5 de l’Arduino
const int B = 6;          // donar nom al pin 6 de l’Arduino
const int C = 7;          // donar nom al pin 7 de l’Arduino
const int D = 8;          // donar nom al pin 8 de l’Arduino
const int E = 9;          // donar nom al pin 9 de l’Arduino
const int F = 10;         // donar nom al pin 10 de l’Arduino
const int G = 11;         // donar nom al pin 11 de l’Arduino
const int H = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(H, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  //0
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

  //1
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats

//2
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

  //3
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats

//4
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

  //5
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats

//6
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

  //7
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats

//8
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats

//9
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  digitalWrite(H, LOW);    // posar a 5V el pin 12
  
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************
