class TrafficLight
{
  public:
    TrafficLight(byte redPin, byte yellowPin, byte greenPin);
    void Toggle(int color);
    void TurnOff(int color);
    void TurnOn(int color);
    void Go();
    void Careful();
    void Stop();
    bool GetState(int color);
    bool* GetStates();
    String GetStatus();
  private:
    byte pins[3];
bool states[3]={0}; void init();
};
