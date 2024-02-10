#include <WiFi.h>

const char* ssid     = "NCC_InstituteOfScience"; // Replace with your WiFi SSID
const char* password = "CrazySci3ntist";    // Replace with your WiFi password

const char* host = "192.168.1.13"; // Replace with your computer's local IP
const uint16_t port = 12345;                 // The same port as your Python server

void setup() {
  Serial.begin(115200);
  delay(10);

  // Connect to WiFi
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  delay(5000);  // Wait for 5 seconds between connections, adjust as needed

  Serial.print("Connecting to ");
  Serial.println(host);

  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  if (!client.connect(host, port)) {
    Serial.println("Connection failed");
    return;
  }

  // This will send a simple message to the server
  String message = "Hello from ESP32!";
  Serial.println("Sending message to server...");
  client.println(message);

  // Wait for a response from the server
  String line = client.readStringUntil('\r');
  Serial.println("Received from server: ");
  Serial.println(line);

  Serial.println("Closing connection");
  client.stop();
}
