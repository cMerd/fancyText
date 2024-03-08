#include <iostream>
#include <string>
#include <vector>
#include <map>

std::map<char, std::vector<std::string>> fancy_chars = {
  {'a', {
    "AAAAA",
    "A   A",
    "AAAAA",
    "A   A",
    "A   A"
  }},
  {'b', {
    "BBBBB",
    "B  BB",
    "BBBB ",
    "B  BB",
    "BBBBB"
  }},
  {'c', {
    " CCC ",
    "C   C",
    "C    ",
    "C   C",
    " CCC ",
  }},
  {'d', {
    "DDDD ",
    "D   D",
    "D   D",
    "D   D",
    "DDDD "
  }},
  {'e', {
    "EEEEE",
    "E    ",
    "EEEE ",
    "E    ",
    "EEEEE"
  }},
  {'f', {
    "FFFFF",
    "F    ",
    "FFF  ",
    "F    ",
    "F    "
  }},
  {'g', {
    " GGGG",
    "G    ",
    "G GGG",
    "G   G",
    " GGGG"
  }},
  {'h', {
    "H   H",
    "H   H",
    "HHHHH",
    "H   H",
    "H   H"
  }},
  {'i', {
    " III ",
    "  I  ",
    "  I  ",
    "  I  ",
    " III "
  }},
  {'j', {
    "   J ",
    "     ",
    "   J ",
    "   J ",
    " JJJ "
  }},
  {'k', {
    "K   K",
    "K  K ",
    "KKK  ",
    "K  K ",
    "K   K"
  }},
  {'l', {
    "L    ",
    "L    ",
    "L    ",
    "L    ",
    "LLLL "
  }},
  {'m', {
    "M   M",
    "MM MM",
    "M M M",
    "M   M",
    "M   M"
  }},
  {'n', {
    "N   N",
    "NN  N",
    "N N N",
    "N  NN",
    "N   N"
  }},
  {'o', {
    " OOO ",
    "O   O",
    "O   O",
    "O   O",
    " OOO "
  }},
  {'p', {
    "PPPP ",
    "P   P",
    "PPPP ",
    "P    ",
    "P    "
  }},
  {'q', {
    " QQQ ",
    "Q   Q",
    "Q   Q",
    " QQQ ",
    "  Q  ",
  }},
  {'r', {
    "RRRR ",
    "R   R",
    "RRRR ",
    "R  R ",
    "R   R"
  }},
  {'s', {
    " SSSS",
    "S   S",
    " SS  ",
    "   SS",
    "SSSS "
  }},
  {'t', {
    "TTTTT",
    "  T  ",
    "  T  ",
    "  T  ",
    "  T  "
  }},
  {'u', {
    "U   U",
    "U   U",
    "U   U",
    "U   U",
    " UUU "
  }},
  {'v', {
    "V   V",
    "V   V",
    " V V ",
    " V V ",
    "  V  "
  }},
  {'w', {
    "W W W",
    "W W W",
    "WW WW",
    " W W ",
    " WWW "
  }},
  {'x', {
    "X   X",
    " X X ",
    "  X  ",
    " X X ",
    "X   X"
  }},
  {'y', {
    "Y   Y",
    " Y Y ",
    "  Y  ",
    "  Y  ",
    "  Y  "
  }},
  {'z', {
    "ZZZZZ",
    "   Z ",
    "  Z  ",
    " Z   ",
    "ZZZZZ",
  }},
  {'1', {
    "  1  ",
    " 11  ",
    "  1  ",
    "  1  ",
    " 111 "
  }},
  {'2', {
    " 222 ",
    "2   2",
    "  22 ",
    " 22  ",
    "2222 "
  }},
  {'3', {
    " 333 ",
    "3   3",
    "  333",
    "3   3",
    " 333 "
  }},
  {'4', {
    "   4 ",
    "  44 ",
    " 4 4 ",
    " 4444",
    "   4 "
  }},
  {'5', {
    "5555 ",
    "5    ",
    " 555 ",
    "    5",
    "5555 "
  }},
  {'6', {
    "66666",
    "6    ",
    "66666",
    "6   6",
    "66666"
  }},
  {'7', {
    "77777",
    "7  7 ",
    "  7  ",
    " 7   ",
    "7    "
  }},
  {'8', {
    "88888",
    "8   8",
    "88888",
    "8   8",
    "88888"
  }},
  {'9', {
    "99999",
    "9   9",
    "99999",
    "    9",
    " 9999"
  }}, 
  {'0', {
    " 000 ",
    "0   0",
    "0   0",
    "0   0",
    " 000 "
  }},
  {'.', {
    "     ",
    "     ",
    "     ",
    " ..  ",
    " ..  "
  }},
  {'!', {
    "  !  ",
    "  !  ",
    "  !  ",
    "     ",
    "  !  "
  }},
  {',', {
    "     ",
    "     ",
    "     ",
    " ,,  ",
    "  ,  "
  }},
  {'?', {
    " ??? ",
    "?   ?",
    "  ?? ",
    "     ",
    "  ?  "
  }},
  {' ', {
    "     ",
    "     ",
    "     ",
    "     ",
    "     "
  }}
};

void print_fancy(const std::string& str) {
  for (int i = 0; i < 5; i++) {
    for (size_t j = 0; j < str.size(); j++) {
      std::cout << fancy_chars[str[j]][i] << ' ';
    }
    std::cout << std::endl;
  } 
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <text>" << std::endl;
    return 1;
  }
  const std::string valid = "abcdefghijklmnopqrstuvwxyz1234567890.,!? ";
  std::string text = std::string(argv[1]);
  for (size_t i = 0; i < text.size(); i++) {
    text[i] = tolower(text[i]);
    if (valid.find(text[i]) == std::string::npos) {
      std::cerr << "Invalid character: " << text[i] << std::endl;
      return 2;
    }
  }
  print_fancy(text);
  return 0;
}

