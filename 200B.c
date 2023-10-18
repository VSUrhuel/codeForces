#include <stdio.h>

int main()
{
	double arr[110], n;
	double newArr[110], sum = 0.0, ans = 0.0;
	scanf("%lf", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf", &arr[i]);
		newArr[i] = arr[i]/100.0;
		sum+=newArr[i];
	}
	ans = (((double)sum)/n)*100;
	printf("%lf\n", ans);
}