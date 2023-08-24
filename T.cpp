#include<bits/stdc++.h>
using namespace std;


void Takeinput()
{

   #ifndef ONLINE_JUDGE
   freopen("inputfile.txt","r",stdin);
   freopen("outputfile.txt","w",stdout);
   #endif
}


// // FOR LOOP IN C++

// for(int i = 0 ; i < n ; i++){
// 	//works
// }

// for(int i = 1 ; i < 100 ; i*=2){
// 	//1 2 4 8 16 32 64
// }

// //while

// int i = 0 ;
// while(true){
// 	cout<<i<<" ";//0 1 2 3 4 5 6 7 8 9
// 	//work
// 	i++;
// 	if( i >=10){//10>=10
// 		break;
// 	}
// }

// while(i >= 10){
// 	i++;
// 	cout<<i<<" ";//1 2 3 4 ..10
// 	i++;//10
// }

bool comp(string a, string b){
	if(a.length() == b.length()){
		return a < b;
	}
	return a.size() > b.size();
}


int main()
{

	ios::sync_with_stdio(0);   
   cin.tie(0); 


	//n = 23456
	Takeinput();
	// int n = 23456;
	// cin>>n;
	// int temp =0;
	// while(n){
	// 	int rem = n % 10;
	// 	n = n/10;
	// 	temp = temp * 10 + rem;
	// }
	// cout<<temp<<endl;

	// // arrays :
	// int arr[5] = {2,3,4,5,6};
	// int len = sizeof(arr)/sizeof(int);
	// int key = 3;


	//unsorted array
	//find function
	// auto it = find(arr,arr+len,key);//o(n)
	// //pointer *it can be used as it is a addresses
	// int indx = it - arr;
	// cout<<indx<< endl;
	// if(indx == len)
	// {

	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"NO"<<endl;
	// }

	//sorted array
	//time complexity O(log2(n))
	// int A[8] = {2,35,6,8,9,91,7,7};
	// key = 16;
	// int state = binary_search(A,A+8,key);
	// if(state == 1)
	// {
	// 	cout<<"Yes";
	// }
	// else{
	// 	cout<<"No";
	// }



	// //sorting function in c++
	// sort(arr,arr+len);


	// //lower bound and upperbound
	// int A[15] = {2,35,6,8,9,9,9,9,9,91,7,7};
	// int key = 7;

	// //key's first occurence of key
	// auto it = lower_bound(A,A+10,key);
	// int lower_ind = it-A;
	// cout<<lower_ind<<endl;

	// //key's next value
	// auto i = upper_bound(A,A+10,key);
	// int upper_bound = i-A;
	// cout<<upper_bound<<endl;


	// string s = "I love c++";
	// string s1("hello");
	// char A[] = {'a','b','c','\0'};//'\0' indicates end of the string
	// string s4(A);
	// string s0 = s;
	// cout<<s0<<endl;
	// cout<<s<<endl;
	// cout<<s1<<endl;

	// //adding 
	// s+="and python";
	// s1.append(" and python");
	// cout<<s1<<endl;


	// //remove

	// s1.clear();
	// cout<<s1.size();


	// for(int i = 0 ; i < s1.size(); i++){
	// 	cout<<s1[i]<<" ";
	// }

	// for(char i:s1){
	// 	cout<<i<<" ";
	// }

	// // finding
	// char c = 'e';
	// auto sit = find(s1.begin(),s1.end(),c);
	// cout<<c<<endl;


// // array with strings based on lexiograpghically 
// 	int n;
// 	cin>>n;
// 	cin.get();//for spaces in the data
// 	string arr[n];
// 	for(int  i = 0 ; i < n ; i++)
// 	{
// 		getline(cin,arr[i]);
// 	}

// 	sort(arr,arr+n,comp);
// 	for(int i = 0 ; i < n ; i ++)
// 	{
// 		cout<<arr[i]<<endl;
// 	}



	// string tokenizer separate them according to requriment
	char s[100] = "i,love,to,docoding";
	
	char *ptr = strtok(s," ");
	cout<<ptr<<endl;


	while(ptr!=NULL){
		char *ptr1 = strtok(NULL,",");
		cout<<ptr<<endl;
	}




}




