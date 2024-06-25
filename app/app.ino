// Array de frases aleatorias
String frases[] = {
  "Hola mundo",
  "Arduino es genial.",
  "Programando en Arduino",
  "Construyendo en Arduino",
  "Hola desde Arduino"
};

void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0)); 
}

void loop() {
  int indice = random(0, sizeof(frases) / sizeof(frases[0]));
  Serial.println(frases[indice]);
  delay(2000);
}
