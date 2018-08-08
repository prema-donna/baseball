#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>

using namespace std;

class Hitter{
	private:
		vector<string> categories;
	public:
		void add_hit(string category){
			string cat = category;
			for (int i= 0; i<categories.size(); i++){
				if (cat == categories[i] || cat == "R" && categories[i] == "RUN" || cat == "RUN" && categories[i] == "R" || cat == "SO" && categories[i] == "K" ||
					cat == "K" && categories[i] == "SO"){
						cout<< "You've already entered that category!\n";
						return;
				}
			}
			if(cat == "R" || cat == "RUN" || cat == "1B" || cat == "2B" || cat == "3B" || cat == "HR" || cat == "RBI" || cat == "BB" || cat == "K" || cat == "SB" ||
			   cat == "SH" || cat == "GS" || cat == "SO" || cat == "CS") 
				categories.push_back(cat);
			else{
				cout<<"Invalid category!\n";
			}
		}
		void prompt(){
			while(1){
				string cat;
				cout<<"Add a valid MLB hitting category (3 char limit, UPPERCASE), type Q when finished\n";
				cin>>cat;
				if (cat == "Q") break;
				if (cat.length() <= 3){
					add_hit(cat);
				}
				else{
					cout<<"Too many letters!\n";
				}
			}
		}
		vector<string> get_cats(){
			return categories;
		}
		void print_all_categories(){
			vector<string> cats = get_cats();
			int count = 0;
			cout<<"                    ";
			for(int i= 0; i< cats.size(); i++){
				if(cats[i] == "R"){
					categories[count] = cats[i];
					++count;
					cout<<"   "<<cats[i];
				}
				if(cats[i] == "RUN"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "1B"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "2B"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "3B"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "HR"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "RBI"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "SH"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "SB"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "CS"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "BB"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "K"){
					categories[count] = cats[i];
					++count;
					cout<<"   "<<cats[i];
				}
				if(cats[i] == "SO"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "GS"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			cout<<"\n";
		}
};

class Pitcher{
	private:
		vector<string> categories;
	public:
		void add_pitch(string category){
			string cat = category;
			for (int i= 0; i<categories.size(); i++){
				if (cat == categories[i] || cat == "W" && categories[i] == "WIN" || cat == "WIN" && categories[i] == "W" || cat == "H" && categories[i] == "HIT" ||
					cat == "HIT" && categories[i] == "H" || cat == "SO" && categories[i] == "K" || cat == "K" && categories[i] == "SO"){
						cout<< "You've already entered that category!\n";
						return;
				}
			}
			if(cat == "W" || cat == "WIN" || cat == "SV" || cat == "HLD" || cat == "K" || cat == "BB" || cat == "H" || cat == "HIT" || cat == "QS" || cat == "IP" ||
			   cat == "ER" || cat == "CG" || cat == "SHO" || cat == "RW" || cat == "SO") 
				categories.push_back(cat);
			else {
				cout<<"Invalid category!\n";
			}
		}
		void prompt(){
			while(1){
				string cat;
				cout<<"Add a valid MLB pitching category (3 char limit, UPPERCASE), type Q when finished\n";
				cin>>cat;
				if (cat == "Q") break;
				if (cat.length() <= 3){
					add_pitch(cat);
				}
				else{
					cout<<"Too many letters!\n";
				}
			}
		}
		vector<string> get_cats(){
			return categories;
		}
		void print_all_categories(){
			vector<string> cats = get_cats();
			int count = 0;
			cout<<"                    ";
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "IP"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i< cats.size(); i++){
				if(cats[i] == "W"){
					categories[count] = cats[i];
					++count;
					cout<<"   "<<cats[i];
				}
				if(cats[i] == "WIN"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "CG"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "SHO"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "SV"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "H"){
					categories[count] = cats[i];
					++count;
					cout<<"   "<<cats[i];
				}
				if(cats[i] == "HIT"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "ER"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "BB"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "K"){
					categories[count] = cats[i];
					++count;
					cout<<"   "<<cats[i];
				}
				if(cats[i] == "SO"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "HLD"){
					categories[count] = cats[i];
					++count;
					cout<<" "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "RW"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "QS"){
					categories[count] = cats[i];
					++count;
					cout<<"  "<<cats[i];
				}
			}
			cout<<"\n";
		}
};

class Player:Hitter,Pitcher{
	private:
		string name;
		Hitter h;
		Pitcher p;
		vector<string> cats;
		int value;
		vector<int> statline;
	public:
		Player(string player, Hitter a){
			name = player;
			h = a;
		}		
		Player(string player, Pitcher b){
			name = player;
			p = b;
		}
		void player_prompt(bool is_hitter){
			if (is_hitter == true){
				cats = h.get_cats();
			}
			else if(is_hitter == false){
				cats = p.get_cats();
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i] == "IP"){
					cout<<"Enter "<<name<<"'s value for "<<cats[i]<<", to the nearest integer\n";
				}
				else{
					cout<<"Enter "<<name<<"'s value for "<<cats[i]<<"\n";
				}
				cin>>value;
				statline.push_back(value);
			}
			cout<<"\n";
		}
		void print_player_info(bool is_hitter){
			if(is_hitter == true){
				h.print_all_categories();
			}
			else if(is_hitter == false){
				p.print_all_categories();
			}
			cout<<name;
			int space_length= 20- name.length();
			while(space_length >0){
				cout<<" ";
				--space_length;
			}
			for(int i= 0; i<statline.size(); i++){
				if (statline[i]/10 == 0){
					cout<<"   "<<statline[i];  
				}
				else if(statline[i]/100 == 0){
					cout<<"  "<<statline[i];
				}
				else if(statline[i]/1000 == 0){
					cout<<" "<<statline[i];
				}
			}
			cout<<"\n";
		}
};

int main(){
	Hitter h;
	h.prompt();
	h.print_all_categories();
	
	Pitcher p;
	p.prompt();
	p.print_all_categories();
	
	Player barry_bonds("BarryBonds2001", h);
	barry_bonds.player_prompt(true);
	barry_bonds.print_player_info(true);
	Player alex_rodriguez("AlexRodriguez2007", h);
	alex_rodriguez.player_prompt(true);
	alex_rodriguez.print_player_info(true);
	Player clayton_kershaw("ClaytonKershaw2014", p);
	clayton_kershaw.player_prompt(false);
	clayton_kershaw.print_player_info(false);
	return 0;
}