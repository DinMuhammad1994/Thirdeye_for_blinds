//Code by : www.Projexels.com



  const int pingTrigPin = 1; //Trigger connected to PIN 7   
  const int pingEchoPin = 0; //Echo connected yo PIN 8   
  int buz=2; //Buzzer to PIN  11  
  int vibrator = 4;  //vibrator to PIN 10
  int led=3;   // LEd to pin 2
  void setup() {   
 // Serial.begin(9600);   
  pinMode(buz, OUTPUT);   
  pinMode(vibrator, OUTPUT);
  pinMode(led, OUTPUT);
  
  
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  digitalWrite(vibrator, HIGH);
  delay(500);
  digitalWrite(buz, LOW);
  digitalWrite(vibrator, LOW);
  delay(1000);
  digitalWrite(buz, HIGH);
  digitalWrite(vibrator, HIGH);
  delay(500); 
  digitalWrite(buz, LOW);
  digitalWrite(vibrator, LOW);
  
  
  }   
  void loop()   
  {   
  
  digitalWrite(led, HIGH);
 digitalWrite(vibrator, LOW);
  long duration, cm;   
  pinMode(pingTrigPin, OUTPUT);   
  digitalWrite(pingTrigPin, LOW);   
  delayMicroseconds(2);   
  digitalWrite(pingTrigPin, HIGH);   
  delayMicroseconds(5);   
  digitalWrite(pingTrigPin, LOW);   
  pinMode(pingEchoPin, INPUT);   
  duration = pulseIn(pingEchoPin, HIGH);   
   cm = microsecondsToCentimeters(duration); 
  if(cm<=110 && cm>0)   
  {   
  int d= map(cm, 1, 100, 20, 200);   
  digitalWrite(buz, HIGH);  
  digitalWrite(vibrator, HIGH);  
  digitalWrite(led, HIGH);
  delay(100);   
  digitalWrite(buz, LOW); 
  digitalWrite(led, LOW);
//  digitalWrite(vibrator, LOW);  
  delay(d);  
  }   
//  Serial.print(cm);    
//  Serial.print("cm");   
//  Serial.println();   
  delay(100);   
  }   
  long microsecondsToCentimeters(long microseconds)   
  {   
  return microseconds / 29 / 2;   
  }   
