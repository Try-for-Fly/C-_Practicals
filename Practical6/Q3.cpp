#include <iostream>
using namespace std;

int main()
{
    int x, y, i, j;

    cout << "Enter number of rows: ";
    cin >> x;

    cout << "Enter number of columns: ";
    cin >> y;
    
    int a[x][y], b[x][y];

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < x; i++)
       for(j = 0; j < y; j++)
       {
       		cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < x; i++)
       for(j = 0; j < y; j++)
       {
    		cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
	
	int sum[x][y];
	
    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < x; i++){
    	for(j = 0; j < y; j++)
        {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
	}
        

    return 0;
}
