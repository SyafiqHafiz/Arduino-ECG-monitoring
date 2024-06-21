// AD8232.h
#ifndef AD8232_H
#define AD8232_H

#include <Arduino.h>

class AD8232 {
  public:
    AD8232(int csPin);
    void begin();
    int readECG();
    void setLeadOffDetection(bool enable);
    void setECGGain(int gain);
    // Add other function declarations as needed

  private:
    int _csPin;
    // Add private variables as needed
};

#endif
