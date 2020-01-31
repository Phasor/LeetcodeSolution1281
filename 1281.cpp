//program takes and int and returns the difference between its digits product and its digits sum

#include <vector>
#include <iostream>

int subtractProductAndSum(int n);
        
int main(void) 

{

int input = 1234;
int n = subtractProductAndSum(input);
std::cout<< n;

return 0;

}


int subtractProductAndSum(int n)
{
std::vector<int> product;

while (n>0) 
{

  int temp = n % 10;
  product.push_back(n);
  n = n/ 10;

}

int productResult = 1;
std::vector<int>::iterator it;

for (it = product.begin(); it != product.end(); ++it) 
{
    productResult = productResult * (*it);

}

int sum = 0;


for (it = product.begin(); it != product.end(); ++it) 
{

  sum = sum + (*it);

}

return (productResult - sum);
    
}


