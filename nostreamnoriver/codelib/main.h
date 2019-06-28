#ifndef __MAIN_H_
#define __MAIN_H_

typedef struct 
{
    unsigned char wakeup_flag;    /* data */
    unsigned char get_lora_flag;
    unsigned char lora_timeout_flag;
    unsigned char wor_timeout_flag;
}BSP_FLAG;


#endif
