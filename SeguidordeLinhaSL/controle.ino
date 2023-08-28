void frente() {
  analogWrite(ControlA, velocidade);
  analogWrite(ControlB, velocidade);

  digitalWrite(EnableA1, LOW);
  digitalWrite(EnableB1, !LOW);
  digitalWrite(EnableA2, LOW);
  digitalWrite(EnableB2, !LOW);
}

void parado() {

  analogWrite(ControlA, 0);
  analogWrite(ControlB, 0);

  digitalWrite(EnableA1, LOW);
  digitalWrite(EnableB1, LOW);
  digitalWrite(EnableA2, LOW);
  digitalWrite(EnableB2, LOW);
}

void direita() {
  analogWrite(ControlA, velocidade);
  analogWrite(ControlB, velocidadedecurva);
}

void esquerda() {
  analogWrite(ControlA, velocidade);
  analogWrite(ControlB, velocidadedecurva);

}

void leitura(){
     Serial.print("Sensor1: ");
    Serial.print(Sensor1);
    Serial.print("Sensor2: ");
    Serial.print(Sensor2);
    Serial.print("Sensor3: ");
    Serial.print(Sensor3);
    Serial.println("Sensor4: ");
    Serial.print(Sensor4);
}
