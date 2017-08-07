// initializing pins
int R=5;
int G=6;
int B=7;
int d=100;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(R, HIGH);           
  digitalWrite(G, LOW);     
  digitalWrite(B, LOW);
  delay(d);
  digitalWrite(R, LOW);           
  digitalWrite(G, HIGH);     
  digitalWrite(B, LOW);
  delay(d);
  digitalWrite(R, LOW);           
  digitalWrite(G, LOW);     
  digitalWrite(B, HIGH);
  delay(d);
}
