#include <stdio.h>

#include <freertos/FreeRTOS.h>  
#include <freertos/task.h>

#include <esp_log.h>

#include <driver/gpio.h>

#define BLINK_LED 2

void app_main(void)
{
    // Get the name of the current task
    char *ourTaskName = pcTaskGetName(NULL);

    // Print a message to the log with the task name
    ESP_LOGI(ourTaskName, "this is peter\n");

    // Reset the GPIO pin (optional but good practice)
    gpio_reset_pin(BLINK_LED);

    // Set the direction of the GPIO pin as OUTPUT
    gpio_set_direction(BLINK_LED, GPIO_MODE_OUTPUT);

    while(1)
    {
        // Turn on the LED by setting the GPIO pin to HIGH
        gpio_set_level(BLINK_LED, 1);

        // Delay for 1 second (1000 milliseconds)
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        // Turn off the LED by setting the GPIO pin to LOW
        gpio_set_level(BLINK_LED, 0);

        // Delay for 1 second (1000 milliseconds) again
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
