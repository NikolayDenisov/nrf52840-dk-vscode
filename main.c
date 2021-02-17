#include <stdbool.h>
#include <stdint.h>

#include "boards.h"
#include "nrf_delay.h"

/**
 * @brief Function for application main entry.
 */
int main(void) {
    /* Configure board. */
    bsp_board_init(BSP_INIT_LEDS);
    /* Toggle LEDs. */
    while (true) {
        for (int j = 0; j < LEDS_NUMBER; j++) {
            bsp_board_led_invert(j);
            nrf_delay_ms(500);
        }
    }
}

/**
 *@}
 **/
