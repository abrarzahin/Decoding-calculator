#include<iostream>
using namespace std;
int main()
{	char $,temp;
	int num;
	char bin[100];
	char let[40];
	cout << "Enter a half byte packed string and you will get it decoded " << endl;
	cout << "Make sure you start with $ sign , than prefix , prefix is 0100, than number of numbers and than suffix of number" << endl;
	cout << " enter codes for 'A-J' and prefix is 0100" << endl;
	cout << "Here A=0001,B=0010,C=0011,D=0100,E=0101,F=0110,G=0111,H=1000,I=1001,J=1010 \n" << endl;;
	cin.getline(bin, 70);
	if (bin[0] =='$')
		cout << "$ sign entered "<<endl;
	else 
		cout << "wrong sign ,please enter $ sign first"<<endl;
	if (bin[1]=='0'&& bin[2]=='1'&& bin[3]=='0'&& bin[4]=='0')
	cout << "prefix is ok"<<endl;
	else 
		cout << "wrong prefix "<<endl;
	if (bin[5] == '0' && bin[6] == '0' && bin[7] == '0' && bin[8] == '1')
		num = 1;
	else if 
		(bin[5] == '0' && bin[6] == '0' && bin[7] == '1' && bin[8] == '0')
		num = 2;
	else if
		(bin[5] == '0' && bin[6] == '0' && bin[7] == '1' && bin[8] == '1')
		num = 3;
	else if
		(bin[5] == '0' && bin[6] == '1' && bin[7] == '0' && bin[8] == '0')
		num = 4;
	else if
		(bin[5] == '0' && bin[6] == '1' && bin[7] == '0' && bin[8] == '1')
		num = 5;
	else if
		(bin[5] == '0' && bin[6] == '1' && bin[7] == '1' && bin[8] == '0')
		num = 6;
	else if
		(bin[5] == '0' && bin[6] == '1' && bin[7] == '1' && bin[8] == '1')
		num = 7;
	else if
		(bin[5] == '1' && bin[6] == '0' && bin[7] == '0' && bin[8] == '0')
		num = 8;
	else if
		(bin[5] == '1' && bin[6] == '0' && bin[7] == '0' && bin[8] == '1')
		num = 9;
	else if
		(bin[5] == '1' && bin[6] == '0' && bin[7] == '1' && bin[8] == '0')
		num = 10;
	else cout << "you have to put the right number of numbers";

	cout << "Number of numbers is " << num << endl;

	if (bin[9] == '0' && bin[10] == '0' && bin[11] == '0' && bin[12] == '1')
		let[0] = 'A';
	else if
		(bin[9] == '0' && bin[10] == '0' && bin[11] == '1' && bin[12] == '0')
		let[0] = 'B';
	else if
		(bin[9] == '0' && bin[10] == '0' && bin[11] == '1' && bin[12] == '1')
		let[0] = 'C';
	else if
		(bin[9] == '0' && bin[10] == '1' && bin[11] == '0' && bin[12] == '0')
		let[0] = 'D';
	else if
		(bin[9] == '0' && bin[10] == '1' && bin[11] == '0' && bin[12] == '1')
		let[0] = 'E';
	else if
		(bin[9] == '0' && bin[10] == '1' && bin[11] == '1' && bin[12] == '0')
		let[0] = 'F';
	else if
		(bin[9] == '0' && bin[10] == '1' && bin[11] == '1' && bin[12] == '1')
		let[0] = 'G';
	else if
		(bin[9] == '1' && bin[10] == '0' && bin[11] == '0' && bin[12] == '0')
		let[0] = 'H';
	else if
		(bin[9] == '1' && bin[10] == '0' && bin[11] == '0' && bin[12] == '1')
		let[0] = 'I';
	else if
		(bin[9] == '1' && bin[10] == '0' && bin[11] == '1' && bin[12] == '0')
		let[0] = 'J';

	else
		let[0] == 'temp';

	if (bin[13] == '0' && bin[14] == '0' && bin[15] == '0' && bin[16] == '1')
		let[1] = 'A';
	else if
		(bin[13] == '0' && bin[14] == '0' && bin[15] == '1' && bin[16] == '0')
		let[1] = 'B';
	else if
		(bin[13] == '0' && bin[14] == '0' && bin[15] == '1' && bin[16] == '1')
		let[1] = 'C';
	else if
		(bin[13] == '0' && bin[14] == '1' && bin[15] == '0' && bin[16] == '0')
		let[1] = 'D';
	else if
		(bin[13] == '0' && bin[14] == '1' && bin[15] == '0' && bin[16] == '1')
		let[1] = 'E';
	else if
		(bin[13] == '0' && bin[14] == '1' && bin[15] == '1' && bin[16] == '0')
		let[1] = 'F';
	else if
		(bin[13] == '0' && bin[14] == '1' && bin[15] == '1' && bin[16] == '1')
		let[1] = 'G';
	else if
		(bin[13] == '1' && bin[14] == '0' && bin[15] == '0' && bin[16] == '0')
		let[1] = 'H';
	else if
		(bin[13] == '1' && bin[14] == '0' && bin[15] == '0' && bin[16] == '1')
		let[1] = 'I';
	else if
		(bin[13] == '1' && bin[14] == '0' && bin[15] == '1' && bin[16] == '0')
		let[1] = 'J';
	else
		let[1] == 'temp';

	if (bin[17] == '0' && bin[18] == '0' && bin[19] == '0' && bin[20] == '1')
		let[2] = 'A';
	else if
		(bin[17] == '0' && bin[18] == '0' && bin[19] == '1' && bin[20] == '0')
		let[2] = 'B';
	else if
		(bin[17] == '0' && bin[18] == '0' && bin[19] == '1' && bin[20] == '1')
		let[2] = 'C';
	else if
		(bin[17] == '0' && bin[18] == '1' && bin[19] == '0' && bin[20] == '0')
		let[2] = 'D';
	else if
		(bin[17] == '0' && bin[18] == '1' && bin[19] == '0' && bin[20] == '1')
		let[2] = 'E';
	else if
		(bin[17] == '0' && bin[18] == '1' && bin[19] == '1' && bin[20] == '0')
		let[2] = 'F';
	else if
		(bin[17] == '0' && bin[18] == '1' && bin[19] == '1' && bin[20] == '1')
		let[2] = 'G';
	else if
		(bin[17] == '1' && bin[18] == '0' && bin[19] == '0' && bin[20] == '0')
		let[2] = 'H';
	else if
		(bin[17] == '1' && bin[18] == '0' && bin[19] == '0' && bin[20] == '1')
		let[2] = 'I';
	else if
		(bin[17] == '1' && bin[18] == '0' && bin[19] == '1' && bin[20] == '0')
		let[2] = 'J';
	else
		let[2] == 'temp';

	if (bin[21] == '0' && bin[22] == '0' && bin[23] == '0' && bin[24] == '1')
		let[3] = 'A';
	else if
		(bin[21] == '0' && bin[22] == '0' && bin[23] == '1' && bin[24] == '0')
		let[3] = 'B';
	else if
		(bin[21] == '0' && bin[22] == '0' && bin[23] == '1' && bin[24] == '1')
		let[3] = 'C';
	else if
		(bin[21] == '0' && bin[22] == '1' && bin[23] == '0' && bin[24] == '0')
		let[3] = 'D';
	else if
		(bin[21] == '0' && bin[22] == '1' && bin[23] == '0' && bin[24] == '1')
		let[3] = 'E';
	else if
		(bin[21] == '0' && bin[22] == '1' && bin[23] == '1' && bin[24] == '0')
		let[3] = 'F';
	else if
		(bin[21] == '0' && bin[22] == '1' && bin[23] == '1' && bin[24] == '1')
		let[3] = 'G';
	else if
		(bin[21] == '1' && bin[22] == '0' && bin[23] == '0' && bin[24] == '0')
		let[3] = 'H';
	else if
		(bin[21] == '1' && bin[22] == '0' && bin[23] == '0' && bin[24] == '1')
		let[3] = 'I';
	else if
		(bin[21] == '1' && bin[22] == '0' && bin[23] == '1' && bin[24] == '0')
		let[3] = 'J';
	else
		let[3] == 'temp';

	if (bin[25] == '0' && bin[26] == '0' && bin[27] == '0' && bin[28] == '1')
		let[4] = 'A';
	else if
		(bin[25] == '0' && bin[26] == '0' && bin[27] == '1' && bin[28] == '0')
		let[4] = 'B';
	else if
		(bin[25] == '0' && bin[26] == '0' && bin[27] == '1' && bin[28] == '1')
		let[4] = 'C';
	else if
		(bin[25] == '0' && bin[26] == '1' && bin[27] == '0' && bin[28] == '0')
		let[4] = 'D';
	else if
		(bin[25] == '0' && bin[26] == '1' && bin[27] == '0' && bin[28] == '1')
		let[4] = 'E';
	else if
		(bin[25] == '0' && bin[26] == '1' && bin[27] == '1' && bin[28] == '0')
		let[4] = 'F';
	else if
		(bin[25] == '0' && bin[26] == '1' && bin[27] == '1' && bin[28] == '1')
		let[4] = 'G';
	else if
		(bin[25] == '1' && bin[26] == '0' && bin[27] == '0' && bin[28] == '0')
		let[4] = 'H';
	else if
		(bin[25] == '1' && bin[26] == '0' && bin[27] == '0' && bin[28] == '1')
		let[4] = 'I';
	else if
		(bin[25] == '1' && bin[26] == '0' && bin[27] == '1' && bin[28] == '0')
		let[4] = 'J';
	else
		let[4] == 'temp';

	if (bin[29] == '0' && bin[30] == '0' && bin[31] == '0' && bin[32] == '1')
		let[5] = 'A';
	else if
		(bin[29] == '0' && bin[30] == '0' && bin[31] == '1' && bin[32] == '0')
		let[5] = 'B';
	else if
		(bin[29] == '0' && bin[30] == '0' && bin[31] == '1' && bin[32] == '1')
		let[5] = 'C';
	else if
		(bin[29] == '0' && bin[30] == '1' && bin[31] == '0' && bin[32] == '0')
		let[5] = 'D';
	else if
		(bin[29] == '0' && bin[30] == '1' && bin[31] == '0' && bin[32] == '1')
		let[5] = 'E';
	else if
		(bin[29] == '0' && bin[30] == '1' && bin[31] == '1' && bin[32] == '0')
		let[5] = 'F';
	else if
		(bin[29] == '0' && bin[30] == '1' && bin[31] == '1' && bin[32] == '1')
		let[5] = 'G';
	else if
		(bin[29] == '1' && bin[30] == '0' && bin[31] == '0' && bin[32] == '0')
		let[5] = 'H';
	else if
		(bin[29] == '1' && bin[30] == '0' && bin[31] == '0' && bin[32] == '1')
		let[5] = 'I';
	else if
		(bin[29] == '1' && bin[30] == '0' && bin[31] == '1' && bin[32] == '0')
		let[5] = 'J';
	else
		let[5] == 'temp';

	if (bin[33] == '0' && bin[34] == '0' && bin[35] == '0' && bin[36] == '1')
		let[6] = 'A';
	else if
		(bin[33] == '0' && bin[34] == '0' && bin[35] == '1' && bin[36] == '0')
		let[6] = 'B';
	else if
		(bin[33] == '0' && bin[34] == '0' && bin[35] == '1' && bin[36] == '1')
		let[6] = 'C';
	else if
		(bin[33] == '0' && bin[34] == '1' && bin[35] == '0' && bin[36] == '0')
		let[6] = 'D';
	else if
		(bin[33] == '0' && bin[34] == '1' && bin[35] == '0' && bin[36] == '1')
		let[6] = 'E';
	else if
		(bin[33] == '0' && bin[34] == '1' && bin[35] == '1' && bin[36] == '0')
		let[6] = 'F';
	else if
		(bin[33] == '0' && bin[34] == '1' && bin[35] == '1' && bin[36] == '1')
		let[6] = 'G';
	else if
		(bin[33] == '1' && bin[34] == '0' && bin[35] == '0' && bin[36] == '0')
		let[6] = 'H';
	else if
		(bin[33] == '1' && bin[34] == '0' && bin[35] == '0' && bin[36] == '1')
		let[6] = 'I';
	else if
		(bin[33] == '1' && bin[34] == '0' && bin[35] == '1' && bin[36] == '0')
		let[6] = 'J';
	else
		let[6] == 'temp';

	if (bin[37] == '0' && bin[38] == '0' && bin[39] == '0' && bin[40] == '1')
		let[7] = 'A';
	else if
		(bin[37] == '0' && bin[38] == '0' && bin[39] == '1' && bin[40] == '0')
		let[7] = 'B';
	else if
		(bin[33] == '0' && bin[38] == '0' && bin[39] == '1' && bin[40] == '1')
		let[7] = 'C';
	else if
		(bin[37] == '0' && bin[38] == '1' && bin[39] == '0' && bin[40] == '0')
		let[7] = 'D';
	else if
		(bin[37] == '0' && bin[38] == '1' && bin[39] == '0' && bin[40] == '1')
		let[7] = 'E';
	else if
		(bin[37] == '0' && bin[38] == '1' && bin[39] == '1' && bin[40] == '0')
		let[7] = 'F';
	else if
		(bin[37] == '0' && bin[38] == '1' && bin[39] == '1' && bin[40] == '1')
		let[7] = 'G';
	else if
		(bin[37] == '1' && bin[38] == '0' && bin[39] == '0' && bin[40] == '0')
		let[7] = 'H';
	else if
		(bin[37] == '1' && bin[38] == '0' && bin[39] == '0' && bin[40] == '1')
		let[7] = 'I';
	else if
		(bin[37] == '1' && bin[38] == '0' && bin[39] == '1' && bin[40] == '0')
		let[7] = 'J';
	else
		let[7] == 'temp';

	if (bin[41] == '0' && bin[42] == '0' && bin[43] == '0' && bin[44] == '1')
		let[8] = 'A';
	else if
		(bin[41] == '0' && bin[42] == '0' && bin[43] == '1' && bin[44] == '0')
		let[8] = 'B';
	else if
		(bin[41] == '0' && bin[42] == '0' && bin[43] == '1' && bin[44] == '1')
		let[8] = 'C';
	else if
		(bin[41] == '0' && bin[42] == '1' && bin[43] == '0' && bin[44] == '0')
		let[8] = 'D';
	else if
		(bin[41] == '0' && bin[42] == '1' && bin[43] == '0' && bin[44] == '1')
		let[8] = 'E';
	else if
		(bin[41] == '0' && bin[42] == '1' && bin[43] == '1' && bin[44] == '0')
		let[8] = 'F';
	else if
		(bin[41] == '0' && bin[42] == '1' && bin[43] == '1' && bin[44] == '1')
		let[8] = 'G';
	else if
		(bin[41] == '1' && bin[42] == '0' && bin[43] == '0' && bin[44] == '0')
		let[8] = 'H';
	else if
		(bin[41] == '1' && bin[42] == '0' && bin[43] == '0' && bin[44] == '1')
		let[8] = 'I';
	else if
		(bin[41] == '1' && bin[42] == '0' && bin[43] == '1' && bin[44] == '0')
		let[8] = 'J';
	else
		let[8] == 'temp';

	if (bin[45] == '0' && bin[46] == '0' && bin[47] == '0' && bin[48] == '1')
		let[9] = 'A';
	else if
		(bin[45] == '0' && bin[46] == '0' && bin[47] == '1' && bin[48] == '0')
		let[9] = 'B';
	else if
		(bin[45] == '0' && bin[46] == '0' && bin[47] == '1' && bin[48] == '1')
		let[9] = 'C';
	else if
		(bin[45] == '0' && bin[46] == '1' && bin[47] == '0' && bin[48] == '0')
		let[9] = 'D';
	else if
		(bin[45] == '0' && bin[46] == '1' && bin[47] == '0' && bin[48] == '1')
		let[9] = 'E';
	else if
		(bin[45] == '0' && bin[46] == '1' && bin[47] == '1' && bin[48] == '0')
		let[9] = 'F';
	else if
		(bin[45] == '0' && bin[46] == '1' && bin[47] == '1' && bin[48] == '1')
		let[9] = 'G';
	else if
		(bin[45] == '1' && bin[46] == '0' && bin[47] == '0' && bin[48] == '0')
		let[9] = 'H';
	else if
		(bin[45] == '1' && bin[46] == '0' && bin[47] == '0' && bin[48] == '1')
		let[9] = 'I';
	else if
		(bin[45] == '1' && bin[46] == '0' && bin[47] == '1' && bin[48] == '0')
		let[9] = 'J';
	else
		let[9] == 'temp';

	cout << " decode  : ";
	for (int i = 0; i<num; i++) {
		if (let[i] == 'temp') {
			cout << " Wrong suffix ";
			break;}
		cout << let[i] << " ";	
	}
	system("pause");
	return 0;
}