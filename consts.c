#include <kipr/wombat.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/functions.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/consts.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/timer.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/threads.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/run_functs.h>
#include </home/root/Documents/KISS/Default User/Wombat/include/clone_consts.h>
int arm=0;///////////////// arm shifter
int tall_arm=517;
int short_arm=1800;
int claw_full_close=850;
int claw_empty=1600;//1800
int claw=2;///////// claw
int claw_grab=600;
/////////// reset_claw analog =9
/////////// reset_arc analog=8
int ML = 1;///////////// motor left, black closest screen
int MR = 2;///////////// motor right, red closest screen
int rIR = 0;////// right color sensor
int lIR = 2;/////// left color sensor


int fET = 4;
int light = 3;
int BR = 1;
int BL = 2;
int left=1;
int right=2;
//int lspeed=65;
//int rspeed=65;



//
int shifter_ver = 980;
int shifter_hor = 40;


//
int analog_white = 160;
int analog_black = 2960;
int midpoint = 2000;
int target_theta_m30 = 150000;
int target_theta_m22 = 100000;
int target_theta_m40 = 230000; //170000
int target_theta_rings = 220000;
int target_theta_mrings = 220000;
int target_theta_45 = 265200; //275900
int target_theta_90 = 538000; //563800
int target_theta_180 = 1099900; //1135000
int target_theta_m45 = 266500; //275970
int target_theta_m90 = 541500; //562150
int target_theta_m180 = 1099900; //1135100