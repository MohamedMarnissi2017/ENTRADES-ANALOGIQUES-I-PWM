/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       fade LEDS 2                           **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int LEDS[6]{3,5,6,9,10,11};//estableix array amb valor int de 7 variables
int ENCEN1[6]{0,0,0,0,0,0};//estableix array amb valor int de 7 variables
int ENCEN2[6]{50,0,0,0,0,0};//estableix array amb valor int de 7 variables
int ENCEN3[6]{100,50,0,0,0,0};//estableix array amb valor int de 7 variables
int ENCEN4[6]{150,100,50,0,0,0};//estableix array amb valor int de 7 variables
int ENCEN5[6]{200,150,100,50,0,0};//estableix array amb valor int de 7 variables
int ENCEN6[6]{250,200,150,100,50,0};//estableix array amb valor int de 7 variables
int ENCEN7[6]{250,250,200,150,100,50};//estableix array amb valor int de 7 variables
int ENCEN8[6]{250,250,250,200,150,100};//estableix array amb valor int de 7 variables
int ENCEN9[6]{250,250,250,250,200,150};//estableix array amb valor int de 7 variables
int ENCEN10[6]{250,250,250,250,250,200};//estableix array amb valor int de 7 variables
int ENCEN11[6]{250,250,250,250,250,250};//estableix array amb valor int de 7 variables
int t=200;//estableix variable t amb valor int

//************************** SETUP ******************************

void setup() {                 // configura el final de salida
for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  pinMode(LEDS[i],OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
}
}

//*************************** LOOP ******************************

void loop() {
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN2[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN3[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN4[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN5[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN6[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
} 
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN7[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN8[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN9[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN10[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN11[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN10[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN9[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN8[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN7[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN6[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN5[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN4[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN3[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN2[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],ENCEN1[i]);//escriu les sortides analogiques de l'array de variable LEDS en funcio de l 'array de variables ENCEN
}

delay(t);//s'espera valor de variable t
}


//************************** FUNCIONS ***************************
