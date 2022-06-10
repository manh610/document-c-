/*
	author : mdd
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

#define MAX 100

// khai bao lop do thi
class Dothi {
	int    n;                                         // so dinh cua do thi
	int    A[MAX][MAX];                               // ma tran ke cua do thi
	public :               
		string myName;                 				  // ten doi tuong do thi
		int soTPLT;									  // bien ghi so thanh phan lien thong cua do thi
		int s,t;
		int X[MAX];									  // luu chu trinh hamiton
		bool  chuaxet[MAX];                           // mang luu trang thai da xet hay chua xet cua cac dinh  
		int   truoc[MAX];							  // truoc[v] = u : luu tru dinh truoc cua dinh v la dinh u
		void Traloi();                                // bao ten doi tuong
		bool docDuLieu(string tenfile);               // ham doc du lieu tu file co ten : tenfile
		void Khoitao();								  // khoi tao cac bien, doi tuong cua do thi
		void DFS_dequy(int u);                        // phuong thuc duyet do thi = DFS de quy
		void DFS_stack(int u);                        // phuong thuc duyet do thi = DFS ngan xep
		void BFS_queue(int u);						  // phuong thuc duyet do thi = BFS hang doi
		void Duyet_TPLT();							  // Duyet, dem cac thanh phan lien thong cua do thi
		void Duong_di(int s, int t);				  // tim duong di tu dinh s den dinh t theo thuat toan DFS(BFS)
		bool isDuyetHet();							  // kiem tra xem DFS hoac BFS co duyet het duoc tap dinh cua do thi hay khong
		void LienThongManh();						  // ket luan ve tinh lien thong manh cua do thi
		void DinhTru();								  // tim dinh tru ( dinh ma khi xoa no di thi so tplt tang len )
		void CanhCau(); 							  // tim canh cau cua do thi
		bool isEuler();								  // kiem tra xem do thi co phai do thi Euler khong
		void Euler_Cycle(int u);					  // chu trình Euler từ đỉnh u
		void Hmt(int k);							  // chu trinh hamiton tu dinh k
		Dothi();									  // Contructor : phuong thuc khoi dung
};

// Contructor
Dothi::Dothi(){
	myName = "\n My Graph";							  // khoi dung ten doi tuong				
}

// doc du lieu
bool Dothi::docDuLieu(string tenfile) {
	ifstream  filevao(tenfile.c_str());               // mo file vao de lay du lieu tu tenfile.c_str()
	if ( filevao.is_open() ) {                        // neu doc duoc file
	    filevao >> n;                                 // doc tu file so dinh cua do thi                
		cout << endl << " so dinh cua do thi : " << n;
		cout << endl << " ma tran ke";
		for ( int i = 1; i <= n; i++) {
			cout << endl;
			for ( int j = 1; j <= n; j++ ) {
				filevao >> A[i][j];
				cout << " " << A[i][j];
			}
		}
		// Doc tu ban phim 2 bien s va t : 
		cout << "\n nhap 2 dinh dau va cuoi duong di : ";
		cin >> s >> t;
		filevao.close();
		return true;                                  // tra lai true 
	}
	return false;
}


// ham tra loi ten doi tuong do thi
void Dothi::Traloi(){
	cout << myName;
}

// Khoi tao
void Dothi::Khoitao() {
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
		truoc[i] = 0;
	}
	soTPLT = 0;
}

// DFS de duy
void Dothi::DFS_dequy(int u){
	cout << " " << u;								 // tham dinh u
	chuaxet[u] = false;								 // danh dau da xet u
	for ( int v = 1; v <= n; v++) {
		if ( A[u][v] && chuaxet[v] ) {				 // v la dinh ke cua u va chua xet dinh v
			DFS_dequy(v);
		} 					
	}
}

// DFS ngan xep
void Dothi::DFS_stack(int u) {
	stack<int> st;
	st.push(u);
	cout << " " << u;								// tham dinh u
	chuaxet[u] = false;								// luu lai da xet dinh u
	while ( !st.empty() ) {							// khi ngan xep chua rong
		int s = st.top();							// lay doi tuong dinh ngan xep
		st.pop();									// loai dinh s khoi ngan xep
		for ( int v = 1; v <= n; v++) {
			if ( A[v][s] && chuaxet[v] ) {			// v la dinh ke cua s va v chua duoc duyet
				cout << " " << v;					// tham dinh v  
				chuaxet[v] = false;					// danh dau da xet v
				st.push(s);							// dua dinh s vao ngan xep
				st.push(v);							// dua dinh v vao ngan xep
				truoc[v] = s;						// luu dinh truoc cua dinh u la dinh s
				break;								// thoat khoi vong lap for
			}
		}
	}
}

// BFS hang doi
void Dothi::BFS_queue(int u) {
	queue<int> q;
	q.push(u);										// dua dinh u vao hang doi
	chuaxet[u] = false;								// danh dau da xet dinh u
	while ( !q.empty() ) {							// khi hang doi chua rong
		int s = q.front();							// lay phan tu dau tien (s) ra khoi dang doi
		q.pop();									// xoa dinh s khoi hang doi
		cout << " " << s;							// tham dinh s;
		for ( int v=1; v<=n; v++) {
			if ( A[s][v] && chuaxet[v] ) {			// v la dinh ke cua s va chua duoc duyet
				q.push(v);							// dua v vao hang doi
				chuaxet[v] = false;					// danh dau da xet v
				truoc[v] = s;						// luu dinh truoc cua dinh v la dinh s
			}
		}
	}
}

// Duyet thanh phan lien thong
void Dothi::Duyet_TPLT() {
	Khoitao();										// chuaxet[...] = true, soTPLT = 0;
	for ( int u = 1; u <= n; u++) {					// xet tap dinh cua do thi
		if ( chuaxet[u] ) {							// dinh u chua xet === chua duoc duyet
			soTPLT++;								// tang so thanh phan lien thong
			cout << endl << " Thanh phan lien thong thu " << soTPLT << " : ";
			BFS_queue(u);							// Duyet BFS (DFS) tu u							
		}		
	}
}	

// Tim duong di tu dinh s den dinh t theo DFS(BFS)
void Dothi::Duong_di(int s, int t) {
//	DFS_stack(s);									// duyet DFS tu dinh s
	if ( truoc[t]==0 ) {							// duyet DFS tu s khong dat duoc den t
		cout << "\n khong co duong di tu " << s << " den " << t;
	} 	
	else {
		cout << "\n " << t << " <- ";					// truoc tien dua ra dinh t
		int u = truoc[t];							// u la dinh truoc khi den duoc t
		while ( u!=s ) {
			cout << " " << u << " <- ";				// dua ra dinh u
			u = truoc[u];							// lan nguoc lai truoc u
		}
		cout << " " << s;							// dua ra dinh s
	}			 
}

// kiem tra xem DFS (BFS) co duyet het duoc tap dinh hay khong
// tra lai true neu duyet het v� false neu nguoc lai
bool Dothi::isDuyetHet() {
	for ( int i = 1; i <= n; i++) {					// duyet tat ca tap dinh
		if ( chuaxet[i] )
			return false;							// van co dinh chua duoc xet den trong qua trinh duyet
	}
	return true;									// toan bo tap dinh da duoc duyet
}

// ket luan ve tinh lien thong manh cua do thi
void Dothi::LienThongManh() {
	Khoitao();
	for ( int i = 1; i <= n; i++) {
		cout << "\n duyet bfs_queue tu dinh " << i << " : ";
		BFS_queue(i);
		if ( !isDuyetHet() ) {
			cout << "\n do thi khong lien thong manh";
			return;
		}
		Khoitao();
	}
	cout << "\n do thi lien thong manh";
	return;
}

// Duyet dinh tru
void Dothi::DinhTru(){
	Khoitao();
	for ( int i = 1; i <= n; i++) {					// duyet toan bo tap dinh
		chuaxet[i] = false;							// cam duyet dinh i === xoa dinh i va cac canh noi toi no
		cout << "\n bfs tu dinh " << i << " ";
//		BFS_queue(i);
		if ( i==1 ) {
			BFS_queue(2);
		}
		else
			BFS_queue(1);
		if ( !isDuyetHet() ) {
			cout << "\n dinh " << i << " la dinh tru";
		}
		Khoitao();
	}
}

// tim cac canh cau cua do thi
void Dothi::CanhCau() {
	for ( int i = 1; i < n; i++) {
		for ( int j = i+1; j <= n; j++) {
			if ( A[i][j]==1 ) {
				A[i][j] = A[j][i] = 0;
				BFS_queue(1);
				cout << endl;
				if ( !isDuyetHet() ) {
					cout << "\n (" << i << "," << j <<") la canh cau"; 
				}
				A[i][j] = A[j][i] = 1;
				Khoitao();
			}
		}
	}
}

// kiem tra do thi co phai do thi Euler khong
// xet do thi vo huong
bool Dothi::isEuler() {
	for ( int i = 1; i <= n; i++) {						// tong bac cac dinh tinh theo hang																
		int sum = 0;
		for ( int j = 1; j <= n; j++) {					// tong theo cot cua hang i
			sum += A[i][j];
		}
		if ( sum%2!=0 ) return false;					// ton tai it nhat 1 dinh bac le -> khong euler
	}
	return true;	
}

// liet ke 1 chu trinh Euler tu dinh u
void Dothi::Euler_Cycle(int u) {
	stack<int> st, CE;
	st.push(u);											// day u vao ngan xep
	while ( !st.empty() ) {								// ngan xep chua rong
		int s = st.top();								// lay dinh thuoc dau ngan xep
		for ( int t = 1; t <= n; t++ ) {
			if ( A[s][t] ) {							// t la dinh ke cua s
				st.push(t);								// dua t vao ngan xep
				A[s][t] = 0; A[t][s] = 0;				// loai bo canh (s,t)
				break;
			} 
			if ( t==n ) {								// khong co dinh ke
				st.pop();
				CE.push(s);
			}
		}
	}
	// in chu trinh euler
	while ( !CE.empty() ) {
		(CE.size()!=1)?cout << CE.top() << " -> ":cout<<CE.top();
		CE.pop();
	}
}

// dùng vét cạn = quay lui, chưa có tiêu chuẩn
// chu trình hamiton từ đỉnh k
void Dothi::Hmt(int k) {
	// Chu trình hamiton : v_0 = X[1], X[2], ..., X[k], ..., X[n], v_0;
	for ( int y = 1; y <=n ; y++) {
		if ( A[y][X[k-1]] ) {
			if ( k==n+1 && (y==X[1]) ) {
				for ( int i = 1; i <=n; i++) {
					cout<<X[i] << " -> ";
				}
				cout << X[1] << '\n';
			}
			else if ( chuaxet[y] ) {
				X[k] = y;
				chuaxet[y] = false;
				Hmt(k+1);
				chuaxet[y] = true;
			}
		}
	}
}

// ham main
main()
{
	Dothi G;
	if ( G.docDuLieu("3_6_DinhTru.in") ) {
//		cout << endl << " doc duoc file" << endl;
//		G.Traloi();
//		cout << endl << " duyet do thi bang cach DFS de quy : ";
//		G.Khoitao();
//		G.DFS_dequy(1);
//		cout << endl << " duyet do thi bang cach DFS ngan xep : ";
//		G.Khoitao();
//		G.DFS_stack(1);
//		cout << endl << " duyet do thi bang cach BFS hang doi : ";
//		G.Khoitao();
//		G.BFS_queue(1);
//		cout << endl << " duyet cac thanh phan lien thong cua do thi : ";
//		G.Duyet_TPLT();
//		G.Khoitao();
//		cout << endl << " tim duong di theo DFS : ";
//		G.DFS_stack(G.s);
//		G.Duong_di(G.s, G.t);
//		G.Khoitao();
//		cout << endl << " tim duong di theo BFS : ";
//		G.BFS_queue(G.s);
//		G.Duong_di(G.s, G.t);
//		cout << "\n kiem tra tinh lien thong manh  : ";
//		G.LienThongManh();
//		cout << "\n liet ke cac dinh tru : ";
//		G.DinhTru();
		// G.Khoitao();
		// G.DFS_stack(1);
		// cout << endl;
		// if ( G.isDuyetHet() ) {
		// 	G.Euler_Cycle(3);
		// }
		cout << "tìm chu trình hmt : \n";
		G.Khoitao();
		G.X[1] = 4;
		G.chuaxet[G.X[1]] = false;
		G.Hmt(2);
		// G.Khoitao();
		// G.CanhCau();
	}
	else {
		cout << endl << " khong doc duoc file" << endl;
	}
	
}






















