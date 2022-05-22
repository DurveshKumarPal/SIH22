void startServer() {
  server.on("/traffic", handleTraffic);
  server.on("/", handleStatus);
  server.on("/register", handleRegister);
  server.begin(); //Start the server
  Serial.println("Server listening");
}
