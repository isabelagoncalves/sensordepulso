int Sensor = 0; // Sensor conectado no pino analogico 0
int LED = 13;   //  LED indicador
int Sinal;  // Sinal analogico de entrada
int Limite = 600;  // Limite de entrada de sinal


void setup() {
  pinMode(LED,OUTPUT);         
   Serial.begin(9600);         

}

void loop() {

  Sinal = analogRead(Sensor);  // Le o valor do sinal do sensor
                                             

   Serial.println(Sinal);      // Manda o sinal para o Serial plotter


   if(Sinal > Limite){            // Se o sinal for maior que o limite LED ativo
     digitalWrite(LED,HIGH);
   } else {
     digitalWrite(LED,LOW);               
   }
   {
    delay(30);
   }
   
}
