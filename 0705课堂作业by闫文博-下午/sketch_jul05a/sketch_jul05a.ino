char p[100];
int pin=2;
int _dottime=300;
void mousedot()
{
  digitalWrite(pin,1);
  delay(_dottime);
  digitalWrite(pin,0);
  delay(_dottime);
}

void mousedash()
{
  digitalWrite(pin,1);
  delay(_dottime*4);
  digitalWrite(pin,0);
  delay(_dottime);
}
#define Q if(p[i]==
#define x mousedot();
#define y mousedash();
#define z delay(1000);
void setup()
{ Serial.begin(9600);
}
void loop()
{ int i=0;
  if(Serial.available() > 0){
  p[i]=Serial.read();
 
    Q 97) {x y z}
    Q 98) {y x x x z}
    Q 99) {y x y x z}
    Q 100){ y x x z}
    Q 101){x z}
    Q 102){x x y x z}
    Q 103){y y x z}
    Q 104){x x x x z}
    Q 105){x x z}
    Q 106){x y y y z}
    Q 107){y x y z}
    Q 108){x y x x z}
    Q 109){y y z}
    Q 110){y x z}
    Q 111){y y y z}
    Q 112){x y y x z}
    Q 113){y y x y z}
    Q 114){x y x z}
    Q 115){x x x z}
    Q 116){y z}
    Q 117){x x y z}
    Q 118){x x x y z}
    Q 119){x y y z}
    Q 120){y x x y z}
    Q 121){y x y y z}
    Q 122){y y x x z}
    Q 32){z}
}
}
