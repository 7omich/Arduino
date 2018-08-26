const int LED = 13; // LEDが接続されているピン
const int BUTTON = 7; // プッシュボタンが接続されているピン

int val = 0; // 入力ピンの状態を記憶する変数

void setup() {
  pinMode(LED, OUTPUT); // ArduinoにLEDが出力であると伝える
  pinMode(BUTTON, INPUT); // BUTTONは入力であると設定
}

void loop() {
  val = digitalRead(BUTTON); // 入力を読み取り、valに格納

  if (val == HIGH) {
    digitalWrite(LED, HIGH); // LEDをオンにする
  } else {
    digitalWrite(LED, LOW); // LEDをオフにする
  }
}
