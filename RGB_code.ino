void setup() {
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
}

int Leds[3]={0,682,340};
int Up[3] ={1,1,0};

void loop() {
for(int i=0;i<3;i++){
  if(Leds[i]==1024){
    Up[i]=0;
  }
  else if(Leds[i]==0){
    Up[i]=1;
  }
  else if(Up[i]==1){
    Leds[i]++;
  }
  else{
    Leds[i]--;
  }
}
}

