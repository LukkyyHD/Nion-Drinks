// Declaração dos Pinos
int boia = 3;
// Led verde
int led_verde = 7;
// Led vermelho
int led_vermelho = 6;


 
void setup()
{
  Serial.begin(9600);
  pinMode(boia, INPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
}

void loop()
{
  int estado = digitalRead(boia);
  
if(estado == 1){
    Serial.println("Caixa Cheia bomba d agua ativada");  
    digitalWrite(led_vermelho, 0);
    digitalWrite(led_verde, 1);
    
  }else{
    Serial.println("Caixa enchendo bomba d agua desativada");
    digitalWrite(led_vermelho, 1);
    digitalWrite(led_verde, 0);
    
  }
  delay(100);
}
  /*
void loop()
{
  int estado = digitalRead(boia);
  Serial.print("Leitura do sensor : ");
  Serial.println(estado);  
  switch(estado)
  {
  case 0:
    // Fica vermelho o led pois a caixa estaria cheia e a bomba seria ligada para passar a água para outro lugar.
    Serial.println("Caixa Cheia bomba d agua ativada");
    digitalWrite(led_vermelho, 0);
    digitalWrite(led_verde, 1);
    // quanto tempo a boia vai ficar ligada
    
    break;        
  case 1:
    // Fica verde o led pois a caixa estaria enchendo
    Serial.println("Caixa enchendo bomba d agua desativada");
    digitalWrite(led_vermelho, 1);
    digitalWrite(led_verde, 0);
    break;
  }
  delay(100);
}*/
