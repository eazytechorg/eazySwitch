char BluetoothData;
int Power = 0;
int Time = 0;
int smokeA0 = A0;
int sensorThres = 200;
String S;
String q;
String w;
String e;
String p;
void setup(){
  Serial.begin(9600);

  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(smokeA0, INPUT);

  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
}

void loop(){


int analogSensor = analogRead(smokeA0);

  //Serial.print("Pin A0: ");
  //Serial.println("*S");
  //Serial.println(analogSensor);
 S=analogSensor;
 q="*";
 w="S";
 p=q+w+S+q;

  Serial.println(p);

  
if (analogSensor>=250){
  break;
  println("")
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  }
  
  
  
    if(BluetoothData=='P'){
      Power=1;
      digitalWrite(13,1);
    }
    if(BluetoothData=='p'){
      Power=0;
      digitalWrite(13,0);
    }
    if(Power==0){
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);
    digitalWrite(12,1);
    }

    if(BluetoothData=='A'&&Power==1){
      digitalWrite(9,0);
    }
    if(BluetoothData=='a'){
      digitalWrite(9,1);
    }

     if(BluetoothData=='B'&&Power==1){
      digitalWrite(10,0);
    }
    if(BluetoothData=='b'){
      digitalWrite(10,1);
    }

     if(BluetoothData=='C'&&Power==1){
      digitalWrite(11,0);
    }
    if(BluetoothData=='c'){
      digitalWrite(11,1);
    }

     if(BluetoothData=='D'&&Power==1){
      digitalWrite(12,0);
    }
    if(BluetoothData=='d'){
      digitalWrite(12,1);
    }

     
  }
}

  
