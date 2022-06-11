import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class ReadingFile {
    /*
     * The Scanner class inherits from the Iterator, so it behaves like one.
     * The file's contents are output word by word, because the next() method
     * returns each word separately.
     */
    public static void main(String[] args) {
        try {
            File file = new File("Java\\6. Exceptions, Lists, Threads & Files\\12.txt");
            Scanner scanner = new Scanner(file);

            while (scanner.hasNext()) {
                System.out.println(scanner.next());
            }

            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("Error");
        }
    }
}
