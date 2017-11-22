


#include "app.h"
#include "ssid_config.h"
#include "urosHandlers.h"

/*===========================================================================*/
/* Main features.                                                            */
/*===========================================================================*/




/*
 * Application entry point.
 */
void user_init(void) {

    uart_set_baud(0, 115200);
    printf("SDK version:%s\n", sdk_system_get_sdk_version());
    struct sdk_station_config config = {
        .ssid = WIFI_SSID,
        .password = WIFI_PASS,
    };

    printf("WiFi: connecting to WiFi\n\r");
    sdk_wifi_set_opmode(STATION_MODE);
    sdk_wifi_station_set_config(&config);
    app_initialize();
   
}
