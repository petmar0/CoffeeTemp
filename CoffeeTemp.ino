void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A1)>205){
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
  }
  else{
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
  }
}
