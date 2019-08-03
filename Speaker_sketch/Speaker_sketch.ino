int speaker_pin = 13; 
int led = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(speaker_pin, OUTPUT);
      
}

void loop() {
  // put your main code here, to run repeatedly:
  int speaker = 0;
  float sweep = 100;
  int frequency = 10;
  bool TRUE = true;
//  pinMode(speaker_pin, OUTPUT);

  while(TRUE == true)
  {
  tone(speaker_pin,frequency);
  delay(sweep);
  frequency = frequency + 10;
  tone(speaker_pin,frequency);
  if(frequency >= 5000)
  frequency = 10;

  }
}
