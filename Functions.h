void goL90(){
turnLeft(.68 ,rotations,60);
}

//* goes Right 90 degrees
void goR90(){
turnRight(.68 ,rotations,60);
}

//* goes forward a number of rotation and speed
void goforward(int rotation,int speed){
setMotorSpeed(left, speed);
setMotorSpeed(right, speed);
int rotationsPerSecond = speed / 60;
int time = rotation / rotationsPerSecond;
sleep(time * 1000);
}

//* takes cm and turns it to rotations
int ToRotation(int num, int speed){
int number = num + 3;
int wheel_length = 6;
int wheel_cer = (wheel_length * 3.14);
int rotation = (number / wheel_cer);
return rotation;
}

void clawO(){
setMotorSpeed(claws, 60);
delay(200);
}

void clawC(){
setMotorSpeed(claws, -60);
delay(200);
}

