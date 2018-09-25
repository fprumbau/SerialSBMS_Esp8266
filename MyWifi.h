#ifndef MYWIFI_H
#define MYWIFI_H

#include <ESP8266WiFi.h>

class MyWifi {
    private:
      const char* _ssid = "Perry";
      const char* _password = "5785340536886787";
      String _ip;
    public:
      void connect();
      String getIpAddress();
};

#endif
