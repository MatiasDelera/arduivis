void setup(){
  Serial.begin(9600);
}

void loop(){
  int input1, input2, input3, input4;
  input1 = Serial.parseInt();
  input2 = Serial.parseInt();
  input3 = Serial.parseInt(); 
  input4 = Serial.parseInt();  
  
  Serial.print(input1);
  Serial.print(" ");
  Serial.print(input2);
  Serial.print(" ");
  Serial.print(input3);
  Serial.print(" ");
  Serial.println(input4);
}
