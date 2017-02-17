//Definitions

  //Left stepper
  
    #define pin1  5
    #define pin2  4
    #define pin3  3
    #define pin4  2

  
  //Right stepper
  
    #define pin5 8
    #define pin6 9
    #define pin7 10
    #define pin8 11


  //Timing
  
    #define delaytime 1   //Delay time sets speed (min 1)
                   

void setup() {

 //Left stepper
 
   pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT); 
   pinMode(pin3, OUTPUT); 
   pinMode(pin4, OUTPUT);
    

  //Right stepper
  
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT); 
    pinMode(pin7, OUTPUT); 
    pinMode(pin8, OUTPUT);
  
}


void loop(){

  forward();

}
