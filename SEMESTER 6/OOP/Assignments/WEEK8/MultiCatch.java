public class MultiCatch {
    public static void main(String[] args) {
        String str = "String";
        Object arr[] = new Integer[] { 1, 2, 3, 4, 5 };

        try {
            str.charAt(0);
            str.charAt(9);
            System.out.println(arr[9]);
            arr[4] = '6';
            // throw new Exception();
            throw new Throwable("Testing a Throwable Exception");
        } catch (StringIndexOutOfBoundsException error) {
            System.out.println("String index too high");
        } catch (IndexOutOfBoundsException error) {
            System.out.println("Index too high");
        } catch (RuntimeException error) {
            System.out.println("Runtime Exception");
        } catch (Exception error) {
            System.out.println("Exception");
        } catch (Throwable error) {
            System.out.println("Throwable");
        }
    }
}
