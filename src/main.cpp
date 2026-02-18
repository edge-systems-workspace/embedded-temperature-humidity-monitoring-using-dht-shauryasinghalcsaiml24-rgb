#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Temperature and Humidity Monitor using the DHT11 sensor
 * @author shre-coder638(Shreyash Shankar)
 * @date 2026-02-17
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on the Serial Monitor.
 * Readings occur every 2 seconds. Designed as a simple educational example
 * for embedded monitoring with Arduino.
 */

#include <DHT.h>

#define DHTPIN 2

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

/**
 * @brief Initialize peripherals and Serial output.
 *
 * Sets up Serial at 9600 baud, initializes the DHT sensor library,
 * and prints a startup banner to the Serial Monitor.
 *
 * This function is called once by the Arduino core during boot.
 */
void setup() {

    Serial.begin(9600);
    dht.begin();

    Serial.println("DHT11 Temperature and Humidity Monitor");
    Serial.println("System Initialized...");

}