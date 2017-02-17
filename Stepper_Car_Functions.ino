//Step Funtions


  //Left stepper
  
  void Step_LA(){
    
    digitalWrite(pin1, HIGH);//Right coil 1 turned on 
    digitalWrite(pin2, LOW); 
    digitalWrite(pin3, LOW); 
    digitalWrite(pin4, LOW); 
    
  }
  
  
  void Step_LB(){
    
    digitalWrite(pin1, LOW); 
    digitalWrite(pin2, HIGH);//Right coil 2 turned on
    digitalWrite(pin3, LOW); 
    digitalWrite(pin4, LOW); 
    
  }
  
  
  void Step_LC(){
    
    digitalWrite(pin1, LOW); 
    digitalWrite(pin2, LOW); 
    digitalWrite(pin3, HIGH); //Right coil 3 turned on
    digitalWrite(pin4, LOW); 
    
  }
  
  
  void Step_LD(){
    
    digitalWrite(pin1, LOW); 
    digitalWrite(pin2, LOW); 
    digitalWrite(pin3, LOW); 
    digitalWrite(pin4, HIGH); //Right coil 4 turned on
    
  }
  
  
  void step_LOFF(){
    
    digitalWrite(pin1, LOW); //All left coils off
    digitalWrite(pin2, LOW); 
    digitalWrite(pin3, LOW); 
    digitalWrite(pin4, LOW); 
    
  }


  //Right Stepper
  
  void Step_RA(){
    
    digitalWrite(pin5, HIGH);//Right coil 1 turned on
    digitalWrite(pin6, LOW); 
    digitalWrite(pin7, LOW); 
    digitalWrite(pin8, LOW); 
    
  }
  
  
  void Step_RB(){
    
    digitalWrite(pin5, LOW); 
    digitalWrite(pin6, HIGH);//Right coil 2 turned on
    digitalWrite(pin7, LOW); 
    digitalWrite(pin8, LOW); 
    
  }
  
  
  void Step_RC(){
    
    digitalWrite(pin5, LOW); 
    digitalWrite(pin6, LOW); 
    digitalWrite(pin7, HIGH); //Right coil 3 turned on
    digitalWrite(pin8, LOW); 
    
  }
  
  
  void Step_RD(){
    
    digitalWrite(pin5, LOW); 
    digitalWrite(pin6, LOW); 
    digitalWrite(pin7, LOW); 
    digitalWrite(pin8, HIGH); //Right coil 4 turned on
    
  }
  
  
  void step_ROFF(){
  
    digitalWrite(pin5, LOW); //All right coils off
    digitalWrite(pin6, LOW); 
    digitalWrite(pin7, LOW); 
    digitalWrite(pin8, LOW); 
    
  }


//Movement Funtions

  void forward(){//Both steppers forwards
    
    Step_LA();
    delay(delaytime);
    
    Step_RA();
    delay(delaytime);
    
    Step_LB();
    delay(delaytime);
    
    Step_RB();
    delay(delaytime);
    
    Step_LC();
    delay(delaytime);
    
    Step_RC();
    delay(delaytime);
    
    Step_LD();
    delay(delaytime);
    
    Step_RD();
    delay(delaytime);
    
  }
  
  
  void backward(){//Both steppers backwards
    
    Step_LD();
    delay(delaytime);
    
    Step_RD();
    delay(delaytime);
    
    Step_LC();
    delay(delaytime);
    
    Step_RC();
    delay(delaytime);
    
    Step_LB();
    delay(delaytime);
    
    Step_RB();
    delay(delaytime);
    
    Step_LA();
    delay(delaytime);
    
    Step_RA();
    delay(delaytime);
    
  }
  
  
  void left(){//Left stepper backwards, right stepper forwards
    
    Step_LD();
    delay(delaytime);
    
    Step_RA();
    delay(delaytime);
    
    Step_LC();
    delay(delaytime);
    
    Step_RB();
    delay(delaytime);
    
    Step_LB();
    delay(delaytime);
    
    Step_RC();
    delay(delaytime);
    
    Step_LA();
    delay(delaytime);
    
    Step_RD();
    delay(delaytime);
    
  }
  
  
  void right(){//Right stepper backwards, left stepper forwards
    
    Step_LA();
    delay(delaytime);
    
    Step_RD();
    delay(delaytime);
    
    Step_LB();
    delay(delaytime);
    
    Step_RC();
    delay(delaytime);
    
    Step_LC();
    delay(delaytime);
    
    Step_RB();
    delay(delaytime);
    
    Step_LD();
    delay(delaytime);
    
    Step_RA();
    delay(delaytime); 
    
  }

  
  void off(){//Both steppers off
    
    step_LOFF;
    delay(delaytime);
    
    step_ROFF;
    delay(delaytime);
    
  }

