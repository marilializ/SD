<<<<<<< HEAD
const int buttonPin = 2;
const int ledPin = 3;
const int ledPin2 = 4;
const int ledPin3 = 5;
const int ledPin4 = 6;

int buttonState = 0;
int cont = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW {
    digitalWrite(ledPin4, HIGH);
    cont++;

  } else {
    digitalWrite(ledPin4, LOW);

    if (cont == 1) {
      digitalWrite(ledPin, LOW);

    } else if (cont == 2) {
      digitalWrite(ledPin2, LOW);

    } else {
      digitalWrite(ledPin3, LOW);
    }
  }
=======
const int buttonPin = 2;
const int ledPin = 3;
const int ledPin2 = 4;
const int ledPin3 = 5;
const int ledPin4 = 6;

int buttonState = 0;
int cont = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin4, LOW);

  } else {
    digitalWrite(ledPin4, LOW);
    cont++;

    if (cont == 1) {
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin, LOW);

    } else if (cont == 2) {
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin, HIGH);

    } else {
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin, HIGH);
    }
  }
>>>>>>> 2359729459980b6aca3316d5ee77705e497fb469
}