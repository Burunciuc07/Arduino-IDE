#define RELAY_1  2
#define RELAY_2  3
#define RELAY_3  4
#define RELAY_4  5
#define RELAY_5  6
#define RELAY_6  7
#define RELAY_7  8
#define RELAY_8  9
void setup()
{
  Serial.begin(9600);
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
  pinMode(RELAY_4, OUTPUT);
  pinMode(RELAY_5, OUTPUT);
  pinMode(RELAY_6, OUTPUT);
  pinMode(RELAY_7, OUTPUT);
  pinMode(RELAY_8, OUTPUT);
}

void loop()
{
  digitalWrite(RELAY_1, HIGH);
  delay(1000);
  digitalWrite(RELAY_2, HIGH);
  delay(1000);
  digitalWrite(RELAY_3, HIGH);
  delay(1000);
  digitalWrite(RELAY_4, HIGH);
  delay(1000);
  digitalWrite(RELAY_5, HIGH);
  delay(1000);
  digitalWrite(RELAY_6, HIGH);
  delay(1000);
  digitalWrite(RELAY_7, HIGH);
  delay(1000);
  digitalWrite(RELAY_8, HIGH);
  delay(3000);




  Serial.println("Deactivate all relays");
  digitalWrite(RELAY_1, LOW);
  delay(1000);
  digitalWrite(RELAY_2, LOW);
  delay(1000);
  digitalWrite(RELAY_3, LOW);
  delay(1000);
  digitalWrite(RELAY_4, LOW);
  delay(1000);
  digitalWrite(RELAY_5, LOW);
  delay(1000);
  digitalWrite(RELAY_6, LOW);
  delay(1000);
  digitalWrite(RELAY_7, LOW);
  delay(1000);
  digitalWrite(RELAY_8, LOW);
  delay(5000);
}