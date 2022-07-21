package BitMagic;

public class SingleElement {

    // Time Complexity - O(N)
    // Space Complexity - O(1)
    static int  findSingleElement(int [] inputArray)
    {
        int result=0;
        for(int value:inputArray)
            result^=value;
        return result;
    }

    public static void main(String[] args) {
        int []input={1,2,1,3,2,3,5,6,6};
        System.out.println(findSingleElement(input));
    }
}
