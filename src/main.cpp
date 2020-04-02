// SERIAL WRITING OUTPUT WILL BREAK EVERYTHING NEVER DO IT!

#define SKETCH_NAME "ModuleKitchen"
#define SKETCH_VERSION "1.0"
#define MY_BAUD_RATE 115200
#define MY_NODE_ID 44

// #define NODEMANAGER_SLEEP OFF
// #define NODEMANAGER_OTA_CONFIGURATION ON
#define MY_TRANSPORT_WAIT_READY_MS 1000
#define NODEMANAGER_DEBUG ON
#define NODEMANAGER_CONDITIONAL_REPORT ON

#include <XMySensors/XMySensors.h>
#include <MySensors_NodeManager.h>

void before()
{
	nodeManager.before();
}

void setup()
{
	nodeManager.setup();
}

void presentation()
{
	nodeManager.presentation();
}

void loop()
{
	nodeManager.loop();
}

void receive(const MyMessage &message)
{
	nodeManager.receive(message);
}
