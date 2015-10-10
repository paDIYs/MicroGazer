void passoIn(int time){

  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, HIGH);
  digitalWrite(STP_B, LOW);
  delay(time);
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, HIGH);
  digitalWrite(STP_A, LOW);
  digitalWrite(STP_B, HIGH);
  delay(time);
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, HIGH);
  digitalWrite(STP_B, LOW);
  delay(time);
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, LOW);
  digitalWrite(STP_B, HIGH);
  delay(time);
}

void passoOut(int time){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, LOW);
  digitalWrite(STP_B, HIGH);
  delay(time);

  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, HIGH);
  digitalWrite(STP_B, LOW);
  delay(time);

  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, HIGH);
  digitalWrite(STP_A, LOW);
  digitalWrite(STP_B, HIGH);
  delay(time);

  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, HIGH);
  digitalWrite(STP_B, LOW);
  delay(time);
}

void passoOff(int time){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
  digitalWrite(STP_A, LOW);
  digitalWrite(STP_B, LOW);
  delay(time);
}
