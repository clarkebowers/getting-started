/* Copyright (c) Microsoft Corporation.
   Licensed under the MIT License. */

#ifndef _AZURE_CONFIG_H
#define _AZURE_CONFIG_H

// ----------------------------------------------------------------------------
// Azure IoT Dynamic Provisioning Service
//    Define this to use the DPS service, otherwise direct IoT Hub
// ----------------------------------------------------------------------------
#define ENABLE_DPS

// ----------------------------------------------------------------------------
// Azure IoT DPS connection config
//    IOT_DPS_ID_SCOPE:        The DPS ID Scope
//    IOT_DPS_REGISTRATION_ID: The DPS device Registration Id
// ----------------------------------------------------------------------------
#define IOT_DPS_ID_SCOPE        "0ne00266663"
#define IOT_DPS_REGISTRATION_ID "wave6"

// ----------------------------------------------------------------------------
// Azure IoT Hub connection config
//    IOT_HUB_HOSTNAME:  The Azure IoT Hub hostname
//    IOT_HUB_DEVICE_ID: The Azure IoT Hub device id
// ----------------------------------------------------------------------------
#define IOT_HUB_HOSTNAME  ""
#define IOT_HUB_DEVICE_ID ""

// ----------------------------------------------------------------------------
// Azure IoT DPS Self-Signed X509Certificate
//    Define this to connect to DPS or Iot Hub using a X509 certificate
// ----------------------------------------------------------------------------
//#define ENABLE_X509

// ----------------------------------------------------------------------------
// Azure IoT device SAS key
//    The SAS Primary key generated by Azure IoT
// ----------------------------------------------------------------------------
#define IOT_DEVICE_SAS_KEY "bE1cCydzUTzsOhO5JMkWEbPvyenQT3g5u/01AqbX1jg="

#endif // _AZURE_CONFIG_H
