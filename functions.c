#include <kipr/botball.h>
#include <kipr/wombat.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/functions.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/consts.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/timer.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/threads.h>
void Open_Arch(){
           cmpc(3);
    while(gmpc(3)<300){
        motor(3,10);
        if(gmpc(3)>300)
            move(0,0);
      
}
}

void Open_Claw(){
 cmpc(0);
    while(gmpc(0)<-300){
        motor(0,-20);
        if(gmpc(0)>-300)
            move(0,0);
    }
}
void reset_claw()
{
    while(digital(9)==0)//reset the claws
    {
        motor(0,20);
    }
    motor(0,0);
    msleep(300);

}




void reset_arc()
{
    while(digital(8)==0)//reset the arc
    {
        motor(3,-10);
        msleep(5);
    }
    motor(3,0);
    cmpc(3);

}

void run_2(){
    ///////////////////////////////////////// first left turn aka first green set of poms
   
    move(0,0);
    left_turn(550);
    move(0,0);
    slow_servo(arm,short_arm,1);
    move(0,0);

    move(1000,1000);
    msleep(870);
    move(0,0);

    slow_servo(claw,claw_grab-100,1);
    // move(0,0);
    slow_servo(arm,tall_arm+400,1);
    move(0,0);
    move(-1000,-1000);
    msleep(600);
    //////////////////////////////////////////// end first set green poms.. Poms should be grabbed.
    right_turn(1105);//1650   

    move(1000,1000);
    msleep(750);
    // move(-400,-400);
    // msleep(1500);
    move(0,0);
    slow_servo(arm,tall_arm+400,1);
    slow_servo(claw,claw_empty,1);
    ////////////////////////////////// Bot should be facing towards maze, and dropped off poms in box. 
    ///////////////// Start of second set of green poms.
    move(-1100,-1100);
    msleep(1000);
    square_up(1,400);
    ////////////////////////////////////// Bot should be facing the green poms ready to apporach the poms.
    left_turn(1470);//1370 before new claw
    move(-800,-800);
    msleep(650);
    move(0,0);
    slow_servo(arm,short_arm+250,1);
    move(1000,1000);
    msleep(1100);
    move(0,0);
    slow_servo(claw,claw_grab-100,1);
    ////////////////////////////////////// Poms should be grabbed. Next is to put them into same box as previous set of poms.
    move(0,0);
    slow_servo(arm,1300,1);
    move(-1200,-1200);
    msleep(800);
    right_turn(450);//500
    //////////////////////////////////////////////////////// Bot should be facing box with first set of poms were.
    move(0,0);

    slow_servo(claw,claw_empty,1);
    slow_servo(arm,tall_arm+400,1);
    move(0,0);
    move(-1000,-1000);
    msleep(1300);
    square_up(2,450);
    ////////////////////////////////// Poms should be dropped. Will be heading to first set of red poms in between the 2 green sets.
    left_turn(2150);//2150
    move(-1000,-1000);
    msleep(650);
    move(0,0);
    slow_servo(arm,short_arm,1);
    move(0,0);
    move(1000,1000);
    msleep(500);
    move(0,0);

    slow_servo(claw,claw_grab,1);

    slow_servo(arm,tall_arm+400,1);
    ////////////////////////// Red poms should be grabbed and should turn left to deposit those poms.
    move(0,0);
    left_turn(900);
    slow_servo(claw,claw_empty,1);
    ///////////////////////////// Red poms should be out of claw. Driving to reset point.

    move(0,0);
    move(-1000,-1000);
    msleep(700);
    right_turn(575);//775
    move(0,0);

    square_up(1,400);
    /////////////////////////////// Reset point reached. Going to drive to first stack of poms
    move(-1000,-1000);
    msleep(1100);
    right_turn(850);
    move(0,0);
    move(-1000,-1000);
    msleep(1000);
    move(0,0);
    slow_servo(arm,short_arm,1);
    square_up(1,400);
    ///////////////////////////////// should be facing the maze so Bot can drive to first stack of red poms.

    move(1050,1000);
    msleep(3200);
    move(0,0);
    slow_servo(arm,700,1);
    move(0,0);
    left_turn(2150);
    move(0,0);

    move(0,0);

    move(-1200,-1200);
    msleep(1500);
    /////////////////////////////////// Should be physcially squared up on pvc pipe, so I can grab top green pom.
    slow_servo(claw,claw_empty,1);
    slow_servo(arm,1100,1);
    move(0,0);
    slow_servo(arm,1200,1);
    slow_servo(claw,claw_grab,1);
    slow_servo(arm,700,1);
    right_turn(1500);
    slow_servo(claw,claw_empty,1);
    ////////////////////////////////////    Top green pom should be moved out the way to the right.
    left_turn(1200);
    move(0,0);
    move(-1000,-1000);
    msleep(1500);
    move(0,0);

    move(0,0);
    right_turn(620);

    move(0,0);
    slow_servo(arm,1110,1);//1200
    slow_servo(claw,claw_grab,1);
    slow_servo(arm,900,1);
    ///////////////////////////////////////////////////////////// Top pom in 2nd 3 stack of poms should be grabbed.
    move(0,0);
    move(-500,-500);
    msleep(150);//350,250
    move(0,0);
    left_turn(600);//500
    move(0,0);
    slow_servo(arm,900,1);
    slow_servo(claw,claw_empty,1);
    ////////////////////////////////////// Pom should be by the 3 red poms from the first stack
    move(-1000,-1000);
    msleep(1000);
    move(0,0);
    right_turn(600);
    slow_servo(arm,short_arm+150,1);
    ////////////////////////////////// Should be facing second stack of the 3 remaining green poms.
    move(1000,1000);
    msleep(800);
    move(0,0);
    slow_servo(claw,claw_grab,1);
    move(0,0);
    right_turn(1400);

    move(0,0);
    slow_servo(claw,claw_empty,1);
    ////////////////////////////////// 3 green poms should in box. Should head to middle black line which is my reset point.

    move(0,0);
    move(-1000,-1000);
    msleep(1300);
    move(0,0);
    slow_servo(arm,tall_arm,1);
    move(0,0);
    left_turn(1800);
  //  move(0,0);
   // move(-1000,-1000);
  //  msleep(1000);
  //  square_up(1,400);
  //  move(-1000,-1000);
  //  msleep(400);
  //  square_up(1,400);
    /////////////////////////// reset point reached






    //move(0,0);
    //  move(400,400);
    //  msleep(3000);
    // move(0,0);
    // slow_servo(arm,short_arm-850,1);
    // slow_servo(claw,claw_grab,1);
    // slow_servo(arm,tall_arm,1);
    // right_turn(1000);
    ///////////// // move(600,520);
    //msleep(6300);//4000
    //move(0,0);
    // move(0,0);
    // move(0,0);
    //slow_servo(arm,short_arm,1);
    // left_turn(2300);
    //  move(-600,-600);
    //  msleep(4000);







    //  slow_servo(claw,claw_grab+700,1);


}


/*int  calibrate(){

if(analog(0)<1500&&analog(1)<1500)
{     
	printf("analog not plugged in");
}
	else(analog(0)>1500&&analog(1)>1500)
    {
    printf("analog plugged in");
}
}
void b_drive(int time)
{


}


*/

void left_turn(int tic)
{   
    cmpc(right);
    cmpc(left);
    while(gmpc(right)<tic)
    {
        motor(right, 50);
        msleep(2);
    }
    motor(left, 0);
    msleep(30);
}




void right_turn(int tic)
{
    cmpc(left);
    cmpc(right);
    while(gmpc(left)<tic)
    {
        motor(left, 50);
        msleep(2);
    }
    motor(left, 0);
    msleep(30);

    cmpc(right);

}
void grab_poms_2(){




}

int itt(float inches){
    //inches to ticks
    int ticks_per_inch = 220; //placeholder
    int product = inches * ticks_per_inch;
    return product;
}
void wait_light(){
    while(digital(BL) != 1){msleep(50);}
    /*
  while(analog(light) > 200){
    msleep(50);
  }
  */
}

void line_follow(int side, int speed){
    //line to left, right sensor: 1
    //line to right, left sensor: 2
    switch(side){
        case 1: {
            while(1){
                if(buffer(rIR) < midpoint){move(speed-(speed*0.046), speed);}
                if(buffer(rIR) > midpoint){move(0,0); break;}
                if(buffer(lIR) > midpoint){move(speed, -1*(speed/4));}
                if(buffer(lIR) < midpoint){move(-1*(speed/4), speed);} 
            }
        } 
        case 2: {
            while(1){
                if(buffer(lIR) < midpoint){move(speed, speed-(speed*0.046));}
                if(buffer(lIR) > midpoint){move(0,0); break;}
                if(buffer(rIR) < midpoint){move(speed, -1*(speed/4));}
                if(buffer(rIR) > midpoint){move(-1*(speed/4), speed);} 
            }
        }
    }
}
int buffer(int sensor){
    int value = 0;
    int total = 0;
    int i = 0;
    while (i<5){
        i++;
        value = analog(sensor);
        msleep(3);
        total+=value;
    };
    total=total/5;
    return total;
};

void slow_servo(int part, int des, int speed) {
    int cur = get_servo_position(part);
    if(des < 50){des=50;};if(des > 2000){des=2000;};
    if (cur < des) {
        enable_servo(part);
        while (cur != des) {
            cur+=speed;
            set_servo_position(part, cur);
            msleep(1);
        };
        disable_servo(part);
    };
    if (cur > des){
        enable_servo(part);
        while (cur != des) {
            cur-=speed;
            set_servo_position(part, cur);
            msleep(1);
        };
        disable_servo(part);
    };
};

void move(int l_speed,int r_speed){//basic moving function thats based off mav
    //int    l_speed=65;
    // int r_speed=65;
    mav(MR,r_speed);
    mav(ML,l_speed);

};

void a_cel(){
    float L_speed;
    float curr_time = seconds(); 
    float init_time = seconds();
    while( (curr_time - init_time) < .2 ){
        curr_time = seconds();   
        L_speed = 6.75 * ((curr_time - init_time) * 1000);
        move(L_speed,L_speed); 
    };
};

void de_cel(){
    cmpc(ML);
    cmpc(MR);
    while(gmpc(ML) < 500){

        int R_speed = 2.4 * (500 - gmpc(MR) + 150);
        int L_speed = 2.4 * (500 - gmpc(ML) + 150);
        move(L_speed,R_speed);

    };
    move(0,0);
};

//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
int black_speed;
void square_up(int ending,int speed){
    int l_midpoint=2100;
    int r_midpoint=2150;
    if(speed > 0 && speed < 400){//failcheck for speed
        black_speed = speed;
    }
    else{black_speed = 1*speed;}
    if(ending == 1 || ending == 2){
        while(1){
            if(buffer(lIR)<l_midpoint && buffer(rIR)<r_midpoint){ //move to black
                move(speed,speed);
            }
            if(buffer(rIR)>r_midpoint){ //right wheel back if black
                move(speed,(speed*(-.83)));
            }
            if(buffer(lIR)>l_midpoint){//left wheel back if black
                move((speed*(-.53)),speed);
            }
            if(buffer(lIR)>l_midpoint && buffer(rIR)>r_midpoint) { //if both sensors on black, stop
                move(0,0);
                break;
            }
        }
    }

    switch(ending){
        case 1: //if ending on white:
            {
                while(1){

                    if(buffer(lIR)>l_midpoint && buffer(rIR)>r_midpoint){ //move forward if black
                        move(black_speed,black_speed);
                    }
                    if(buffer(lIR)<l_midpoint){ //left wheel back if left sensor is white
                        move(-0.33*black_speed,black_speed);
                    }
                    if(buffer(rIR)<r_midpoint){ //right wheel back if right sensor is white 

                        move(black_speed,-0.33*black_speed);
                    }
                    if(buffer(lIR)<l_midpoint && buffer(rIR)<r_midpoint){ //if white, stop
                        move(0,0);
                        break;
                    }
                }
            }
        case 2: //if ending on black:
            {
                while(1){
                    if(buffer(lIR)>l_midpoint && buffer(rIR)>r_midpoint){ //move backward if black
                        move(-1*black_speed,-1*black_speed);
                    }
                    if(buffer(lIR)<l_midpoint){ //right wheel backward if white
                        move(0,-.33*black_speed);
                    }
                    if(buffer(rIR)<r_midpoint){ //left wheel backward if white
                        move(-.33*black_speed,0);
                    }
                    if(buffer(lIR)<l_midpoint && buffer(rIR)<r_midpoint){ //if white, stop
                        move(0,0);
                        break;
                    }
                }
            }
    }
}


double bias = 0.0;

double calibrate_gyro(){//gyro calibration through finding gyro setting it to zero then setting theta as that value
    int i = 0;
    double avg = 0;
    while( i < 50){
        avg += gyro_z();
        msleep(1);
        i++;
    }
    bias = avg / 50.0;
    printf("New Bias: %f\n", bias);
    return bias;
}
void Drive(int desired,int speed){
    float add_fact = 1.920137e-16;
    float mult_fact = 0.00004470956;
    double theta = 0;
    float max_speed = 0;
    cmpc(ML);
    cmpc(MR);
    if(desired > 0 ){
        a_cel(); 
        if(desired < speed){
            speed = desired;   
        }
        while( gmpc ( ML ) < ( desired - 500 )){
            if( speed > 0 ){
                motor( MR,  (( speed - speed * (add_fact + mult_fact * theta))));
                motor( ML, (( speed + speed * (add_fact + mult_fact * theta))));
            }
            else{
                motor( MR,  (( speed + speed * (add_fact + mult_fact * theta))));
                motor( ML,  (( speed - speed * (add_fact + mult_fact * theta))));
            }
            msleep(10);
            theta += ( gyro_z() - bias) * 10;
            (speed + speed * (add_fact + mult_fact * theta)) > max_speed ? max_speed=(speed + speed * (add_fact + mult_fact * theta)) : msleep(1);
        }
        if ( desired > 500 ){
            de_cel();
            printf("%f",max_speed);
            move(0,0);
        }
        else{
            move(0,0);
        }
    }
    else if (desired < 0){
        while( gmpc ( ML ) > desired ){
            if( speed > 0 ){
                motor( MR,  (( speed - speed * (add_fact + mult_fact * theta))));
                motor( ML, (( speed + speed * (add_fact + mult_fact * theta))));
            }
            else{
                motor( MR,  (( speed + speed * (add_fact + mult_fact * theta))));
                motor( ML,  (( speed - speed * (add_fact + mult_fact * theta))));
            }
            msleep(10);
            theta += ( gyro_z() - bias) * 10;
            (speed + speed * (add_fact + mult_fact * theta)) > max_speed ? max_speed=(speed + speed * (add_fact + mult_fact * theta)) : msleep(1);
        }   
    }
}


//////////////////////////////////////////////////////////////////
void drive_with_gyro(int speed, double time){//gyro using clock time not distance(much more inaccurate)
    double startTime = seconds();
    double theta = 0;
    while(seconds() - startTime < time){
        //calibrate_gyro();
        if (theta < 1000 && theta > -1000){
            mav(MR, speed);
            mav(ML, speed);
        }
        else if (theta < 1000){
            mav(MR, speed + 100);
            mav(ML, speed - 100);
        }
        else{
            mav(MR, speed - 100);
            mav(ML, speed + 100);
        }
        msleep(10);
        theta += (gyro_z() - bias) * 10;
        //printf("%f",theta);
    };
    move(0,0);
};
//////////////////////////////////////////////////////////////////
//void turn_with_gyro(int speed, int deg, int frz){//turning using the gyro we use calibrate still to find zero then set theta to a know value instead of 0
//    //frz is if wheel freezes when turning. 1 is yes
//   double theta = 0;
//   int targetTheta; 
//    int turn;
//   if(frz == 1){turn = 0;}else{turn = -1*speed;}
//  switch(deg){
//      case -40:
//         targetTheta = target_theta_m40;
//          move(turn,speed);
//           break;
//      case -30:
//       targetTheta = target_theta_m30;
//        move(turn,speed);
//         break;
//     case -22:
////         targetTheta = target_theta_m22;
//         move(turn,speed);
//          break;
//      case 0:
//          targetTheta = target_theta_mrings;
//          move(turn,speed);
//          break;
//       case 1:
//           targetTheta = target_theta_rings;
//          move(speed,turn);
//          break;
//      case 45:
//            targetTheta = target_theta_45;
//           move(speed,turn);
//           break;
//      case 90:
//            targetTheta = target_theta_90;
//           move(speed,turn);
//           break;
//       case 180:
//          targetTheta = target_theta_180;
//           move(speed,turn);
//           break;
//      case -45:
//          targetTheta = target_theta_m45;
//          move(turn,speed);
//      break;
//  case -90:
//      targetTheta = target_theta_m90;
//      move(turn,speed);
//      break;
//   case -180:
//       targetTheta = target_theta_m180;
//       move(turn,speed);
//       break;
//    default:
//       targetTheta = 0;
//       break;
// }  
//  while(theta < targetTheta){
//    msleep(10);
//    theta += abs(gyro_z() - bias) * 10;
//      printf("Turn Gyro Z: %d\n",gyro_z());
//  }
//  move(0,0);
//  msleep(50);

//}

//////////////////////////////////////////////////////////////////
void PID_gyro_drive(int speed, double time){
    double startTime = seconds();
    double theta = 0;
    while((seconds() - startTime) < time){
        if(speed > 0){
            mav(MR, (speed - (speed * (theta/100000))));            
            mav(ML, (speed + (speed * theta/100000)));
        }


        else{
            mav(ML, (speed - (speed * theta/100000)));            
            mav(MR, (speed + (speed * (theta/100000))));
        }
        msleep(10);
        theta += (gyro_z() - bias) * 10;
    }
    move(0,0);
};
////////////////////////////////////////////////////////
void grab_poms(){


}
///////////////////////////
void grab_poms_left(){
}
//////////////////////////
void drive_with_ticks(int tic){
    int lspeed=speed;
    //   int rspeed=speed;
    speed=40;
    cmpc(left);
    cmpc(right);
    motor(left,speed);
    motor(right, speed);
    while(gmpc(left)<tic||gmpc(right)<tic)
    {
        motor(left,lspeed);
        motor(right,lspeed);
        if(gmpc(left)>gmpc(right))
        {
            lspeed=speed-2;
            rspeed=speed+2;
        }
        else if(gmpc(right)>gmpc(left))
        {
            lspeed=speed+2;
            rspeed=speed-2;
        }
        else
        {
            lspeed=speed;
            rspeed=speed;
        }
    }
}


