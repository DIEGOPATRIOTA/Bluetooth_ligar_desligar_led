/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

//variáveis
int led = 13;
int estado = LOW;
char leitura;

//configuração inicial 
void setup(){
	Serial.begin(9600);
	pinMode(led, OUTPUT);
}

//loop para leitura
void loop(){
	if(Serial.available()){
		leitura = Serial.read();
		if(leitura == 'a'){
			estado = !estado;
		}
	}
	digitalWrite(led, estado);
}
