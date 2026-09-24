    #include<iostream>
using namespace std;

int main()


{
    string customer_name;
    string model ;
    int quantity ;
    float price , total_price;
    cout << "Enter your name:\t" << endl;
    cin >> customer_name;
    cout << "Enter phone model:\t" << endl;
    cin >> model;
    cout << "Enter quantity purchased:" << endl;
    cin >> quantity;
    cout << "Enter price per phone:" << endl;
    cin >> price;
    float total_sales;
    total_sales=quantity *price ;
    cout <<"\n";
    cout << "sales receipt" << endl;   
    cout << "customername:" <<customer_name<<endl;  
    cout << "phone model:" <<model <<endl;  
    cout << "Quantity purchased:" <<quantity<<endl;
    cout << "total sales:" <<total_sales<<endl;
    
        return 0;
}