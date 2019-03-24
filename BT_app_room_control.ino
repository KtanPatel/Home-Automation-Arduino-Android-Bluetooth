//---------ELECTRONOOBS----------//
//--------BT app control---------//


int bl=2;
int kl=3;
int hl=4;
int dl=5;

char Received=0;
int bl_state =0;
int kl_state = 0;
int hl_state = 0;
int dl_state = 0;


void setup(){
  
  Serial.begin(9600);
  pinMode(bl,OUTPUT);
  pinMode(kl,OUTPUT);
  pinMode(hl,OUTPUT);
  pinMode(dl,OUTPUT);
  
}

void loop(){
 
 if(Serial.available()>0)
 { 
    Received = Serial.read();
    
 }
////////////////bl/////////////////////
if (bl_state == 0 && Received == '1')
  {
    digitalWrite(bl,HIGH);
    bl_state=1;
    Received=0;  
  }
if (bl_state ==1 && Received == '1')
  {
    digitalWrite(bl,LOW);
    bl_state=0;
    Received=0;
  }


////////////////kl/////////////////////
if (kl_state == 0 && Received == '2')
  {
    digitalWrite(kl,HIGH);
    kl_state=1;
    Received=0;  
  }
if (kl_state ==1 && Received == '2')
  {
    digitalWrite(kl,LOW);
    kl_state=0;
    Received=0;
  }
///////////////////////////////////////////




////////////////hl/////////////////////
if (hl_state == 0 && Received == '3')
  {
    digitalWrite(hl,HIGH);
    hl_state=1;
    Received=0;  
  }
if (hl_state ==1 && Received == '3')
  {
    digitalWrite(hl,LOW);
    hl_state=0;
    Received=0;
  }
///////////////////////////////////////////

if (dl_state == 0 && Received == '4')
  {
    digitalWrite(dl,HIGH);
    dl_state=1;
    Received=0;  
  }
if (dl_state ==1 && Received == '4')
  {
    digitalWrite(dl,LOW);
    dl_state=0;
    Received=0;
  }


  


 
 
}
