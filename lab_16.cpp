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
  Color burgundy;
  // Create and initialize the Color burgundy
  burgundy.setName("Burgundy");
  burgundy.setRed(128);
  burgundy.setGreen(0);
  burgundy.setBlue(32);
  burgundy.print();  // Displays Color burgundy

  // Create and initialize the Color viridian
  Color viridian;
  viridian.setName("Viridian");
  viridian.setRed(64);
  viridian.setGreen(130);
  viridian.setBlue(109);
  viridian.print();  // Displays Color viridian

  return 0;
}