#include <Servo.h>

Servo myServo;  // 서보모터 객체 생성

void setup() {
  Serial.begin(115200);  // 시리얼 통신 속도 설정
  myServo.attach(7);  // 서보모터를 7번 핀에 연결
}

void loop() {
  if (Serial.available() > 0) {
    // 시리얼 버퍼에서 데이터를 읽어옴
    String data_str = Serial.readStringUntil('\n');
    
    if (data_str != "") {
      int received_value = data_str.toInt();  // 문자열을 정수로 변환
      Serial.print("Received value: ");
      Serial.println(received_value);
      
      // 서보모터 제어
      int angle = map(received_value, 0, 179, 0, 180);  // 입력값을 서보 각도로 변환
      myServo.write(angle);  // 서보모터 각도 설정
      delay(15);  // 서보모터가 목표 각도로 도달할 때까지 대기
    }
  }
  
  delay(100);  // 100ms 지연
}
