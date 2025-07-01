#include <iostream>
#include <string>

void displayQuotes()
{
  const std::string phrase1 = "Hello, World!";
  const std::string phrase2 = "Good for health bad for education!";

  std::cout << phrase1 << std::endl;
  std::cout << phrase2 << std::endl;
}

int main()
{
  std::cout << R"(10 Best Shounen protagonists:
  - Saitama 
  - Ichigo
  - Guts
  - Kaneki 
  - Eren
  - Alucard
  - Gon
  - Yusuke 
  - Yu
  - Shinji
  
  )";

  displayQuotes();

  return 0;
}