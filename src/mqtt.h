#ifndef __MQTT_H__
#define __MQTT_H__

/*******************************************************************************
 *** EXTERN VARIABLES
 ******************************************************************************/
void (*mqtt_callback)(void);

/*******************************************************************************
 *** PROTOTYPES
 ******************************************************************************/
void mqtt_handler(struct mg_connection *c, int ev, void *p);

#endif  //__MQTT_H__