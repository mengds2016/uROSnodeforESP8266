ESP8266 RTOS uROSnode (Work In Progress)
Native uROSnode Implementation for the ESP8266 based on FreeRTOS (esp-open-rtos). 

file structure
demospub   Example of  Published messages
urosNode   Library file
tools            tools generated msg srv 

Building compiler environment

copy demospub to esp-open-rtos/example

copy urosnode to esp-open-rtos/extras


edit urosconf.h ,Modify the following variables according to the actual situation
UROS_NODE_NAME
UROS_XMLRPC_MASTER_IP 
UROS_XMLRPC_MASTER_IP_SZ
UROS_XMLRPC_LISTENER_IP
UROS_XMLRPC_LISTENER_IP_SZ




Creating a ROS msg and srv
urosnode have your own tools generated msg srv ,edit urosgen.cfg ,run urosgen.py,produce urosHandlers.h,urosHandlers.c,urosMsgTypes.h,urosMsgTypes.c.Copy the four files into the compiled directory.
