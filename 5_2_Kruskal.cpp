// Chuong trinh C++ thuc hien duyet do thi theo phuong phap DFS de quy
// Do thi: - so dinh n
//         - ma tran ke A = (aij)
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <queue>
#define MAX 100
using namespace std;
// Khai bao lop do thi
struct	dinh{
		int		num, id;									//num: ten dinh; id: id cua dinh
};
struct	canh{
		dinh	u, v;										// u, v la 2 dau cua canh; do thi vo huong: u.num<v.num
		int		c;											// trong so cua canh
};
class Dothi{
	//public:
		int		n, ne, neT, neMST, dH;						// n: so dinh cua do thi; ne: so canh cua do thi; neT: so canh cua cay khung
		int		A[MAX][MAX];								// ma tran ke cua do thi
		canh	E[MAX],	ET[MAX], EMST[MAX];					// E: tap canh cua do thi; ET: tap canh cua cay khung
	public:
		string	myname;										// ten doi tuong do thi
		int		soTPLT;										// bien ghi so thanh phan lien thong cua do thi
		int		chuaxet[MAX];								// mang luu trang thai da xet hay chua xet cua moi dinh
		int		truoc[MAX];									// truoc[v]=u: mang luu tru dinh truoc cua dinh v la dinh u
		int		s, t;										// s: dau duong di; t: cuoi duong di
		int		X[MAX];
		void 	TraLoi();									// bao ten doi tuong
		bool 	DocDuLieu(string tenfile);					// ham doc du lieu ma tran ke tu file: tenfile
		void 	KhoiTao();									// khoi tao cac bien, doi tuong cua do thi
		void 	DFS_dequy(int u);							// phuong thuc duyet do thi theo phuong phap DFS de quy
		void 	DFS_nganxep(int u);							// phuong thuc duyet do thi theo phuong phap DFS su dung ngan xep
		void 	BFS_hangdoi(int u);							// phuong thuc duyet do thi theo phuong phap BFS su dung hang doi
		void 	Duyet_TPLT();								// duyet, dem so cac thanh phan lien thong cua do thi
		void 	DuongDi(int s, int t);						// tim duong di tu dinh s den dinh t theo thuat toan DFS (BFS)
		bool 	IsDuyetHet();								// kiem tra xem DFS hoac BFS co duyet het duoc tap dinh cua do thi hay ko?
		void 	LienThongManh();							// ket luan ve tinh lien thong manh cua do thi
		void 	DinhTru();									// tim cac dinh tru cua do thi
		void 	CanhCau();									// tim cac canh cau cua do thi
		bool	isEuler();									// kiem tra do thi co phai la Euler?
		bool	isEuler_cohuong();							// Kiem tra do thi co huong	co phai la Euler khong?
		void	Euler_cycle(int u);							// liet ke 1 chu trinh Euler xuat phat tu dinh u cua do thi Euler
		void	Hmt(int k);									// De quy: liet ke chu trinh Hamilton tu dinh thu k
		void	Tree_DFS(int u);							// Ham xay dung cay khung su dung DFS de quy
		void	Kruskal();									// Ham tim cay bao trum be nhat theo thuat toan Kruskal
		Dothi();											// Constructor : phuong thuc khoi dung
};
// Khoi dung - constructor
Dothi::Dothi(){
	myname="\n My graph";									// Khoi dung ten doi tuong
	n=0;	ne=0;	neT=0;									// Khoi tao n, ne, neT
}
// Doc du lieu
bool Dothi::DocDuLieu(string tenfile){
	ifstream	filevao(tenfile.c_str());					// mo filevao lay du lieu tu tenfile.c_str()
	if(filevao.is_open()){									// neu mo duoc file
		filevao >> n;										// doc tu file, lay so dinh cua do thi vao bien n
		cout << "\n So dinh cua do thi n = " << n;
		cout << "\n Ma tran ke:";
		for(int i=1; i<=n; i++){							// doc n hang
			cout << "\n";
			for(int j=1; j<=n; j++){						// doc n cot cua 1 hang
				filevao >> A[i][j];	cout << " " << A[i][j];
				if((j>i)&&(A[i][j]!=0)){					// xet do thi vo huong: day la 1 canh
					ne++;									// tang so canh len 1
					E[ne].u.num=i;	E[ne].v.num=j;			// thu nhan canh (i,j)				
					E[ne].c=A[i][j];						// thu nhan trong so cua canh trong truong hop ma tran trong so
				}
			}
		}
		//for(int e=1; e<=ne; e++){
		//	cout << "\n Canh: " << E[e].u.num << "-" << E[e].v.num << ", " << E[e].c;
		//}
		filevao.close();
		// Doc tu ban phim 2 bien s va t (s: dau duong di; t: cuoi duong di)
		//cout << "\n Nhap 2 dinh dau va cuoi duong di:";
		//cout << "\n s = "; cin >> s;
		//cout << "\n t = "; cin >> t;
		return true;										// tra lai true cho ten ham
	}
	return false;											// khong mo duoc file, tra lai false cho ham
}
// Ham tra loi ten doi tuong do thi
void Dothi::TraLoi(){
	cout << myname;
}
// khoi tao cac bien, doi tuong cua do thi
void Dothi::KhoiTao(){
	for(int i=1; i<=n; i++){
		chuaxet[i]=true;									// khoi tao tap dinh cua do thi la chua duoc xet
		truoc[i]=0;											// khoi tao mang truoc[..]=0;
	}
		soTPLT=0;											// khoi tao so thanh phan lien thong = 0
}
// phuong thuc duyet do thi theo phuong phap DFS de quy
void Dothi::DFS_dequy(int u){
	cout << " " << u;										// tham dinh u
	chuaxet[u]=false;										// danh dau da xet t
	for(int v=1; v<=n; v++){
		if((A[u][v]==1)&&(chuaxet[v]==true)){				// v la dinh ke cua u va chua xet dinh v
			DFS_dequy(v);
		}
	}
}
// phuong thuc duyet do thi theo phuong phap DFS su dung ngan xep
void Dothi::DFS_nganxep(int u){
	stack<int>	nganxep;
	nganxep.push(u);										// day u vao ngan xep
	cout << " " << u;										// tham dinh u
	chuaxet[u]=false;										// danh dau da xet u
	while(!nganxep.empty()){								// ngan xep <> rong
		int s=nganxep.top();								// lay doi tuong dinh ngan xep
		nganxep.pop();										// loai dinh s khoi dinh ngan xep
		for(int t=1; t<=n; t++){
			if((A[s][t]==1)&&(chuaxet[t]==true)){			// t la dinh ke cua s va chua xet t
				cout << " " << t;							// tham dinh t
				chuaxet[t]=false;							// danh dau da xet t
				nganxep.push(s);							// dua s vao ngan xep
				nganxep.push(t);							// dua t vao ngan xep
				truoc[t]=s;									// luu gia tri s vao truoc[t]
				break;
			}
		}
	}
}
// phuong thuc duyet do thi theo phuong phap BFS su dung hang doi
void Dothi::BFS_hangdoi(int u){
	queue<int>	hangdoi;
	hangdoi.push(u);										// day u vao hang doi
	chuaxet[u]=false;										// danh dau da xet u
	while(!hangdoi.empty()){								// hang doi chua rong
		int s=hangdoi.front();								// lay phan tu dau tien cua hang doi
		hangdoi.pop();										// loai phan tu dau tien cua hang doi
		cout << " " << s;									// tham dinh s
		for(int t=1; t<=n; t++){
			if((A[s][t]==1)&&(chuaxet[t]==true)){			// cac dinh t la ke cua dinh s va chua xet t
				hangdoi.push(t);							// day t vao cuoi hang doi
				chuaxet[t]=false;							// danh dau da xet t
				truoc[t]=s;									// luu s vao truoc[t]
			}
		}
	}
}
// duyet, dem so cac thanh phan lien thong cua do thi
void Dothi::Duyet_TPLT(){
	KhoiTao();												// chuaxet[..]=true; soTPLT=0
	for(int u=1; u<=n; u++){								// xet tap dinh cua do thi
		if(chuaxet[u]==true){								// dinh u chua duoc xet == chua dc duyet
			soTPLT++;
			cout << "\n Thanh phan lien thong thu " << soTPLT << ": ";
			BFS_hangdoi(u);									// dinh u chua duyet -> duyet BFS tu u
		}
	}
}
// tim duong di tu dinh s den dinh t theo thuat toan DFS (BFS)
void Dothi::DuongDi(int s, int t){
	//DFS_nganxep(s);											// Duyet BFS tu dinh s
	if(truoc[t]==0){										// Duyet BFS tu s khong dat duoc den t -> truoc[t] khong doi
		cout << "\n Khong co duong di tu " << s << " den " << t;
	}
	else{
		cout << "\n " << t << " -> ";						// truoc tien, dua dinh t
		int u=truoc[t];										// u la dinh truoc khi den duoc t
		while(u!=s){
			cout << " " << u << " -> ";						// truoc tien, dua dinh t
			u=truoc[u];										// lan nguoc lai truoc u
		}
		cout << " " << s;									// cuoi cung, dua dinh s
	}
}
// kiem tra xem DFS hoac BFS co duyet het duoc tap dinh cua do thi hay ko?
// tra lai true neu duyet het; false neu ko duyet het
bool Dothi::IsDuyetHet(){
	for(int i=1; i<=n; i++){								// duyet mang chua xet xem con phan tu nao chua xet den hay ko?
		if(chuaxet[i]==true){
			return false;									// co it nhat 1 dinh chua duoc xet den trong qua trinh duyet DFS hoac BFS
		}
	}
	return true;											// toan bo tap dinh da duoc xet den trong DFS hoac BFS
}
// ket luan ve tinh lien thong manh cua do thi
void Dothi::LienThongManh(){
	KhoiTao();												// tra lai chuaxet[1..n]=true sau moi lan duyet BFS hoac DFS
	for(int u=1; u<=n; u++){								// xet tap dinh cua do thi
		cout << "\n Duyet BFS hang doi tu dinh " << u << ": ";
		BFS_hangdoi(u);
		if(IsDuyetHet()==false){
			cout << "\n Do thi khong lien thong manh";
			return;
		}
		KhoiTao();											// khoi tao lai cac bien cho lan duyet tiep theo
	}
	// Qua duoc het vong lap for(), khong co lan nao ko duyet het duoc tap dinh cua do thi
	cout << "\n Do thi lien thong manh";
	return;
}
// tim cac dinh tru cua do thi
void Dothi::DinhTru(){
	KhoiTao();
	for(int u=1; u<=n; u++){								// xet toan bo tap dinh cua do thi
		chuaxet[u]=false;									// cam DFS hoac BFS duyet dinh u == xoa dinh u cung cac canh noi voi no
		//BFS_hangdoi(u);
		if(u==1)
			BFS_hangdoi(2);
		else
			BFS_hangdoi(1);
		if(IsDuyetHet()==false){							// sau khi xoa dinh u, do thi tro nen ko lien thong => u la dinh tru
			cout << "\n Dinh " << u << " la dinh tru";
		}
		else{
			cout << "\n Dinh " << u << " khong phai la dinh tru";
		}
		KhoiTao();
	}
}
// tim cac canh cau cua do thi
void Dothi::CanhCau(){
	KhoiTao();
	for(int i=1; i<=n-1; i++){
		for(int j=i+1; j<=n; j++){
			if(A[i][j]==1){									// neu (i, j) la canh <=> A[i][j]==1
				A[i][j]=0; A[j][i]=0;						// xoa canh (i, j)
				cout << "\n";
				BFS_hangdoi(1);
				if(IsDuyetHet()==false){
					cout << "(" << i << "," << j << ") la canh cau";
				}
				else
					cout << "(" << i << "," << j << ") khong phai la canh cau";
				A[i][j]=1; A[j][i]=1;
				KhoiTao();
			}
		}
	}
	
}
// kiem tra do thi co phai la Euler?
// do thi vo huong
bool	Dothi::isEuler(){									// Truoc tien: xet do thi vo huong
	for(int i=1; i<=n; i++){								// tong bac cac dinh: tinh theo hang
		int sum=0;
		for(int j=1; j<=n; j++){								// tong theo cot cua hang i
			sum+=A[i][j];
		}
		if(sum%2!=0){										// ton tai it nhat 1 dinh bac le
			return false;
		}
	}
	return true;											// khong co dinh nao bac le, do thi la Euler
}
// kiem tra do thi co phai la Euler?
// do thi co huong
bool	Dothi::isEuler_cohuong(){							// Xet do thi co huong
	for(int i=1; i<=n; i++){								// tong bac cac dinh: tinh theo hang
		// ktra co ton tai dinh i de duyet het cac dinh duoc hay ko?
		KhoiTao();
		cout << "\n Duyet DFS tai dinh " << i << ": ";
		DFS_dequy(i);
		if(!IsDuyetHet())	return false;
		// Den duoc cho nay nghia la khong co truong hop nao ko duyet het
		int rowsum=0, colsum=0;
		for(int j=1; j<=n; j++){							// tong theo cot cua hang i
			rowsum+=A[i][j];	colsum+=A[j][i];
		}
		if(rowsum!=colsum){									// ton tai it nhat 1 dinh bac le
			return false;
		}
	}
	return true;											// khong co dinh nao bac le, do thi la Euler
}
// liet ke 1 chu trinh Euler xuat phat tu dinh u cua do thi Euler
void	Dothi::Euler_cycle(int u){
	stack<int>	nganxep, CE;
	nganxep.push(u);										// day u vao ngan xep
	while(!nganxep.empty()){
		int s=nganxep.top();								// lay gia tri dinh do thi o dinh ngan xep
		for(int t=1; t<=n; t++){
			if(A[s][t]==1){									// t la dinh ke cua s
				nganxep.push(t);							// dua t vao ngan xep
				A[s][t]=0; A[t][s]=0;						// loai bo canh s, t
				break;
			}
			if(t==n){										// t=1..n ko xay ra break nao <-> khong co dinh ke
				nganxep.pop();
				CE.push(s);
			}
		}
	}
	// In chu trinh Euler
	while(!CE.empty()){
		if(CE.size()!=1){
			cout << CE.top() << " -> "; CE.pop();
		}
		else{
			cout << CE.top(); CE.pop();
		}
		
	}
}
// De quy: liet ke chu trinh Hamilton tu dinh thu k
void	Dothi::Hmt(int k){
	//Chu trinh Hamilton: v0=X[1], X[2], ..., X[k-1], X[k], ... X[n], v0
	for(int y=1; y<=n; y++){								// xet tap dinh
		if(A[X[k-1]][y]==1){								// y ke X[k-1]
			if((k==n+1)&&(y==X[1])){						// in chu trinh Hamilton
				cout << "\n";
				for(int j=1; j<=n; j++){
					cout << X[j] << " -> ";
				}
				cout << X[1];
			}
			else{
				if(chuaxet[y]==true){						// dinh y: chua xet
					X[k]=y;									// thu nhan dinh y vao X[k]
					chuaxet[y]=false;						// danh dau da xet y
					Hmt(k+1);								// de quy xd X[k+1]
					chuaxet[y]=true;					
				}
			}
		}
	}
}		
// Ham xay dung cay khung su dung DFS de quy							
void	Dothi::Tree_DFS(int u){
	chuaxet[u]=false;
	for(int v=1; v<=n; v++){								// xet tap dinh cua do thi
		if((A[u][v]==1)&&(chuaxet[v])){
			neT++;											// tang so canh cua cay khung len 1
			if(u<v){
				ET[neT].u.num=u;	ET[neT].v.num=v;	ET[neT].c=A[u][v];
			}
			else{	// u>v
				ET[neT].u.num=v;	ET[neT].v.num=u;	ET[neT].c=A[u][v];
			}
			Tree_DFS(v);
		}
	}
}
// Ham tim cay bao trum be nhat theo thuat toan Kruskal
void	Dothi::Kruskal(){
	dinh	V[n];
	//Khoi tao tap dinh
	for(int i=1; i<=n; i++){
		V[i].num=i;	V[i].id=i;
	}
	//Khoi tao
	neMST=0;												// Cay khung be nhat la rong
	dH=0;
	//Sap xep cac canh cua do thi theo trong so tang dan
	for(int e1=1; e1<ne; e1++){
		for(int e2=e1+1; e2<=ne; e2++){
			if(E[e1].c>E[e2].c){	//Doi cho
				canh	etmp;
				etmp=E[e1];	E[e1]=E[e2];	E[e2]=etmp;
			}
		}
	}
	//Lap
	//Chon cac canh co trong so be nhat, khong tao thanh chu trinh trong cay khung
	for(int e=1; e<=ne; e++){	//Xet toan bo tap canh da sap xep
		//Neu id 2 dinh dau cua canh la khac nhau -> ket nap canh vao cay khung
		if(V[E[e].u.num].id!=V[E[e].v.num].id){
			neMST++;
			EMST[neMST]=E[e];
			dH+=E[e].c;
			//Doi id cua cac dinh lien quan den v sang id cua u
			for(int i=1; i<=n; i++){ //Xet tap dinh
				int	idtmp=V[E[e].v.num].id;
				if(V[i].id==idtmp){
					//Doi sang id cua dinh be
					V[i].id=V[E[e].u.num].id;
				}
				
			}
		}
	}
	// Kiem tra cay khung co du n-1 canh?
	if(neMST==n-1){
		cout << "\n Cay khung be nhat: dH=" << dH;
		for(int e=1; e<=neMST; e++){
			cout << "\n Canh " << e << ": " << EMST[e].u.num << ", " 
			                                << EMST[e].v.num;
		}
	}
	else{
		cout << "\n Do thi khong lien thong";
	}
}

// Ham main 
int main(){
	Dothi G;
	//if(G.DocDuLieu("3_1_DFS.in")){
	//if(G.DocDuLieu("3_4_DuongDi.in")){
	//if(G.DocDuLieu("3_4_DuongDi_Bai3.in")){
	//if(G.DocDuLieu("3_5_LienThongManh.in")){
	//if(G.DocDuLieu("3_6_DinhTru.in")){
	//if(G.DocDuLieu("3_7_CanhCau.in")){
	//if(G.DocDuLieu("5_1_nuaEuler.in")){
	//if(G.DocDuLieu("5_1_Euler_cohuong1.in")){
	//if(G.DocDuLieu("4_2_Hamilton_n5.in")){
	//if(G.DocDuLieu("5_2_Kruskal_n5.in")){
	if(G.DocDuLieu("5_2_Kruskal_n13.in")){
		//cout << "\n Doc file du lieu OK";
		//G.TraLoi();
		//cout << "\n Duyet DFS de quy: ";
		//G.KhoiTao();
		//G.DFS_dequy(1);									// Duyet do thi tu dinh 1 su dung phuong phap DFS de quy
		//cout << "\n Duyet DFS ngan xep: ";
		//G.KhoiTao();
		//G.DFS_nganxep(1);									// Duyet do thi tu dinh 1 su dung phuong phap DFS de quy
		//cout << "\n Duyet BFS hang doi: ";
		//G.KhoiTao();
		//G.BFS_hangdoi(1);									// Duyet do thi tu dinh 1 su dung phuong phap DFS de quy
		//cout << "\n Duyet cac thanh phan lien thong cua do thi: ";
		//G.Duyet_TPLT();									// Duyet cac thanh phan lien thong cua do thi
		/*cout << "\n Tim duong di: ";
		cout << "\n Duong di theo DFS: ";
		G.KhoiTao();
		G.DFS_nganxep(G.s);									// Duyet DFS ngan xep tu dinh s
		G.DuongDi(G.s, G.t);								// Tim duong di tu s den t su dung DFS
		cout << "\n Duong di theo BFS: ";
		G.KhoiTao();
		G.BFS_hangdoi(G.s);									// Duyet DFS ngan xep tu dinh s
		G.DuongDi(G.s, G.t);*/								// Tim duong di tu s den t su dung DFS
		//cout << "\n Kiem tra tinh lien thong manh cua do thi: ";
		//G.LienThongManh();								// Tim duong di tu s den t su dung DFS
		//cout << "\n Liet ke cac dinh tru cua do thi: ";
		//G.DinhTru();										// Tim duong di tu s den t su dung DFS
		//cout << "\n Liet ke cac canh cau: ";
		//G.CanhCau();										// Tim duong di tu s den t su dung DFS
		//cout << "\n Ktra va liet ke chu trinh Euler: ";
		//G.KhoiTao();
		//G.DFS_nganxep(1);	cout << "\n ";					// Duyet DFS ngan xep tu dinh s
		//if((G.IsDuyetHet())&&(G.isEuler())){				// Do thi la Euler
		//if(G.isEuler_cohuong()){							// Kiem tra ca lien thong yeu va Do thi la Euler
		//	cout << "\n ";
		//	G.Euler_cycle(7);
		//}else	cout << "\n Khong phai do thi Euler";
		//cout << "\n Tim chu trinh Hamilton: ";
		//G.KhoiTao();
		//G.X[1]=1; G.chuaxet[G.X[1]]=false;	G.Hmt(2);		// X[1]=v0
		//cout << "\n Cay bao trum:";
		//G.KhoiTao();
		//G.Tree_DFS(1);
		//for(int e=1; e<=G.neT; e++){
		//	cout << "\n Canh " << e << ": "
		//		 << G.ET[e].u.num << "-" << G.ET[e].v.num << ", " << G.ET[e].c;
		//}
		G.Kruskal();
	}
	else{
		cout << "\n Khong doc duoc file du lieu";
	}
	return 0;
}
