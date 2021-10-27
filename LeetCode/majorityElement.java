class Solution 
{
    public int majorityElement(int[] nums) 
    {
        Arrays.sort(num);
        if (num.length == 1) 
        {
		return num[0];
	    }

	return num[num.length / 2];
    }
}