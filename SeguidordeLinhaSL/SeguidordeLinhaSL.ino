
int pinsensor1 = 35, pinsensor2 = 32, pinsensor3 = 25, pinsensor4 = 33;
#define EnableA1 15
#define EnableA2 4
#define EnableB1 16
#define EnableB2 5
#define ControlA 2
#define ControlB 17

bool Sensor1 = 0, Sensor2 = 0, Sensor3 = 0, Sensor4 = 0;

int velocidade = 150;
int velocidadedecurva = 80;

void setup() {
  pinMode(EnableA1, OUTPUT);
  pinMode(EnableA2, OUTPUT);
  pinMode(EnableB1, OUTPUT);
  pinMode(EnableB2, OUTPUT);
  pinMode(ControlA, OUTPUT);
  pinMode(ControlB, OUTPUT);

  pinMode(pinsensor1, INPUT);
  pinMode(pinsensor2, INPUT);
  pinMode(pinsensor3, INPUT);
  pinMode(pinsensor4, INPUT);
}

void loop() {
  Sensor1 = digitalRead(pinsensor1);
  Sensor2 = digitalRead(pinsensor2);
  Sensor3 = digitalRead(pinsensor3);
  Sensor4 = digitalRead(pinsensor4);
  leitura();

  if ((Sensor1 == 0) && (Sensor2 == 0) && (Sensor3 == 0) && (Sensor4 == 0)) {
    frente();
    
  }

  else if ((Sensor1 == 1) && (Sensor2 == 1) && (Sensor3 == 0) && (Sensor4 == 0)) {
    direita();
  }

  else if ((Sensor1 == 0) && (Sensor2 == 0) && (Sensor3 == 1) && (Sensor4 == 1)) {
    esquerda();
  } 

  else if ((Sensor1 == 1) && (Sensor2 == 1) && (Sensor3 == 1) && (Sensor4 == 1)){
    parado();
  }
}
