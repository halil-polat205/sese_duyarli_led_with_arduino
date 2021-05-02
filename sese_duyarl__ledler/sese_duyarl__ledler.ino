const int sensor_cikis_pin = A0;
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;

int seviye1=28;
int seviye2=800;
int seviye3=850;
int seviye4=900;
int seviye5=1022;

int deger;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  deger = analogRead(sensor_cikis_pin);
  Serial.println(deger);

  if(deger>seviye1)
  {
  digitalWrite(led1,HIGH);  
  }
  else
  {
  digitalWrite(led1,LOW);  
  }

  if(deger>seviye2)
  {
  digitalWrite(led2,HIGH);  
  }
  else
  {
  digitalWrite(led2,LOW);  
  }

  if(deger>seviye3)
  {
  digitalWrite(led3,HIGH);  
  }
  else
  {
  digitalWrite(led3,LOW);  
  }

  if(deger>seviye4)
  {
  digitalWrite(led4,HIGH);  
  }
  else
  {
  digitalWrite(led4,LOW);  
  }

  if(deger>seviye5)
  {
  digitalWrite(led5,HIGH);  
  }
  else
  {
  digitalWrite(led5,LOW);  
  }
}
