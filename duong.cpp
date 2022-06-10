#include <bits/stdc++.h>
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

class hang
{
private:
    int ma;
    string tenhang;
    ll gia;

public:
    friend class hoadon;
    void nhap()
    {
        cin >> ma >> tenhang >> gia;
    }
    void xem()
    {
        cout << ma << " " << tenhang << " " << gia;
    }
};
class banggia : public hang
{
private:
    vector<hang> dshang;
    int TS;

public:
    friend class hoadon;
    void nhapbp()
    {
        cout << "TS: ";
        cin >> TS;
        cout << "Ma  Ten hang  Gia" << endl;
        hang x;
        for (int i = 0; i < TS; i++)
        {
            x.nhap();
            dshang.push_back(x);
        }
    }
    void xemmh()
    {
        cout << "Ma  Ten hang  Gia" << endl;
        for (int i = 0; i < TS; i++)
        {
            dshang[i].xem();
            cout << endl;
        }
    }
};
class hangban : public hang
{
private:
    ll soluong;
    ll thanhtien;
    ll ma1;
public:
    friend class hoadon;
    void xem1()
    {
        cout << soluong << " " << thanhtien << endl;
    }
};
class hoadon{
private:
    ll sohoadon;
    string khachhang;
    vector<hangban> dshangban;
    ll tongtien;
    ll TS;
    banggia b;
    vector<hang> ds;

public:
    void nhapbp(banggia a){
        cout << "So HD: ";
        cin >> sohoadon;
        cout << "Khachhang: ";
        cin.ignore();
        getline(cin, khachhang);
        //  cin >> khachhang;
        cout << "TS: ";
        cin >> TS;
        b = a;
    }
    void ghitep(){
        fstream fout;
        fout.open("a.txt", ios::out);
        fout << sohoadon << endl;
        fout << khachhang << endl;
        fout << TS << endl;
        for (int i = 0; i < b.dshang.size(); i++){
            fout << b.dshang[i].ma << " " << b.dshang[i].tenhang << " " << b.dshang[i].gia;
            fout << endl;
        }
    }
    void doctep(){
        fstream fin;
        fin.open("a.txt", ios::in);
        int count = 0;
        vector<string> res;
        string s;
        while (!fin.eof()){
            if (count == 0){
                fin >> s;
                fin.ignore();
                res.push_back(s);
                count++;
            }
            else if (count == 1){
                getline(fin, s);
                res.push_back(s);
                count++;
            }
            else if (count == 2){
                getline(fin, s);
                TS = stoi(s);
                count++;
            }
            else{
                getline(fin, s);
                stringstream ss(s);
                string tmp;
                vector<string> handle;
                hang x;
                while (ss >> tmp){
                    handle.push_back(tmp);
                }
                for(int i = 0; i < handle.size(); i++){
                    if(i == 0){
                        ll zip = stoi(handle[i]);
                        x.ma = zip;
                    }
                    else if(i == 1){
                        x.tenhang = handle[i];
                    }
                    else if(i == 2){
                        ll pri = stoi(handle[i]);
                        x.gia = pri;
                    }
                }
                ds.push_back(x);
            }
        }
        cout << "Ma" << " " << "SL" << endl;
        hangban y;
        for(int i = 0; i < TS; i++) {
            cin >> y.ma1;
            cin >> y.soluong;
            for (int j = 0; j < ds.size(); j++){
                if(y.ma1 == ds[j].ma){
                    y.thanhtien = y.soluong * ds[j].gia;
                    break;
                }
            }
            dshangban.push_back(y);
        }
        cout << "So HD: " << res[0] << " " << "Khachhang:" << res[1] << endl;
    }
    void xemmh(){
       ll sum = 0;
       cout << "Ma Ten Hang Gia SL ThanhTien" << endl;
        for(int i=0; i< TS; i++){
            cout << dshangban[i].ma1 << " ";
            for (int j = 0; j < ds.size(); j++){
                if(dshangban[i].ma1 == ds[j].ma){
                    cout << ds[j].tenhang << " " << ds[j].gia << " " ;
                    break;
                }
            }
            dshangban[i].xem1();
            sum = sum + dshangban[i].thanhtien;
        }
        tongtien = sum;
        cout << "Tong tien: " << tongtien << endl;
    }
};
int main()
{

    banggia a;
    a.nhapbp();
    a.xemmh();
    hoadon b;
    b.nhapbp(a);
    b.ghitep();
    hoadon c;
    c.doctep();
    c.xemmh();
    return 0;
}
//code by Duong