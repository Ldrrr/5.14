void moveZeroes(int* nums, int numsSize)
{
	int a[numsSize],i,k=0;
	for(i=0;i<numsSize;i++)
	{
		a[i]=nums[i];
	}
	for(i=0;i<numsSize;i++)
	{
		if(a[i]!=0)
		{
			nums[k++]=a[i];
		}
	}
	for(i=k;i<numsSize;i++)
	{
		nums[i]=0;
	}
 }
