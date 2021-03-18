//Michael Moraes Sanino //estuartyy@gmail.com //12/05/2018
//Comando de voz com App Inventor 

int LeituraBluetooth; //Variável que irá receber o comando do Android
int lampada = 8; //variavel da lampada
int ventilador = 11; //variavel do ventilador
 
void setup(){
 pinMode(lampada,OUTPUT); //Definindo o pino 8 como saída
 pinMode(ventilador,OUTPUT); //Definindo o pino 12 como saída
 Serial.begin(9600); //Inicia comunicação serial
}
 
void loop(){
  if(Serial.available()>0){
    LeituraBluetooth=Serial.read();
    
  //função lampada
    if(LeituraBluetooth == 'a'){
    digitalWrite(lampada, LOW);    
    }else{
      if(LeituraBluetooth == 'b'){
      digitalWrite(lampada, HIGH);          
    }
    }
  
  //função ventilador
    if(LeituraBluetooth == 'c'){
        digitalWrite(ventilador, LOW);    
    }else{
    if(LeituraBluetooth == 'd'){
    digitalWrite(ventilador, HIGH);   
    }
    }
    
  //função ligar e desliga tudo
    if(LeituraBluetooth == 'e'){                             
    digitalWrite(lampada, LOW); 
    digitalWrite(ventilador, LOW); 
    }else{
    if(LeituraBluetooth == 'f'){                              
    digitalWrite(lampada, HIGH);       
        digitalWrite(ventilador, HIGH);  
    }   
    }   
  
    //funções para acionamento desliga e liga no botao 
  if(LeituraBluetooth == 'g'){
    digitalWrite(lampada, LOW); 
  }else{
        if(LeituraBluetooth == 'h'){
        digitalWrite(lampada, HIGH);
        }   
    }  
  
    if(LeituraBluetooth == 'i'){
        digitalWrite(ventilador, LOW); 
    }else{
        if(LeituraBluetooth == 'j'){
    digitalWrite(ventilador, HIGH);  
        }   
     }  
  }  
}
