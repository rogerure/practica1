/*******************************************************************
**                                                                **
**                      LED parpadeja                             **
**                                                                **
*******************************************************************/

//*********  Includes  ********************************************


//********  Variables  ********************************************


//********  Setup  ************************************************
void setup() {
pinMode (13, OUTPUT); //Diu que el pin 13 es una sortida
}



//*******  Loop  **************************************************
void loop(){
  digitalWrite (13,HIGH);  // S'encés el LED de la sortida 13
  delay(1000);  // Està 1 segon encés
  digitalWrite (13,LOW); // S'apaga el LED
  delay (1000); // Està 1 segon apagat

}
