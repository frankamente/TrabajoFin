/*Definimos El Trigger, el echo de cada Ultrasonido.*/
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

// Definicion de pines de ultrasonidos


#define TRIGGER_PIN  8  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     9  // Arduino pin tied to echo pin on the ultrasonic sensor.

// Definicion de pines de Encoder
#define OUT1  2  // PIN ENTRADA 1 ENCODER
#define OUT2  3  // PIN ENTRADA 2 ENCODER

// Definicion de pines motores
#define IN3  20    // Input3 conectada al pin 5
#define IN4  21    // Input4 conectada al pin 4 
#define ENB  11    // ENB conectada al pin 3 de Arduino
#define IN1  18    // Input3 conectada al pin 5
#define IN2  19    // Input4 conectada al pin 4 
#define ENA  10    // ENB conectada al pin 3 de Arduino

// Tiempos de ejecucion de funciones
#define tsensores  200
#define tmotoreson  600
#define tmotoresoff  100