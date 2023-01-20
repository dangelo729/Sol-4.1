#include <Arduino.h>
#include <Encoder.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1351.h>
#include <SPI.h>
#include <Fonts/FreeMonoBoldOblique12pt7b.h>
#include <Fonts/FreeSerif9pt7b.h>
#include <math.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform11;     //xy=67.5,519
AudioSynthWaveform       waveform9;      //xy=68,436
AudioSynthWaveform       waveform10;     //xy=68,477
AudioSynthWaveform       waveform12;     //xy=68,557
AudioSynthWaveform       waveform5;      //xy=73,240
AudioSynthWaveform       waveform1;      //xy=78,50.555551528930664
AudioSynthWaveform       waveform2;      //xy=78,99.44443702697754
AudioSynthWaveform       waveform4;      //xy=78,188.33335494995117
AudioSynthWaveform       waveform3;      //xy=79.5555534362793,147.22222900390625
AudioSynthWaveform       waveform15;     //xy=78,724
AudioSynthWaveform       waveform14;     //xy=80,674
AudioSynthWaveform       waveform6;      //xy=84,288
AudioSynthWaveform       waveform13;     //xy=85,643
AudioSynthWaveform       waveform7;      //xy=91,345
AudioSynthWaveform       waveform8;      //xy=100,386
AudioSynthWaveform       waveform16;     //xy=106,772
AudioMixer4              mixer9;         //xy=240,297
AudioMixer4              mixer8;         //xy=249,127
AudioMixer4              mixer10;        //xy=254,449
AudioMixer4              mixer11;        //xy=256,696
AudioEffectEnvelope      envelope1;      //xy=383,201
AudioEffectEnvelope      envelope2;      //xy=388,278
AudioEffectEnvelope      envelope3;      //xy=389,356
AudioEffectEnvelope      envelope4;      //xy=410,434
AudioMixer4              mixer1;         //xy=562,319
AudioFilterStateVariable filter1;        //xy=648,404
AudioMixer4              mixer2;         //xy=738,301
AudioEffectFreeverb      freeverb1;      //xy=862,346
AudioMixer4              mixer3;         //xy=970,243
AudioEffectDelay         delay1;         //xy=1128,307
AudioMixer4              mixer5;         //xy=1371,281
AudioMixer4              mixer6;         //xy=1387,361
AudioMixer4              mixer4;         //xy=1518,267
AudioEffectBitcrusher    bitcrusher1;    //xy=1701,352
AudioFilterStateVariable filter2;        //xy=1718,273
AudioMixer4              mixer7;         //xy=1895,301
AudioOutputI2S           i2s1;           //xy=2114,338
AudioConnection          patchCord1(waveform11, 0, mixer10, 2);
AudioConnection          patchCord2(waveform9, 0, mixer10, 0);
AudioConnection          patchCord3(waveform10, 0, mixer10, 1);
AudioConnection          patchCord4(waveform12, 0, mixer10, 3);
AudioConnection          patchCord5(waveform5, 0, mixer9, 0);
AudioConnection          patchCord6(waveform1, 0, mixer8, 0);
AudioConnection          patchCord7(waveform2, 0, mixer8, 1);
AudioConnection          patchCord8(waveform4, 0, mixer8, 3);
AudioConnection          patchCord9(waveform3, 0, mixer8, 2);
AudioConnection          patchCord10(waveform15, 0, mixer11, 2);
AudioConnection          patchCord11(waveform14, 0, mixer11, 1);
AudioConnection          patchCord12(waveform6, 0, mixer9, 1);
AudioConnection          patchCord13(waveform13, 0, mixer11, 0);
AudioConnection          patchCord14(waveform7, 0, mixer9, 2);
AudioConnection          patchCord15(waveform8, 0, mixer9, 3);
AudioConnection          patchCord16(waveform16, 0, mixer11, 3);
AudioConnection          patchCord17(mixer9, envelope2);
AudioConnection          patchCord18(mixer8, envelope1);
AudioConnection          patchCord19(mixer10, envelope3);
AudioConnection          patchCord20(mixer11, envelope4);
AudioConnection          patchCord21(envelope1, 0, mixer1, 0);
AudioConnection          patchCord22(envelope2, 0, mixer1, 1);
AudioConnection          patchCord23(envelope3, 0, mixer1, 2);
AudioConnection          patchCord24(envelope4, 0, mixer1, 3);
AudioConnection          patchCord25(mixer1, 0, filter1, 0);
AudioConnection          patchCord26(mixer1, 0, filter1, 1);
AudioConnection          patchCord27(mixer1, 0, mixer2, 0);
AudioConnection          patchCord28(filter1, 0, mixer2, 1);
AudioConnection          patchCord29(mixer2, freeverb1);
AudioConnection          patchCord30(mixer2, 0, mixer3, 0);
AudioConnection          patchCord31(freeverb1, 0, mixer3, 1);
AudioConnection          patchCord32(mixer3, delay1);
AudioConnection          patchCord33(mixer3, 0, mixer4, 0);
AudioConnection          patchCord34(delay1, 0, mixer5, 0);
AudioConnection          patchCord35(delay1, 1, mixer5, 1);
AudioConnection          patchCord36(delay1, 2, mixer5, 2);
AudioConnection          patchCord37(delay1, 3, mixer5, 3);
AudioConnection          patchCord38(delay1, 4, mixer6, 0);
AudioConnection          patchCord39(delay1, 5, mixer6, 1);
AudioConnection          patchCord40(delay1, 6, mixer6, 2);
AudioConnection          patchCord41(delay1, 7, mixer6, 3);
AudioConnection          patchCord42(mixer5, 0, mixer4, 1);
AudioConnection          patchCord43(mixer6, 0, mixer4, 2);
AudioConnection          patchCord45(mixer4, 0, filter2, 0);
AudioConnection          patchCord46(mixer4, 0, mixer7, 0);
AudioConnection          patchCord47(bitcrusher1, 0, mixer7, 1);
AudioConnection          patchCord48(filter2, 0, bitcrusher1, 0);
AudioConnection          patchCord49(mixer7, 0, i2s1, 0);
AudioConnection          patchCord50(mixer7, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=614,570

// GUItool: end automatically generated code

//here are the pointer arrays for my audio objects
AudioMixer4     *mixer[11] = {&mixer1, &mixer2, &mixer3, &mixer4, &mixer5, &mixer6, &mixer7, &mixer8, &mixer9, &mixer10, &mixer11};
AudioSynthWaveform *waveform[16] = {&waveform1, &waveform2, &waveform3, &waveform4, &waveform5, &waveform6, &waveform7,
                                    &waveform8, &waveform9, &waveform10, &waveform11, &waveform12, &waveform13, &waveform14, &waveform15, &waveform16
                                   };
AudioEffectEnvelope *envelope[4] = {&envelope1, &envelope2, &envelope3, &envelope4};

//defenitions for the oled and math
#define SCLK_PIN 13
#define MOSI_PIN 11
#define DC_PIN   36
#define CS_PIN   37
#define RST_PIN  39
#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 96
#define  BLACK           0x0000
#define BLUE            0x001F
#define RED             0xF800
#define GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0
#define ORANGE          0xFD20
#define WHITE           0xFFFF

#define GREENYELLOW     0xAFE5

#define OLIVE           0x7BE0
#define rightPotPin     A15
#define leftPotPin      A16


//here i'll make my various variables
uint16_t pColors[] = {0xFFFF, 0x7BE0, 0x001F, 0x07FF};
int encPins[4] = {14, 40, 16, 17};
bool encCount = false;
long encPosition[2]  = { -999, -999};
long oldPosition[2] = { -999, -999};
bool encUp[2] = {false, false};
bool encDown[2] = {false, false};
int oldCircleCoord[2];
int oldRad;
int circlePointsX[16];
int circlePointsY[16];
int planetRads[4];
int planetX[4];
int planetY[4];
int encButtons[2] = {41, 36};
bool encButtonState[2] = {HIGH, HIGH};
bool lastEncButtonState[2] = {LOW, LOW};
bool encButtonOn[2] = {false, false};
unsigned long time1 = 0;
unsigned long sunTime = 0;
bool sunCount = false;
int sunPos[2] = {64, 48};
unsigned long menuTime = 0;
bool menuTop = true;
bool menuTopOld = true;
unsigned long mCursTime = 0;
int lastLeftPot, lastRightPot;
int newLeftPot, newRightPot;
//menu states
//FALSE FALSE: main
//TRUE FALSE: new system
bool octaveUp;
bool octaveDown;
bool menuStates[2] = {false, false};
bool encButtonStates[2] = {false, false};
bool lastEncButtonStates[2] = {false, false};
int orbitPointsX[4][72];
int orbitPointsY[4][72];
int orbitCounts[4] = {0, 0, 0, 0};
bool orbitOn[4] = {false, false, false, false};
unsigned long orbitTimes[4] = {0, 0, 0, 0};
int orbitSpeeds[4] = {20, 26, 40, 20};

int onPlanet = 0;
bool testCount = false;
unsigned long newSysTime = 0;
int pRad;
int encOn = 3;
bool sysChange = 0;
long newLeft, newRight;
unsigned long encTime = 0;
int pSizes[4] = {3, 3, 3, 3};
float oldPercentage;
unsigned long orbitTime = 0;
bool planetSubMenuStates = false;
int lastSizeMap;
float oldPerc;
float oldPerc2;
int chaosRand;
bool chaosPixels[128][96];
int16_t chaosColors[10] = { 0x2870, 0x38F0, 0x5A51, 0x386B, 0x31CF, 0x59AD, 0x8A35, 0x18D6, 0x59D7, 0x11B7};
int chaosCount1 = 0;
int chaosCount2 = 0;
unsigned long chaosTime = 0;
int oldCursX[3];
int oldCursY[3];
int oldCursP[3];
unsigned long cursorTime = 0;
int planetAspect = 0;
bool sunring = true;
unsigned long startTime = 0;
bool startCount = false;
int oldAspectP;
int oldAspectA;
int sunButtonPin = 29;
bool lastSunButtonState = LOW;
bool sunButtonState;
bool onSun = true;
bool firstSun = true;
int keyboardPin[13] = {3, 31, 30, 29, 28, 32, 26, 25 , 24, 9, 6, 5, 4};
bool keyboardState[13] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
bool lastKeyboardState[13] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
int scaleFreq[4][13] = {
  {65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 123, 130},
  {131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262},
  {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523},
  {523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047}
};
int octaveOn = 2;
bool octaveState[2] = {HIGH, HIGH};
bool lastOctaveState[2] = {LOW, LOW};
int octavePin[2] = {1, 0};
bool voice[4] = {LOW, LOW, LOW, LOW};
int keyOnVoice[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned long jingleTime = 0;
int jingleCount = 0;
unsigned long startSunTime = 0;
int oldSunMeter[2] = {0, 0};
int oldPlanetMeter[4][3];
int oldMenP;
int encButtonPin[2] = {15, 41};

//oled object
Adafruit_SSD1351 oled = Adafruit_SSD1351(SCREEN_WIDTH, SCREEN_HEIGHT, &SPI, CS_PIN, DC_PIN,  RST_PIN);
//Adafruit_SSD1351 oled = Adafruit_SSD1351(SCREEN_WIDTH, SCREEN_HEIGHT, CS_PIN, DC_PIN, MOSI_PIN, SCLK_PIN, RST_PIN);
//map function for floats
float mapF(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

//class for planet objects
class Planet {
  public:
    bool isActive;
    int size;
    uint16_t color;
    int velocity;
    int rad;
    int red;
    int green;
    int blue;
    int orbitCount;
    int orbitPointsX[288];
    int orbitPointsY[288];
    bool cursor;
    int lastRingSize;
    int lastCursSize;
    int oldSunSize;
    int sunDelay;


    Planet(int size, int vel, uint16_t color, int rad) {
      this->isActive = false;
      this->size = size;
      this->rad = rad;
      this->orbitCount = 0;
      this->velocity = vel;
      this->color = color;

    }

    void setSize(int size) {
      this->size = size;
    }
    void setColor() {
      this->setRed(map(this->getRad(), 18, 50, 255, 10));
      this->setBlue(map(this->getSpeed(), 1, 12, 50, 255));
      this->setGreen(map(this->getSize(), 1, 7, 50, 255));


      this->color = (((31 * (this->red + 4)) / 255) << 11) |
                    (((63 * (this->green + 2)) / 255) << 5) |
                    ((31 * (this->blue + 4)) / 255);;
    }
    void setSpeed(int vel) {
      this->velocity = vel;
    }
    int getSpeed() {
      return this->velocity;
    }
    uint16_t getColor() {
      return this->color;
    }
    int getSize() {
      return this->size;
    }
    void setRad(int r) {
      this->rad = r;
    }
    int getRad() {
      return this->rad;
    }
    void activate() {
      this->isActive = true;
    }
    void deactivate() {
      this->isActive = false;
    }
    void setRed(int red) {
      this->red = red;
    }
    void setGreen(int green) {
      this->green = green;
    }
    void setBlue(int blue) {
      this->blue = blue;
    }
    int getRed() {
      return this-> red;
    }
    int getBlue() {
      return this-> blue;
    }
    int getGreen() {
      return this-> green;
    }

    int getX() {
      return this->orbitPointsX[this->orbitCount];
    }
    int getY() {
      return this->orbitPointsY[this->orbitCount];
    }
    void setDelay(int delay) {
      this->sunDelay = delay;
    }
    int getDelay() {
      return this->sunDelay;
    }
    void erase() {
      oled.fillCircle(this->orbitPointsX[this->orbitCount - this->velocity], this->orbitPointsY[this->orbitCount - this->velocity], this->size, BLACK);
    }
    void eraseCursor() {
      oled.fillCircle(this->orbitPointsX[this->orbitCount - this->velocity], this->orbitPointsY[this->orbitCount - this->velocity], this->size + 7, BLACK);
    }
    void orbit() {
      createOrbitPoints(rad);
      if (this->orbitCount == 0) {
        oled.fillCircle(this->orbitPointsX[288 - velocity], this->orbitPointsY[288 - velocity], this->size + 2, BLACK);
      } else {
        oled.fillCircle(this->orbitPointsX[this->orbitCount - this->velocity], this->orbitPointsY[this->orbitCount - this->velocity], this->size, BLACK);
      }
      oled.fillCircle(this->orbitPointsX[this->orbitCount], this->orbitPointsY[this->orbitCount], this->size, this->color);
      if (this->cursor == true) {
        oled.drawTriangle(oldCursX[0], oldCursY[0], oldCursX[1], oldCursY[1], oldCursX[2], oldCursY[2], BLACK);

        oled.drawTriangle(this->orbitPointsX[this->orbitCount] - this->size - 3, this->orbitPointsY[this->orbitCount], this->orbitPointsX[this->orbitCount] - this->size - 6, this->orbitPointsY[this->orbitCount] - 3, this->orbitPointsX[this->orbitCount] - this->size - 6, this->orbitPointsY[this->orbitCount] + 3, 0x03EF);
        oldCursX[0] = this->orbitPointsX[this->orbitCount] - this->size - 3;
        oldCursY[0] = this->orbitPointsY[this->orbitCount];
        oldCursX[1] = this->orbitPointsX[this->orbitCount] - this->size - 6;
        oldCursY[1] = this->orbitPointsY[this->orbitCount] - 3;
        oldCursX[2] = this->orbitPointsX[this->orbitCount] - this->size - 6;
        oldCursY[2] = this->orbitPointsY[this->orbitCount] + 3;
        ///oldCursP = this->size + 2;

      }

      if (this->orbitCount + this->velocity < 287) {
        this->orbitCount += this->velocity;
      } else {

        this->orbitCount = 0;
      }


    }

    void createOrbitPoints(int r) {
      double count = 0;
      for (int i = 0; i < 288; i++) {
        this->orbitPointsX[i] = r * cos(count * (PI / 180)) + sunPos[0];
        this->orbitPointsY[i] = r * sin(count * (PI / 180)) + sunPos[1];
        count += 1.25;
      }


    }
    int getLastCurs() {
      return this->lastCursSize;
    }
    void cursorOn() {

      this->cursor = true;

    }
    void cursorOff() {
      if (this->cursor == true) {
        oled.drawCircle(oldCursX, oldCursY, oldCursP, BLACK);
      }
      this->cursor = false;
    }
    void sun() {
      this->size = 10;
      this->color = YELLOW;

    }
    void drawSun() {
      oled.fillCircle(sunPos[0], sunPos[1], this->size, this->color);
      if (sunTime + this->sunDelay < millis() ) {
        oled.drawCircle(sunPos[0], sunPos[1], lastRingSize, BLACK);
        sunring = !sunring;
        sunTime = millis();
      }
      if (sunring == true) {
        oled.drawCircle(sunPos[0], sunPos[1], this->size + 2, this->color);
        this->lastRingSize = this->size + 2;
      }
    }
    void sunCursor() {
      if (oldPosition[0] <= 25) {
        this->size = map(oldPosition[0], 1, 25, 1, 13);;
      } else {
        this->size = map(oldPosition[0], 26, 50, 13, 1);
      }
      //oled.drawCircle(sunPos[0], sunPos[1], this->size + 4, 0x7BEF);
      //if (this->size != this->lastCursSize) {
      //oled.drawCircle(sunPos[0], sunPos[1], this->lastCursSize + 4, BLACK);
      //}
      if (this->lastCursSize != this->size) {
        oled.fillCircle(sunPos[0], sunPos[1], this->lastCursSize, BLACK);
        oled.drawCircle(sunPos[0], sunPos[1], this->lastCursSize + 2, BLACK);
      }
      this->lastCursSize = this->size;
    }
    void sunColor() {
      if (oldPosition[0] <= 25) {
        this->red = map(oldPosition[0], 1, 25, 150, 255);
        this->green = map(oldPosition[0], 1, 25, 100, 10);
        this->blue = map(oldPosition[0], 1, 25, 10, 30);
      } else {
        this->red = map(oldPosition[0], 26, 50, 255, 40);
        this->green = map(oldPosition[0], 26, 50, 10, 180);
        this->blue = map(oldPosition[0], 26, 50, 30, 200);
      }
      this->sunDelay = map(oldPosition[1], 1, 20, 200, 1000);

      this->color = (((31 * (this->red + 4)) / 255) << 11) |
                    (((63 * (this->green + 2)) / 255) << 5) |
                    ((31 * (this->blue + 4)) / 255);;
      for (int i = 7; i < 11; i++) {
        if (oldPosition[0] < 17) {

          mixer[i]->gain(0, mapF(float(oldPosition[0]), 0.0, 16.0, 1.0, 0.0));
          mixer[i]->gain(1, mapF(float(oldPosition[0]), 0.0, 16.0, 0.0, 1.0));

        } else if (oldPosition[0] > 16 && oldPosition[0] < 34) {
          mixer[i]->gain(1, mapF(float(oldPosition[0]), 17.0, 33.0, 1.0, 0.0));
          mixer[i]->gain(2, mapF(float(oldPosition[0]), 17.0, 33.0, 0.0, 0.6));
        } else if (oldPosition[0] > 33 && oldPosition[0] < 51) {
          mixer[i]->gain(2, mapF(float(oldPosition[0]), 34.0, 50.0, 0.6, 0.0));
          mixer[i]->gain(3, mapF(float(oldPosition[0]), 34.0, 50.0, 0.0, 0.6));
        }
      }

    }
};




//the SUN AND PLANETS
Planet* sun = new Planet(10, 0, YELLOW, 0);
Planet planets[4] = { Planet(3, 4, BLUE, 20), Planet(4, 3, RED, 29), Planet(2, 9, OLIVE, 35), Planet(5, 2, GREENYELLOW, 23)};

//creating the oled and encoder objects
Encoder rightEnc(encPins[0], encPins[1]);
Encoder leftEnc(encPins[2], encPins[3]);
void setup() {
  AudioMemory(1024);

  sgtl5000_1.enable();
  sgtl5000_1.volume(10);
  mixer1.gain(0, .5);
  mixer1.gain(1, .5);
  mixer1.gain(2, .5);
  mixer1.gain(3, .5);
  mixer2.gain(0, 1);
  mixer3.gain(0, .5);
  mixer3.gain(1, .5);
  mixer4.gain(0, 1);
  freeverb1.roomsize(.8);
  freeverb1.damping(.4);
  filter2.frequency(0);
  mixer7.gain(0, 1.5);
  mixer7.gain(1, .5);
  waveform1.begin(.25, 233, WAVEFORM_SINE);
  waveform2.begin(.25, 294, WAVEFORM_TRIANGLE);
  waveform3.begin(.25, 349, WAVEFORM_SAWTOOTH);
  waveform4.begin(.25, 440, WAVEFORM_PULSE);
  waveform5.begin(.25, 440, WAVEFORM_SINE);
  waveform6.begin(.25, 440, WAVEFORM_TRIANGLE);
  waveform7.begin(.25, 440, WAVEFORM_SAWTOOTH);
  waveform8.begin(.25, 440, WAVEFORM_PULSE);
  waveform9.begin(.25, 440, WAVEFORM_SINE);
  waveform10.begin(.25, 440, WAVEFORM_TRIANGLE);
  waveform11.begin(.25, 440, WAVEFORM_SAWTOOTH);
  waveform12.begin(.25, 440, WAVEFORM_PULSE);
  waveform13.begin(.25, 440, WAVEFORM_SINE);
  waveform14.begin(.25, 440, WAVEFORM_TRIANGLE);
  waveform15.begin(.25, 440, WAVEFORM_SAWTOOTH);
  waveform16.begin(.25, 440, WAVEFORM_PULSE);
  for (int i = 0; i < 2; i++) {
    pinMode(encButtonPin[i], INPUT_PULLUP);
    pinMode(octavePin[i], INPUT_PULLUP);
  }

  for (int i = 0; i < 13; i++) {
    pinMode(keyboardPin[i], INPUT_PULLUP);
  }
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);
  //pinMode(38, INPUT);
  //pinMode(sunButtonPin, INPUT);
  //pinMode(32, INPUT);
  //pinMode(keyboardPin[0], INPUT);
  //  pinMode(35, INPUT);
  //  pinMode(34, INPUT);
  Serial.begin(9600);
  oled.begin();
  oled.fillScreen(BLACK);

  oled.setFont(&FreeSerif9pt7b);
  oled.setTextSize(1);
  delay1.disable(4);
  delay1.disable(5);
  delay1.disable(6);
  delay1.disable(7);
  planets[0].createOrbitPoints(20);
  planets[1].createOrbitPoints(29);
  planets[2].createOrbitPoints(35);
  planets[3].createOrbitPoints(23);
  oled.drawCircle(64, 48, 32, BLUE);

  delay(90);
  // envelope1.noteOff();
  oled.drawCircle(64, 48, 30, MAGENTA);
  delay(90);

  oled.drawCircle(64, 48, 28, CYAN);
  delay(90);
  //envelope1.noteOff();

  oled.drawCircle(64, 48, 26, GREENYELLOW);
  delay(90);

  oled.drawCircle(64, 48, 24, ORANGE);
  delay(90);
  // envelope1.noteOff();
  oled.drawCircle(64, 48, 22, MAGENTA);
  delay(90);

  oled.drawCircle(64, 48, 20, WHITE);
  // delay(90);
  //oled.drawCircle(64, 48, 18, GREENYELLOW);
  typeTitle(51, 53);
  oldPosition[0] = 23;
  sun->sunColor();
  freeverb1.roomsize(.4);
  for (int i = 0; i < 4; i++) {
    envelope[i]->decay(650);
  }
  for (int i = 0; i < 4; i++) {
    envelope[i]->sustain(0);
  }
  for (int i = 0; i < 4; i++) {
    envelope[i]->attack(200);
  }
  for (int i = 0; i < 4; i++) {
    waveform[
    i]->frequency(82);
  }
  for (int i = 4; i < 8; i++) {
    waveform[i]->frequency(247);
  }
  for (int i = 8; i < 12; i++) {
    waveform[i]->frequency(208);
  }
  for (int i = 12; i < 16; i++) {
    waveform[i]->frequency(150);
  }

  while (digitalRead(encButtonPin[1]) == HIGH) {

    rightEncoder(0, 50);
    sun->sunColor();

    typeTitle(51, 53);
    if (startTime + 750 < millis()) {
      envelope[jingleCount]->noteOn();
      startCount = !startCount;
      startTime = millis();

      jingleCount++;
      if (jingleCount > 3) {
        jingleCount = 0;
      }
    }
    if (startCount == false) {
      oled.drawCircle(64, 48, 18, BLACK);

    }
    if (startCount == true) {


      oled.drawCircle(64, 48, 18, GREENYELLOW);
      typePressStart(34, 87);
    }

  }

  oled.fillScreen(BLACK);
  envelope1.noteOff();
  mixer8.gain(3, 0);
  mixer8.gain(2, 0);
  mixer8.gain(1, 0);
  mixer8.gain(0, 0);

  for (int i = 0; i < 4; i++) {
    envelope[i]->noteOff();
  }
  for (int i = 0; i < 4; i++) {
    envelope[i]->sustain(.7);
  }
  for (int i = 0; i < 4; i++) {
    voice[i] == LOW;
  }

  for (int i = 0; i++; i < 4) {
    mixer1.gain(i, 0);
  }
  for (int i = 0; i++; i < 4) {
    mixer5.gain(i, 0);
  }
  delay(5);
}
void loop() {

  //MAIN//
  voiceVisuals();
  keyBoard();
  checkEncButtons();




  if (onSun == true) {
    solMen();
    rightEncoder(1, 50);
    leftEncoder(1, 20);
    if (firstSun == true) {
      rightEnc.write(20);
      firstSun = false;

    }

    sun->sunColor();
    sun->sunCursor();
    for (int i = 0; i < 4; i++) {
      planets[i].cursorOff();
    }

  }

  else {

    leftEncoder(0, 3);

    rightEncoder(0, 50);


    for (int i = 0; i < 4; i++) {
      if (i == oldPosition[1]) {
        planets[i].cursorOn();
        pMenu(i, planetAspect);
      }
      else {
        planets[i].cursorOff();
      }

    }
  }


  if (orbitTime + 10 < millis()) {
    if (onSun == false) {
      changeAspect(oldPosition[1], planetAspect);
    }
    planets[0].orbit();
    planets[1].orbit();
    planets[2].orbit();
    planets[3].orbit();
    planets[0].setColor();
    planets[1].setColor();
    planets[2].setColor();
    planets[3].setColor();


    orbitTime = millis();
  }
  sun->drawSun();

  sunButton();
}



void typeTitle(int x, int y) {
  oled.setFont(&FreeSerif9pt7b);
  oled.setCursor(x, y);

  oled.setTextColor(GREENYELLOW);
  oled.print("Sol");
}

void typeNew(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("NEW");
}
void typeSun(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(sun->getColor());
  oled.print("Sun");
}
void typeMass(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("mass");
}
void typeRads(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("rads");
}
void typeVel(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("vel");
}

void typeMood(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("MOOD");
}

void typePressStart(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("PRESS START");
}
void typeGo(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("GO");
}
void typeHome(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("HOME");
}
void typeSize(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("size");
}
void typeDist(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("dist");
}
void typeChaos(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("CHAOS");
}
void typeSystem(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("SYSTEM");
}
void typeOld(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(OLIVE);
  oled.print("OLD");
}
void typeP1(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(planets[0].getColor());
  oled.print("Phides X68");
}
void typeP2(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(planets[1].getColor());
  oled.print("Eonia");
}
void typeP3(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(planets[2].getColor());
  oled.print("Ribos");
}
void typeP4(int x, int y) {
  oled.setFont();
  oled.setCursor(x, y);
  oled.setTextColor(planets[3].getColor());
  oled.print("Cov O");
}



//simple linear distance calc
int distance(int x1, int y1, int x2, int y2)
{
  // Calculating distance
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}




void createCirclePoints(int r, int x, int y) {
  double count = 0;
  for (int i = 0; i < 16; i++) {
    circlePointsX[i] = r * cos(count * (PI / 180)) + x;
    circlePointsY[i] = r * sin(count * (PI / 180)) + y;
    count += 20;
  }

}









void changeAspect(int p, int a) {

  planets[p].erase();



  if (a == 0) {
    if (oldAspectP != p || oldAspectA != a) {

      rightEnc.write(map(planets[p].getSize(), 1, 7, 0, 50) * 4);


    } else {

      planets[p].setSize(map(oldPosition[0], 0, 50, 1, 7));
      if (p == 0) {
        filter1.frequency(map(oldPosition[0], 0, 50, 150, 20000));
      }
      if (p == 1) {
        freeverb1.roomsize(mapF(float(oldPosition[0]), 0.0, 50.0, 0.0, 1.0));
      }
      if (p == 2) {
        for (int i = 0; i <= map(oldPosition[0], 0, 50, 0, 3); i++) {

          mixer[4]->gain(i, delayMix(i));

        }
      }
      if (p == 3) {
        mixer[6]->gain(0, mapF(float(oldPosition[0]), 0.0, 50.0, 1.0, 0.4));
        mixer[6]->gain(1, mapF(float(oldPosition[0]), 0.0, 50.0, 0.0, .6));
      }

    }
  }
  if (a == 1) {
    if (oldAspectP != p || oldAspectA != a) {

      rightEnc.write(map(planets[p].getSpeed(), 1, 12, 0, 50) * 4);

    } else {

      planets[p].setSpeed(map(oldPosition[0], 0, 50, 1, 12));
      if (p == 0) {
        filter1.resonance(mapF(float(oldPosition[0]), 0.0, 50.0, 0.0, 4.0));
        bitcrusher1.bits(map(oldPosition[0], 0, 50, 16, 2));
      }
      if (p == 1) {
        freeverb1.roomsize(mapF(float(oldPosition[0]), 0.0, 50.0, 0.0, 1.0));

      }
      if (p == 2) {
        for (int i = 0; i < 4; i++) {
          delay1.delay(i, map(oldPosition[0], 0, 50, 10, 1000)*i + 1);
        }
      }
      if (p == 3) {
        for (int i = 0; i < 3; i++) {
          envelope[i]->release(map(oldPosition[0], 0, 50, 10, 1000));
        }
      }

    }

  }
  if (a == 2) {
    if (oldAspectP != p || oldAspectA != a) {

      rightEnc.write(map(planets[p].getRad(), 18, 48, 0, 50) * 4);

    } else {
      planets[p].setRad(map(oldPosition[0], 0, 50, 18, 48));
      if (p == 0 || p == 1 || p == 2) {

        mixer[p + 1]->gain(0, mapF(float(oldPosition[0]), 0.0, 50.0, 1.0, 0.0));
        mixer[p + 1]->gain(1, mapF(float(oldPosition[0]), 0.0, 50.0, 0.0, 1.0));
      }
      if (p == 3) {
        for (int i = 0; i < 3; i++) {
          envelope[i]->attack(map(oldPosition[0], 0, 50, 5, 1000));
        }
      }
    }
  }
  oldAspectA = a;
  oldAspectP = p;

}

void rightEncoder(int min, int max) {



  encPosition[0] = rightEnc.read() / 4;

  if (encPosition[0] > oldPosition[0]) {

    oldPosition[0] = encPosition[0];

  }  if (encPosition[0] < oldPosition[0]) {

    oldPosition[0] = encPosition[0];



  }
  if (oldPosition[0] > max) {
    oldPosition[0] = max;
    rightEnc.write(max * 4);
  }
  if (oldPosition[0] < min) {
    oldPosition[0] = min;
    rightEnc.write(min * 4);
  }

}
void leftEncoder(int min, int max) {


  encPosition[1] = leftEnc.read() / 4;

  if (encPosition[1] > oldPosition[1]) {

    oldPosition[1] = encPosition[1];

  }  if (encPosition[1] < oldPosition[1]) {

    oldPosition[1] = encPosition[1];

    Serial.println(oldPosition[1]);

  }
  if (oldPosition[1] > max) {
    oldPosition[1] = max;
    leftEnc.write(max * 4);
  }
  if (oldPosition[1] < min) {
    oldPosition[1] = min;
    leftEnc.write(min * 4);
  }

}
void sunButton() {


  sunButtonState = digitalRead(encButtonPin[1]);


  if (lastSunButtonState == HIGH and sunButtonState == LOW) {
    for (int i = 0; i < 4; i++) {
      planets[i].eraseCursor();
    }
    onSun = !onSun;
    oled.fillRect(0, 0, 128, 13, BLACK);
    oled.fillRect(30, 80, 80, 16, BLACK);
    if (onSun == true) {
      rightEnc.write(map(oldSunMeter[0], 103, 128, 0, 50) * 4);
      leftEnc.write(map(oldSunMeter[1], 1, 25, 0, 20) * 4);

    }
    delay(5);
  }
  lastSunButtonState = sunButtonState;

}
void keyBoard() {

  for (int i = 0; i < 13; i++) {
    keyboardState[i] = digitalRead(keyboardPin[i]);

    if (lastKeyboardState[i] == HIGH and keyboardState[i] == LOW) {
      if (voice[0] == LOW) {
        keyOnVoice[i] = 0;
        voice[0] = HIGH;
        for (int j = 0; j < 4; j++) {
          waveform[j]->frequency(scaleFreq[octaveOn][i]);
        }

        envelope[0]->noteOn();
      }
      else if (voice[1] == LOW) {
        voice[1] = HIGH;
        keyOnVoice[i] = 1;
        for (int j = 4; j < 8; j++) {
          waveform[j]->frequency(scaleFreq[octaveOn][i]);
        }
        envelope[1]->noteOn();
      }
      else if (voice[2] == LOW) {
        keyOnVoice[i] = 2;
        voice[2] = HIGH;
        for (int j = 8; j < 12; j++) {
          waveform[j]->frequency(scaleFreq[octaveOn][i]);
        }
        envelope[2]->noteOn();
      }
      else if (voice[3] == LOW) {
        keyOnVoice[i] = 3;
        voice[3] = HIGH;
        for (int j = 12; j < 16; j++) {
          waveform[j]->frequency(scaleFreq[octaveOn][i]);
        }
        envelope[3]->noteOn();
      }
      else {
        keyOnVoice[i] = 3;
        voice[3] = HIGH;
        for (int j = 12; j < 16; j++) {

          waveform[j]->frequency(scaleFreq[octaveOn][i]);
        }
        envelope[3]->noteOn();
      }



      delay(5);
    } else if (lastKeyboardState[i] == LOW and keyboardState[i] == HIGH) {
      envelope[keyOnVoice[i]]->noteOff();
      voice[keyOnVoice[i]] = LOW;
      delay(5);
    }

    lastKeyboardState[i] = keyboardState[i];
  }
}

float delayMix(int tap) {

  float mix = 0;
  if (tap == 0) {
    mix = mapF(float(oldPosition[0]), 0.0, 8.0, 0.0, 1.0);
  }
  else if (tap == 1) {
    mix = mapF(float(oldPosition[0]), 9.0, 24.0, 0.0, 1.0);
  }
  else if (tap == 2) {
    mix = mapF(float(oldPosition[0]), 25.0, 41.0, 0.0, 1.0);
  }
  else if (tap == 3) {
    mix = mapF(float(oldPosition[0]), 42.0, 50.0, 0.0, 1.0);
  }
  if (mix < 0.0) {
    mix = 0.0;
  }
  if (mix > 1.0) {
    mix = 1.0;
  }

  return mix;
}

void solMen() {
  typeSun(54, 0);
  typeRads(2, 0);
  typeMass(104, 0);

  oled.drawFastHLine(1, 10, 25, OLIVE);
  oled.drawFastHLine(103, 10, 25, OLIVE);
  oled.fillCircle(map(oldPosition[1], 0, 20, 1, 25), 10, 1, WHITE);
  oled.fillCircle(map(oldPosition[0], 0, 50, 103, 128), 10, 1, WHITE);
  if (map(oldPosition[1], 0, 20, 1, 25) != oldSunMeter[1]) {
    oled.fillCircle(oldSunMeter[1], 10, 1, BLACK);
  }
  if (map(oldPosition[0], 0, 50, 103, 128) != oldSunMeter[0]) {
    oled.fillCircle(oldSunMeter[0], 10, 1, BLACK);
  }
  oldSunMeter[1] = map(oldPosition[1], 0, 20, 1, 25);
  oldSunMeter[0] = map(oldPosition[0], 0, 50, 103, 128);
}

void pMenu(int p, int a) {
  if (oldMenP != p) {
    oled.fillRect(30, 0, 70, 12, BLACK);
    oled.drawFastHLine(1, 10, 25, BLACK);
    oled.drawFastHLine(103, 10, 25, BLACK);
    oled.drawFastHLine(53, 95, 25, BLACK);
    oled.drawFastHLine(1, 9, 25, BLACK);
    oled.drawFastHLine(103, 9, 25, BLACK);
    oled.drawFastHLine(53, 94, 25, BLACK);
    oled.drawFastHLine(1, 11, 25, BLACK);
    oled.drawFastHLine(103, 11, 25, BLACK);
    oled.drawFastHLine(53, 96, 25, BLACK);

  }
  if (p == 0) {
    typeP1(37, 0);
  }
  if (p == 1) {
    typeP2(51, 0);
  }
  if (p == 2) {
    typeP3(51, 0);
  }
  if (p == 3) {
    typeP4(50, 0);
  }
  typeVel(5, 0);
  typeSize(104, 0);
  typeDist(54, 85);
  oled.drawFastHLine(1, 10, 25, OLIVE);
  oled.drawFastHLine(103, 10, 25, OLIVE);
  oled.drawFastHLine(53, 95, 25, OLIVE);
  for (int i = 0; i < 3; i++) {
    if ( a == i) {
      if (i == 0) {
        if (map(oldPosition[0], 0, 50, 103, 128) != oldPlanetMeter[p][i]) {
          oled.fillCircle(oldPlanetMeter[p][i], 10, 1, BLACK);
        }
        oled.fillCircle(map(oldPosition[0], 0, 50, 103, 128), 10, 1, WHITE);
        oldPlanetMeter[p][i] = map(oldPosition[0], 0, 50, 103, 128);
      }
      if (i == 1) {
        if (map(oldPosition[0], 0, 50, 1, 26) != oldPlanetMeter[p][i]) {
          oled.fillCircle(oldPlanetMeter[p][i], 10, 1, BLACK);
        }
        oled.fillCircle(map(oldPosition[0], 0, 50, 1, 26),  10, 1, WHITE);
        oldPlanetMeter[p][i] = map(oldPosition[0], 0, 50, 1, 26);
      }
      if (i == 2) {
        if (map(oldPosition[0], 0, 50, 53, 78) != oldPlanetMeter[p][i]) {
          oled.fillCircle(oldPlanetMeter[p][i], 95, 1, BLACK);
        }
        oled.fillCircle(map(oldPosition[0], 0, 50, 53, 78),  95, 1, WHITE);
        oldPlanetMeter[p][i] = map(oldPosition[0], 0, 50, 53, 78);
      }

    } else {
      if (i == 0) {
        oled.fillCircle(oldPlanetMeter[p][i], 10, 1, color(125, 102, 134));
      }
      if (i == 1) {
        oled.fillCircle(oldPlanetMeter[p][i], 10, 1, color(125, 102, 134));
      }
      if (i == 2) {
        oled.fillCircle(oldPlanetMeter[p][i], 95, 1, color(125, 102, 134));
      }

    }
  }


  //oled.fillCircle(map(OldPosition[0]
  oldMenP = p;
}

void voiceVisuals() {
  oled.drawCircle(98, 88, 3, 0x03EF);
  oled.drawCircle(106, 88, 3, 0x03EF);
  oled.drawCircle(114, 88, 3, 0x03EF);
  oled.drawCircle(122, 88, 3, 0x03EF);
  for (int i = 0; i < 4; i++) {
    if (voice[i] == HIGH) {
      if (i == 0) {
        oled.fillCircle(98, 88, 3, 0x03EF);
      }
      if (i == 1) {
        oled.fillCircle(106, 88, 3, 0x03EF);
      }
      if (i == 2) {
        oled.fillCircle(114, 88, 3, 0x03EF);
      }
      if (i == 3) {
        oled.fillCircle(122, 88, 3, 0x03EF);
      }
    } else {
      if (i == 0) {
        oled.fillCircle(98, 88, 2, BLACK);
      }
      if (i == 1) {
        oled.fillCircle(106, 88, 2, BLACK);
      }
      if (i == 2) {
        oled.fillCircle(114, 88, 2, BLACK);
      }
      if (i == 3) {
        oled.fillCircle(122, 88, 2, BLACK);
      }
    }
  }
}

uint16_t color(int r, int g, int b) {
  uint16_t c = (((31 * (r + 4)) / 255) << 11) |
               (((63 * (g + 2)) / 255) << 5) |
               ((31 * (b + 4)) / 255);;
  return c;
}



void checkEncButtons() {
  for (int i = 0; i < 2; i++) {
    encButtonState[i] = digitalRead(encButtonPin[i]);
    if (encButtonState[i] == LOW && lastEncButtonState[i] == HIGH) {

      encButtonOn[i] = true;
      // rightSel = true;
      Serial.println(i);
      if ( i == 0) {
        planetAspect++;
        if (planetAspect > 2) {
          planetAspect = 0;
        }
      }
    }
    if (encButtonState[i] == HIGH && lastEncButtonState[i] == LOW) {
      encButtonOn[i] = false;
      //rightSel = false;
      Serial.println(i);
    }
    lastEncButtonState[i] = encButtonState[i];
  }
}
void octave() {
  for (int i = 0; i < 2; i++) {

    octaveState[i] = digitalRead(octavePin[i]);

    if (lastOctaveState[i] == HIGH and octaveState[i] == LOW) {

      if (i == 0) {
        octaveUp = true;
        octaveOn++;
        if (octaveOn > 3) {
          octaveOn = 3;
        }
        Serial.println("up");
      }
      if (i == 1) {
        octaveOn--;
        if (octaveOn < 0) {
          octaveOn = 0;
        }
        octaveDown = true;
        Serial.println("down");
      }
      delay(5);
    } else {
      if (i == 0) {
        octaveUp = false;

      }
      if (i == 1) {
        octaveDown = false;

      }
      delay(5);
    }

    lastOctaveState[i] = octaveState[i];
  }
}
