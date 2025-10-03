// COMSC210 | Lab 14 | Tanmayee Chalamalasetti
// IDE Used: VS Code

#include <iostream>
using namespace std;

/*UML for Color class:
private:
  -red: int
  -green: int
  -blue: int
  -name: string

public:
  +getName(): string
  +setName(string): void
  +getRed(): int
  +setRed(int): void
  +getGreen(): int
  +setGreen(int): void
  +getBlue(): int
  +setBlue(int): void
  +print(): void
*/

// Initialized a Color class that represents a color with RGB values and a name
class Color {
 private:
  int red;
  int green;
  int blue;
  string name;

  // Public methods provide access to private member variables
 public:
  Color() {
    red = 0;
    green = 0;
    blue = 0;
    name = "Name";
  }

  Color(string n, int r, int g, int b) {
    name = n;
    red = r;
    green = g;
    blue = b;
  }

  Color(string n, int r) {
    name = n;
    red = r;
    green = 0;
    blue = 0;
  }

  string getName() { return name; }
  void setName(string n) { name = n; }
  int getRed() { return red; }
  void setRed(int r) { red = r; }
  int getGreen() { return green; }
  void setGreen(int g) { green = g; }
  int getBlue() { return blue; }
  void setBlue(int b) { blue = b; }

  // print() prints the color name and RGB values in a formatted manner
  void print() {
    cout << name << ": (" << red << ", " << green << ", " << blue << ")\n";
  }
};

int main() {
  // Using default constructor
  Color defaultColor;
  defaultColor.print();

  // Create and initialize the Color burgundy
  Color burgundy("Burgundy", 128, 0, 32);
  burgundy.print();  // Displays Color burgundy

  // Create and initialize the Color viridian
  Color viridian("Viridian", 64, 130, 109);
  viridian.print();  // Displays Color viridian

  // Create and initialize color using partial constructor
  Color red_Only("Red", 255);
  red_Only.print();

  return 0;
}