#include<iostream>

using namespace std;
int binary(int myarray[],int u, int d, int z)
{
    if(d>=1)
    {
        int mid = u + (d-u) / 2;
        
        if(myarray[mid]==z)
        return mid;

        if(myarray[mid] > z)
        return binary(myarray, u, mid - 1 ,z);

        return binary(myarray, mid + 1, d , z);
    }
    return -1;

}

int main(void)
{
    int myarray[] = { 3,5,10,13,15};
    int z = 15;
    int n = sizeof(myarray) / sizeof(myarray[0]);
    int result = binary(myarray, 0 , n-1, z);
    (result == -1)
 
 ?cout << "element is not present in array"
 :cout<< "element is present at index " << result;
 return 0;

}
