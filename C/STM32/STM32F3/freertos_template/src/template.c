#include <stm32f30x.h>
#include <FreeRTOS.h>
#include <task.h>

int main(void)
{
    

    vTaskStartScheduler();
    return 0;    
}
