/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                    sensor d'aparcament                      **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 14/05/2017 **
****************************************************************/
//************************ INCLUDE ******************************

#include "Ultrasonic.h"     //Llibreria del sensor ultrasonic
Ultrasonic ultrasonic(6,7); //Trigger, Echo

// Señal acustica
#include "pitches.h"        //Llibreria amb les notas musicales

//*********************** VARIABLES *****************************

int sonido = NOTE_E5;       //declarem la nota que volem fer sonar
int sonar;                  //Declaramos la variable sonar


//************************** SETUP ******************************

void setup() {                 

}

//*************************** LOOP ******************************

void loop()
{
   
   sonar = ultrasonic.Ranging(CM); // Llegim la distància del sonar
                                   
                                   // La funció ultrasonic.ranging (cm) ve declarada a la llibreria del sensor ultrasoni
                                   // Calcula la distància a la qual rebota un senyal enviat basant-se en el
                                   // temps que tarda a recórrer aquesta distància, retornant-la distància
                                   // en centímetres, a punt per utilitzar en casos de mesurament per ultrasons.
                                    
   while (sonar < 60)             //mentres la distaci sigui menor a 60 cm
   {   
       noTone(8);                  //mantenim so apagat
       
       delay(sonar*10);            //Delay depenent del valor del sonar. Si la distància es redueix
                                   // el delay és menor i el senyal acústica sonés amb més freqüència.
                                   // Si la distància augmenta, el delay augmenta, disminuint la freqüència
                                   // amb la qual sonen els xiulets.
       
       tone(8, sonido);            //Señal d'avis 
       
       delay(100);                 //Delay per mantenir la senyal acustica 0,1 segons minim
       
       noTone(8);                  //parem el so
    
       while (sonar < 10)          //Si la distancia del sonar es menor de 10 cm
       {
         tone(8, sonido);                //sona sense interrupcions
         sonar = ultrasonic.Ranging(CM); //Distancia del sonar  
       }  
       
       sonar = ultrasonic.Ranging(CM); //Llegim la distanci del sonar per tornar a començar
   }
  
}

//************************** FUNCIONS ***************************
