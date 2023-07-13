public class Solution
{
    public int[] PlusOne(int[] digits)
    {

        int carry = 1;

        for (int i = digits.Length - 1; i >= 0; i--)
        {
            carry = carry + digits[i];
            digits[i] = carry % 10;
            carry /= 10;
        }
        if (carry == 0) return digits;

        int[] newDigits = new int[digits.Length + 1];
        newDigits[0] = 1;
        return newDigits;
    }
}
