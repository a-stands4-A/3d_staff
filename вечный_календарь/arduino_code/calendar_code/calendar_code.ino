// Определение пинов
#define BUTTON_PIN 14
#define LED_PIN 6
#define COLS 7
#define ROWS 6
#define NUM_LEDS 42 // 7 столбцов * 6 строк = 42
// #define LOOP_COLS() for(int i = 0; i <((int)COLS); ++i )
// #define LOOP_ROWS() for(int j = 0; j <((int)ROWS); ++j )

// // Создание объекта для управления светодиодами
// Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

int matrix[ROWS][COLS] = {0};

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    delay(111); 
  }

  // pinMode(BUTTON_PIN, INPUT_PULLUP); // Настройка кнопки с подтягивающим резистором
  // strip.begin();                     // Инициализация светодиодов
  // strip.show();                      // Убедимся, что все светодиоды погашены
  // initializeMatrix(5);                // Инициализация матрицы
}

void loop() {
  Serial.println("Dasdasdasdasdasd");
  // if (digitalRead(BUTTON_PIN) == LOW) {
  //   delay(50); // Антидребезг
  //   while (digitalRead(BUTTON_PIN) == LOW); // Ждем отпускания кнопки

  //   updateMatrix(5);
  //   updateLEDs();
  // }
      // updateMatrix(5);
}

// void initializeMatrix(int initValue) {
//   LOOP_COLS() {
//     LOOP_ROWS() {
//       matrix[i][j] = initValue; // Изначально заполняем матрицу нулями
//     }
//   }
// }

// void updateMatrix(int delta) {
//   LOOP_COLS() {
//     LOOP_ROWS() {
//       matrix[i][j] += delta; // Изначально заполняем матрицу нулями
//     }
//   }
// }

// void updateLEDs() {
//   LOOP_COLS() {
//     LOOP_ROWS() {
//       int index = i * 7 + j;
//       int value = matrix[i][j] % 255;
//       int brightness = map(value, 0, 255, 0, 255); // Преобразование float в значение яркости (0-255)

//       // Установка цвета светодиода
//       strip.setPixelColor(index, strip.Color(brightness, brightness, brightness));
//     }
//   }
//   strip.show(); // Отправка данных на светодиоды
// }
