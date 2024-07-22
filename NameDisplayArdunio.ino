/* Name: Rowa Ahmed
 * CWL: rahmed 14
 * Email: rahmed14@student.ubc.ca
 * Student Number: 30761746
 * Lab: L1S
 */


// positions of the switch
#define LEFT LOW
#define RIGHT HIGH

// symbolic constants for INPUT/OUTPUT pins
int const A = 11;
int const B = 10;
int const C = 7;
int const D = 8;
int const E = 9;
int const F = 12;
int const G = 13;
int const H = 6;

// code to switch pin
int const SWITCH_PIN = 5;

// function to turn off the 7-segment display
void turnOffDisplay();

// function to display each letter
void displayLetter(char letter);

//Sset up my code using pinMode()

void setup(void)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
}

void loop(void)
{
  // check the state of the switch
  int switchPosition = digitalRead(SWITCH_PIN);

  if (switchPosition == RIGHT)
  {
    // if switch=right, the letters display
    
    displayLetter('R');
    if (switchPosition == LEFT) return;

    displayLetter('o');
    if (switchPosition == LEFT) return;

    // It was hard to make a lower w, so it looks more like an 3
    displayLetter('w');
    if (switchPosition == LEFT) return;

    // It was hard to make a lower a, so it looks more like an o
    displayLetter('a');
    if (switchPosition == LEFT) return;

    displayLetter('A');
    if (switchPosition == LEFT) return;

    displayLetter('h');
    if (switchPosition == LEFT) return;

    // It was hard to make a lower m, so it looks more like an opposite 3
    displayLetter('m');
    if (switchPosition == LEFT) return;

    displayLetter('e');
    if (switchPosition == LEFT) return;

    displayLetter('d');
    if (switchPosition == LEFT) return;
  }
  else
  {
    // Switch is in the left position, turn off the display
    turnOffDisplay();
  }
}

// Below, is the function that I used to turn off (also could be named as reset() the 7-segment display
void turnOffDisplay()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

// Here, I have the function to display a single letter on the 7-segment display
void displayLetter(char letter)
{
  // Display each letter based on the provided patterns
  if (letter == 'R') {
    // 'R' pattern
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'o') {
    // 'o' pattern
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'w') {
    // 'w' pattern
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'a') {
    // 'a' pattern
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'A') {
    // 'A' pattern
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'h') {
    // 'h' pattern
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'm') {
    // 'm' pattern
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'e') {
    // 'e' pattern
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  } 
  else if (letter == 'd') {
    // 'd' pattern
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(H, LOW);
    delay(1000);
    turnOffDisplay();
    delay(500);
  }
}



















