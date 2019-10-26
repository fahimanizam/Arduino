int array1 [10];
int array2 [6]={8};

void setup() {
  for(int i=0;i<=5;i++){pinMode(array2[i],OUTPUT);}
}

void loop() {

 for(int i=0;i<=5;i++){
digitalWrite(array2 [i],HIGH);
//digitalWrite(array2 [i+=1],HIGH);
delay(50);}





 for(int i=0;i<=5;i++){
digitalWrite(array2 [i],LOW);
digitalWrite(array2 [i+=1],LOW);
delay(50);}

}
