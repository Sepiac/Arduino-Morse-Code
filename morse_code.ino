//int ledPin = LED_BUILTIN;
int ledPin = 0;
int ditDelay = 150;
int dahDelay = ditDelay * 3;
int letterDelay = ditDelay * 3;
int wordDelay = ditDelay * 3 * 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  broadCastString("hello world");
  delay(wordDelay);
}

void broadCastString(String message) {
  for (int i=0; i < message.length(); i++) {
    broadCastChar(message[i]);
  }
}

void broadCastChar(char _c) {
  switch(_c) {
    case 'a':
      a();
      break;
    case 'b':
      b();
      break;
    case 'c':
      c();
      break;
    case 'd':
      d();
      break;
    case 'e':
      e();
      break;
    case 'f':
      f();
      break;
    case 'g':
      g();
      break;
    case 'h':
      h();
      break;
    case 'i':
      i();
      break;
    case 'j':
      j();
      break;
    case 'k':
      k();
      break;
    case 'l':
      l();
      break;
    case 'm':
      m();
      break;
    case 'n':
      n();
      break;
    case 'o':
      o();
      break;
    case 'p':
      p();
      break;
    case 'q':
      q();
      break;
    case 'r':
      r();
      break;
    case 's':
      s();
      break;
    case 't':
      t();
      break;
    case 'u':
      u();
      break;
    case 'v':
      v();
      break;
    case 'w':
      w();
      break;
    case 'x':
      x();
      break;
    case 'y':
      y();
      break;
    case 'z':
      z();
      break;
    case ' ':
      delay(wordDelay);
      break;
  }
}

void a() {
  dit();
  dah();
  delay(letterDelay);
}

void b() {
  dah();
  dit();
  dit();
  dit();
  delay(letterDelay);
}

void c() {
  dah();
  dit();
  dah();
  dit();
  delay(letterDelay);
}

void d() {
  dah();
  dit();
  dit();
  delay(letterDelay);
}

void e() {
  dit();
  delay(letterDelay);
}

void f() {
  dit();
  dit();
  dah();
  dit();
  delay(letterDelay);
}

void g() {
  dah();
  dah();
  dit();
  delay(letterDelay);
}

void h() {
  dit();
  dit();
  dit();
  dit();
  delay(letterDelay);
}

void i() {
  dit();
  dit();
  delay(letterDelay);
}

void j() {
  dit();
  dah();
  dah();
  dah();
  delay(letterDelay);
}

void k() {
  dah();
  dit();
  dah();
  delay(letterDelay);
}

void l() {
  dit();
  dah();
  dit();
  dit();
  delay(letterDelay);
}

void m() {
  dah();
  dah();
  delay(letterDelay);
}

void n() {
  dah();
  dit();
  delay(letterDelay);
}

void o() {
  dah();
  dah();
  dah();
  delay(letterDelay);
}

void p() {
  dit();
  dah();
  dah();
  dit();
  delay(letterDelay);
}

void q() {
  dah();
  dah();
  dit();
  dah();
  delay(letterDelay);
}

void r() {
  dit();
  dah();
  dit();
  delay(letterDelay);
}

void s() {
  dit();
  dit();
  dit();
  delay(letterDelay);
}

void t() {
  dah();
  delay(letterDelay);
}

void u() {
  dit();
  dit();
  dah();
  delay(letterDelay);
}

void v() {
  dit();
  dit();
  dit();
  dah();
  delay(letterDelay);
}

void w() {
  dit();
  dah();
  dah();
  delay(letterDelay);
}

void x() {
  dah();
  dit();
  dit();
  dah();
  delay(letterDelay);
}

void y() {
  dah();
  dit();
  dah();
  dah();
  delay(letterDelay);
}

void z() {
  dah();
  dah();
  dit();
  dit();
  delay(letterDelay);
}


void dit() {
  digitalWrite(ledPin, HIGH);
  delay(ditDelay);
  digitalWrite(ledPin, LOW);
  delay(ditDelay);
}

void dah() {
  digitalWrite(ledPin, HIGH);
  delay(dahDelay);
  digitalWrite(ledPin, LOW);
  delay(ditDelay);
}
