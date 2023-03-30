#include <kipr/wombat.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/functions.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/consts.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/timer.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/threads.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/run_functs.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/clone_consts.h>
//slow_servo(int part, int des, int speed) {
int main()
{

    reset_claw();
 reset_arc();
    Open_Arch();
    motor(0,20);
    msleep(200);
    
   // reset_claw();
   // Open_Claw();
 //   move(0,0);
 // slow_servo(arm,400,1);
 //   move(0,0);
 //   slow_servo(claw,claw_empty,1);
 //   move(0,0);
  //  slow_servo(claw,1297,1);
 //   motor(3,100);
 //   msleep(1000);
   
    //wait_for_light();
// run_2();

    return 0;
	 
}
