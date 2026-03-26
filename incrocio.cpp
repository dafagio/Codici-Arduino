int semaforoRossoSx = 13;
int semaforoRossoDx = 7;
int semaforoRossoUp = 10;
int semaforoRossoDw = 4;

int semaforoGialloSx = 12;
int semaforoGialloDx = 6;
int semaforoGialloUp = 9;
int semaforoGialloDw = 3;

int semaforoVerdeSx = 11;
int semaforoVerdeDx = 5;
int semaforoVerdeUp = 8;
int semaforoVerdeDw = 2;

void setup()
{
  pinMode(semaforoRossoSx, OUTPUT);
  pinMode(semaforoRossoDx, OUTPUT);
  pinMode(semaforoRossoUp, OUTPUT);
  pinMode(semaforoRossoDw, OUTPUT);
  pinMode(semaforoGialloSx, OUTPUT);
  pinMode(semaforoGialloDx, OUTPUT);
  pinMode(semaforoGialloUp, OUTPUT);
  pinMode(semaforoGialloDw, OUTPUT);
  pinMode(semaforoVerdeSx, OUTPUT);
  pinMode(semaforoVerdeDx, OUTPUT);
  pinMode(semaforoVerdeUp, OUTPUT);
  pinMode(semaforoVerdeDw, OUTPUT);
}

void loop(){
  digitalWrite(semaforoRossoSx, HIGH);
  digitalWrite(semaforoRossoDx, HIGH);
  digitalWrite(semaforoVerdeUp, HIGH);
  digitalWrite(semaforoVerdeDw, HIGH);
  delay(1500);
  
  digitalWrite(semaforoVerdeUp, LOW);
  digitalWrite(semaforoVerdeDw, LOW);
  digitalWrite(semaforoGialloUp, HIGH);
  digitalWrite(semaforoGialloDw, HIGH);
  delay(1500);
  
  digitalWrite(semaforoRossoSx, LOW);
  digitalWrite(semaforoRossoDx, LOW);
  digitalWrite(semaforoVerdeSx, HIGH);
  digitalWrite(semaforoVerdeDx, HIGH);
  digitalWrite(semaforoGialloUp, LOW);
  digitalWrite(semaforoGialloDw, LOW);
  digitalWrite(semaforoRossoUp, HIGH);
  digitalWrite(semaforoRossoDw, HIGH);
  delay(1500);
  
  digitalWrite(semaforoVerdeSx, LOW);
  digitalWrite(semaforoVerdeDx, LOW);
  digitalWrite(semaforoGialloSx, HIGH);
  digitalWrite(semaforoGialloDx, HIGH);
  digitalWrite(semaforoRossoSx, LOW);
  digitalWrite(semaforoRossoDx, LOW);
  delay(1500);
  digitalWrite(semaforoGialloSx, LOW);
  digitalWrite(semaforoGialloDx, LOW);
  digitalWrite(semaforoRossoUp, LOW);
  digitalWrite(semaforoRossoDw, LOW);
  
  
}
