package BitMagic;

public class MissingNumber {

    static int findMissingNumber(int [] inputArray)
    {
        int result=0;
        for(int i=0;i<inputArray.length;i++)
            result^=((i+1)^inputArray[i]);
        result^=(inputArray.length+1);
        return result;
    }

    public static void main(String[] args) {
        int[] input={1,2,3,5};
        System.out.println(findMissingNumber(input));
    }
}
