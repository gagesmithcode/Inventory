#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
/*
* Name: Inventory()
* Parameters: string name, float price, int count
* Description: a base constructor for the Inventory class object
*
*/  
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
* Name: sell()
* Parameters: none
* Description: a simple function to "sell" a product by 
*         decrementing its stock value by 1.
* Return: void
*/  
void Inventory::sell()
{
  if(m_in_stock > 0)
  {
    m_in_stock--;
  }
  else
  {
    cout << "Sorry, that item is out of stock" << endl;
  }
  
}

/*
* Name: Inventory()
* Parameters: ostream& stream, const Inventory& item
* Description: a overloaded operator function to print invetory items
*       pushed to the "<<" operator.
* Return: ostream reference
*/  
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}