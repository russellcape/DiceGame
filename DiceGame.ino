/*
Creation Crate Dice Game
Push the button to roll the dice!
*/

// Step 1: Define inputs/outputs and key variables

#define button 3
#define ledSet1 4
#define ledSet2 5
#define ledSet3 6
#define ledSet4 7
// buttonState will determine if the button is on or off.
int buttonState;
// roll will be used to store a random number between 1 and 6.
int roll;
// time is a value measured in milliseconds.
int time = 2000;

// Step 2: Create setup loop

void setup () {
  //INPUT or OUTPUT?
  pinMode (ledSet1, OUTPUT);
  pinMode (ledSet2, OUTPUT);
  pinMode (ledSet3, OUTPUT);
  pinMode (ledSet4, OUTPUT);
  pinMode (button, INPUT);
  randomSeed(analogRead(0));
}

// Step 3: Create the Main Loop

void loop() {
  buttonState = digitalRead(button);
  // Turn the button on using HIGH or LOW.
  if (buttonState == ) {
    // Here, we are rolling a number to 1 and less than 7 (1-6).
    roll = random(1, 7);
    // Each roll needs a certain combination of ledSets to turn on. Fill in the blanks with the correct ledSets: ie. 'ledSet4'.
    if (roll == 1) {
      digitalWrite (ledSet3, HIGH);
    }
    else if (roll == 2) {
      digitalWrite (ledSet2, HIGH);
    }
    else if (roll == 3) {
      digitalWrite (ledSet2, HIGH);
      digitalWrite (ledSet3, HIGH);
    }
    else if (roll == 4) {
      digitalWrite (ledSet2, HIGH);
      digitalWrite (ledSet4, HIGH);
    }
    else if (roll == 5) {
      digitalWrite (ledSet2, HIGH);
      digitalWrite (ledSet3, HIGH);
      digitalWrite (ledSet4, HIGH);
    }
    else if (roll == 6) {
      digitalWrite (ledSet1, HIGH);
      digitalWrite (ledSet2, HIGH);
      digitalWrite (ledSet4, HIGH);
    }
    else {}
    Serial.print ("You rolled a ");
    Serial.println (roll);
    delay (time);
  }

  // Fill in the blanks to turn the LEDs off.
  digitalWrite (ledSet1, LOW);
  digitalWrite (ledSet2, LOW);
  digitalWrite (ledSet3, LOW);
  digitalWrite (ledSet4, LOW);
}
