/*
Verde (5s)
Amarelo (3s)
Vermelho (5s)


*/

//Declaração das variáveis GLOBAIS
int vermelho = 3;
int amarelo = 4;
int verde = 5;
int verde2 = 6;
int vermelho2 = 7;
int botao = 2;
int tempo_intermitente = 1000;
int tempo_verm = 5000;
int tempo_verde = 5000;
int tempo_amarelo= 3000;

//void setup
void setup(){
    //Determina que os pinos 3,4,5,6 e 7 serão saídas.
    pinMode(vermelho, OUTPUT);
  	pinMode(vermelho2,OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
  	pinMode(vermelho2,OUTPUT);
  	pinMode(verde2, OUTPUT);
    pinMode(botao, INPUT);
}


//{tipo do retorno} {nome da função} (parâmetros)
//void loop
void loop(){

  //função que faz o botão funcionar
  bool estadoBotao = false;
    estadoBotao = digitalRead(botao);
  
  //liga verde por 5s e depois desliga
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho2, HIGH);
  delay(tempo_verde);
  digitalWrite(verde, LOW);
  
  //liga amarelo por 3 egundos e depois desliga
  digitalWrite(amarelo, HIGH);
  delay(tempo_amarelo);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho2, LOW);

 digitalWrite(vermelho, HIGH);
  digitalWrite(verde2, HIGH);
  delay(tempo_verm);
  digitalWrite(verde2,LOW);
  
  digitalWrite(vermelho2, HIGH);
  delay(tempo_intermitente);
  digitalWrite(vermelho2, LOW);
  delay(tempo_intermitente);
  digitalWrite(vermelho2, HIGH);
  delay(tempo_intermitente);
  digitalWrite(vermelho2, LOW);
  delay(tempo_intermitente);
  digitalWrite(vermelho2, HIGH);
  delay(tempo_intermitente);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho, LOW);
  
   
  //se o botão for pressionado espere 2 segundos e ative o verde
  if(estadoBotao == true){
     delay(2000);
    digitalWrite(verde2, 1);
   }
  
 /*
   if (verde == HIGH) {
    digitalWrite(vermelho2,1);
  }
  else{
    digitalWrite(verde2,HIGH);
    }*/
    
}