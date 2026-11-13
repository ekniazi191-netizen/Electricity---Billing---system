#include<iostream>
using namespace std;
int main ()
{
	int units;
	int late; // 1 =late,0 =0n time
	float bill = 0, surcharge = 0, latefee = 0, finalbill = 0;
	cout<< "enter consumed unit";
	cin>> units;
	cout<<"payment late? (1 for yes ,0 for no)";
	if (units<=100){bill =units*10;
	}
	else if(units<= 200)  {
		bill = (100*10) + (units - 100) * 15;
	}
	else {  bill = (100*10) + (100*15) + (300*20)+(units-500)* 25;
	}
	if (bill>1000) { surcharge = bill * 0.05;
	}
	
	finalbill  = bill + surcharge;
	if (late== 1)  { latefee = finalbill * 0.10;
	finalbill = finalbill + latefee;
	}
cout<<  "\n--- electricity bill ---\n";
cout<<  "units consumed:"<<units<<endl;
cout<<"basic bill:"<<bill<<endl;
cout<<"surcharge (5%):"<<surcharge<<endl;
cout<<"late fee (10%):"<<latefee<<endl;
cout<<"finalbill:"<<finalbill<<endl;
return 0;
}
