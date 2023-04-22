#pragma once
// Constant definitions
enum COLORS { BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };

void clearScreen(void);
void setColors(int fg, int bg);
void resetScreen(void);