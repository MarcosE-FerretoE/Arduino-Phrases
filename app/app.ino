const int BAUD_RATE = 9600;
const int DELAY_INTERVAL = 200;


String frases[] = {
  "Hola mundo",
  "Arduino es genial.",
  "Programando en Arduino",
  "Construyendo en Arduino",
  "Hola desde Arduino"
};

void setup() {
  Serial.begin(BAUD_RATE);
  if (!Serial) {
    while (true);
  } 
  randomSeed(analogRead(0)); 
}

void loop() {
  int indice = random(0, sizeof(frases) / sizeof(frases[0]));
  Serial.println(frases[indice]);
  delay(DELAY_INTERVAL);
}
