//others source by fredo

#include<bits/stdc++.h>

using namespace std;

int cnt[3];
long long ans;

int main(){
	char c;
	int acc = 0;

	cnt[0] = 1;
	while ((c = getchar())){
		if (!isdigit(c)){
			acc = 0;
			cnt[0] = 1;
			cnt[1] = cnt[2] = 0;
			if (isalpha(c)) continue;
			else break;
		}
		acc = (acc + c - '0') % 3;
		ans += cnt[acc];
		cnt[acc]++;
		cout<<acc<<endl;
	}

	printf("%lld\n", ans);
}
// others solution

