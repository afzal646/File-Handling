#include <iostream>
#include <fstream>
#include <string>
#define colmax 6
#define rowmax 14
using namespace std;
int main()
{
	ifstream x;   ofstream y;   string name;	int i,j;	
	x.open("project.txt");		y.open("data.html");
	y << " <html> \n <head> \n <style> \n";
	y << " \n table,th,td {border-collapse:collapse; border-color:red; padding:10px; text-align:center; text-valign:middle} \n </style> \n";
	y << "</head> \n <body bgcolor=#C0C0C0> \n <h1 style=font-style:oblique align=center> \n Data Of Members \n </h1> \n";
	y << "<table  border=3  width=100%> \n <tr>" << endl;
	
	for(i=1; i<=colmax; i++)
	{
		getline(x,name,'\t');
		//x >> name;
		y << "<th bgcolor=#808080>" << name << "</th> ";
		y << endl;
	}
	y << "</tr>";
	
	// other loop----------------------
	
	for(j=1; j<=rowmax; j++)
	{		
	y << "<tr>";
	for(i=1; i<=colmax; i++)
	{
		getline(x,name,'\t');
		//x >> name;
		y << "<td bgcolor=silver>" << name << "</td> ";
		y << endl;
	}
	y << "</tr>";
	}
	y << "\n </table> \n </body> \n </html>";
	x.close();		y.close();

	 
	 return 10;
}
