class Accelerometer {
public:
  Accelerometer();
  bool setBaud(int i);
  int getBaud();
  bool setUSB(int i);
  int getUSB();
  bool setMaxAcceleration(int i);
  int getMaxAcceleration();
  void takeSample();
  void convSample();
  double getX();
  double getY();
  double getZ();
private:
  int baud_;
  int maxAcceleration_;
  int ttyl_;
  int xRaw_, yRaw_, zRaw_;
  double xConv_, yConv_, zConv_;
}
