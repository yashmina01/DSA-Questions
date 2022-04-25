vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j=m-1;
	int carry = 0;
	vector<int> ans;
	
	while(i>=0 && j>=0){
		int value1 = a[i];
		int value2 = b[j];
		
		int sum = value1 + value2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--; j--;
	}
	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	
	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	
	while(carry!=0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	reverse(ans.begin() , ans.end());
	return ans;
}