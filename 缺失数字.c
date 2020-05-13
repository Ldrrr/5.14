int missingNumber(int* nums, int numsSize)
{
	int i,s=numsSize*(1+numsSize)/2;
	for(i=0;i<numsSize;i++)
	{
		s-=nums[i];
	}
	return s;
}
