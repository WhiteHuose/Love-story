#include "main.h"

BSP_FLAG board_flags;
int main(void)
{
    sys_init();
    while(1){
        if((!board_flags.get_lora_flag)&&(board_flags.wakeup_flag)){
            wakeup();
        }
        if(board_flags.get_lora_flag){
            board_flags.get_lora_flag = 0;
            show_rssi();
        }
    }
}

void sys_init(void)
{

}
void wakeup(void)
{

}
void show_rssi(void)
{

}