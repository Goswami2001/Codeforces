
//Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

//But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

//This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    int ans = 0;
    //cout<<"Enter the name to find out : ";
    cin>>str;
    sort(str.begin(),str.end());
    for(int i = 0;i < str.size();i++){
        if(str[i] != str[i+1])
            ans++;
        
    }
    //cout<<ans;  To check how many distict are there
    if(ans% 2 == 0)
        cout<< "CHAT WITH HER!";
    
    else
        cout<< "IGNORE HIM!";
    
    return 0;
}