#include <stdio.h> // добавляем библиотеку ввода-вывода

void ft_print_alphabet(void) { // воид в типе и в составе декларатора указывают на (а) - функция не возвращает значения, (b) - функция имеет прототип, но не имеет параметров
  char letter = 'a'; // задаем переменную "а"
  while (letter <= 'z') { // задаем цикл - пока переменная, содержащая символ "а", будет меньше или равна "z", пусть...
    putchar(letter); // выводит на экран букву на текущей позиции
    letter++; // а после инкрементирует букву (перемещает на одну позицию дальше по алфавиту)
  }
}

// http://www.pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20ft_print_alphabet%28void%29%0A%7B%0A%20%20char%20letter%20%3D%20'a'%3B%0A%20%20while%28letter%20%3C%3D%20'z'%29%0A%20%20%7B%0A%20%20%20%20putchar%28letter%29%3B%0A%20%20%20%20letter%2B%2B%3B%0A%20%20%7D%0A%7D%0A%0Aint%20main%28%29%0A%7B%0A%20%20ft_print_alphabet%28%29%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=83&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D&textReferences=false