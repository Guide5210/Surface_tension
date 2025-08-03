// // 28BYJ-48 Stepper Motor with Arduino - Basic
// #include <Stepper.h>

// // Steps per revolution for 28BYJ-48
// const int stepsPerRevolution = 2048;

// // Define stepper motor object
// Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

// void setup() {
//   myStepper.setSpeed(10); // RPM
// }

// void loop() {
//   myStepper.step(stepsPerRevolution); // One full rotation clockwise
//   delay(1000);
//   myStepper.step(-stepsPerRevolution); // One full rotation counter-clockwise
//   delay(1000);
// }

//ช้าสุด
#include <Stepper.h>

// จำนวนสเตปต่อรอบของมอเตอร์ 28BYJ-48
const int stepsPerRevolution = 2048;

// สร้างออบเจ็กต์ควบคุม Stepper
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(8); // ปรับความเร็วหน่วย RPM (ต่ำ = หมุนช้า)
}

void loop() {
  myStepper.step(stepsPerRevolution); // หมุนครบ 1 รอบ (360°)
  delay(10); // พักครึ่งวินาทีระหว่างรอบ (ปรับได้ตามต้องการ)
}

// #include <AccelStepper.h>

// const int stepsPerRevolution = 2048;

// // กำหนดประเภทการควบคุม: HALF4WIRE สำหรับมอเตอร์ 28BYJ-48
// AccelStepper stepper(AccelStepper::HALF4WIRE, 8, 10, 9, 11);

// void setup() {
//   stepper.setMaxSpeed(1000);     // ความเร็วสูงสุด (สเตปต่อวินาที)
//   stepper.setAcceleration(500);  // ความเร่ง (ปรับได้ตามต้องการ)
//   stepper.moveTo(stepsPerRevolution); // หมุน 1 รอบ
// }

// void loop() {
//   if (stepper.distanceToGo() == 0) {
//     stepper.moveTo(stepper.currentPosition() + stepsPerRevolution); // หมุนต่ออีก 1 รอบ
//   }
//   stepper.run();
// }