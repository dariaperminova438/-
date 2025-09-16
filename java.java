import java.util.ArrayList;
import java.util.List;

public class Program {
  public static void main(String[] args) {
    // Создадим список
    ArrayList<String> colors = new ArrayList<>();

    // Добавим элементы
    colors.add('Красный');
    colors.add('Синий');
    colors.add('Белый');
    System.out.println('Список: ' + colors);

    // Пример организации стека
    Stack<Integer> stack = new Stack<>();
    stack.push(1);
    stack.push(2);
    stack.push(3);
    // Напечатать стек
    System.out.println('Стек: ' + stack);
    //Извлечь элемент
    System.out.println('Извлечен: ' + stack.pop())
      
    
    
    
