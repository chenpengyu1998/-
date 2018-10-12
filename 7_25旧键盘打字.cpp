////¾É¼üÅÌ´ò×Ö
////https://www.nowcoder.com/profile/649256/codeBookDetail?submissionId=12731091
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string a, b;
//    cin >> a >> b;
//    bool capsbroken = false;
//    for (int j = 0; j < a.size(); j++)
//    {
//        if ('+' == a[j])
//        {
//            capsbroken = true;
//            break;
//        }
//    }
//    bool output;
//    int i, j;
//    for (i = 0; i < b.size(); i++)
//    {
//        output = true;
//        for (j = 0; j < a.size(); j++)
//        {
//            if (b[i] == a[j]) {
//                output = false; break;
//            }
//            else if (abs(b[i] - a[j]) == 32) {
//                if (isalpha(b[i]) && isalpha(a[j])) {
//                    output = false; break;
//                }
//            }
//        }
//        if (output)
//        {
//            if (capsbroken)
//            {
//                if (b[i] >= 'A'&&b[i] <= 'Z') {}
//                else
//                    cout << b[i];
//            }
//            else
//                cout << b[i];
//        }
//    }
//    cout << endl;
//    return 0;
//}