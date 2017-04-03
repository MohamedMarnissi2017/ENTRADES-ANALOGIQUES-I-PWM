/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       fade LEDS 1                           **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int LEDS[6]{3,5,6,9,10,11};//estableix array amb valor int de 7 variables
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
  analogWrite(LEDS[i],0);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],50);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],100);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],150);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],200);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],250);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],200);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],150);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],100);//escriu les sortides analogiques de l'array de variable LEDS
}
delay(t);//s'espera valor de variable t
  for(int i=0;i<7;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
{
  analogWrite(LEDS[i],50);//escriu les sortides analogiques de l'array de variable LEDS
}

delay(t);//s'espera valor de variable t
}


//************************** FUNCIONS ***************************
