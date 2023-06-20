int ls;
int cs;
int rs;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    ls = digitalRead(7);
    cs = digitalRead(8);
    rs = digitalRead(9);

    if(ls == 1){
      Serial.print("1 ACTIVATED");
      delay(1000);
      }

    if(cs == 1){
      Serial.print("2 ACTIVATED");
      delay(1000);
      }

    if(rs == 1){
      Serial.print("3 ACTIVATED");
      delay(1000);
      }
}
