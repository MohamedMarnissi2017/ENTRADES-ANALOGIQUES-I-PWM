/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   altaveu amb vumetre                       **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 23/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************

int LEDS[8] = {2,3,4, 5, 6, 7, 8,9}; // estableix array amb valor int de 7 variables
int N0[8] = {0,0,0, 0, 0, 0, 0,0};// estableix array amb valor int de 7 variables 
int N1[8] = {1,0,0, 0, 0, 0, 0,0};// estableix array amb valor int de 7 variables
int N2[8] = {1,1,0, 0, 0, 0, 0,0};// estableix array amb valor int de 7 variables
int N3[8] = {1,1,1, 0, 0, 0, 0,0};// estableix array amb valor int de 7 variables
int N4[8] = {1,1,1, 1, 0, 0, 0,0};// estableix array amb valor int de 7 variables
int N5[8] = {1,1,1, 1, 1, 0, 0,0};// estableix array amb valor int de 7 variables
int N6[8] = {1,1,1, 1, 1, 1, 0,0};// estableix array amb valor int de 7 variables
int N7[8] = {1,1,1, 1, 1, 1, 1,0};// estableix array amb valor int de 7 variables
int N8[8] = {1,1,1, 1, 1, 1, 1,1};// estableix array amb valor int de 7 variables
int t= 1;
//************************** SETUP ******************************

void setup() {                //Inicia el bloc

  Serial.begin(9600);
  for ( int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    pinMode(LEDS[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
  
  }

}                             //Finalitza el bloc

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
 // 

 if(analogRead(A0)==0)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N0[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>0&&analogRead(A0)<3)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N1[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>3&&analogRead(A0)<6)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N2[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>6&&analogRead(A0)<9)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N3[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>9&&analogRead(A0)<12)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N4[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>12&&analogRead(A0)<15)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N5[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
 if(analogRead(A0)>15&&analogRead(A0)<18)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N6[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
  if(analogRead(A0)>18&&analogRead(A0)<21)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N7[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }
  if(analogRead(A0)>21)
 {
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N8[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
    delay(t);
  }
 }

}                          //Finalitza el bloc

//************************** FUNCIONS ***************************
