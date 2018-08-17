#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<limits>

using namespace std;

class Hitter{
	private:
		vector<pair<string,double>> categories;
	public:
		void add_hit(string category, double value){
			string cat = category;
			double val = value;
			for (int i= 0; i<categories.size(); i++){
				if (cat == categories[i].first || cat == "R" && categories[i].first == "RUN" || cat == "RUN" && categories[i].first == "R" || cat == "SO" && 
				    categories[i].first == "K" || cat == "K" && categories[i].first == "SO"){
						cout<< "You've already entered that category!\n";
						return;
				}
			}
			if(cat == "R" || cat == "RUN" || cat == "1B" || cat == "2B" || cat == "3B" || cat == "HR" || cat == "RBI" || cat == "BB" || cat == "K" || cat == "SB" ||
			   cat == "SH" || cat == "GS" || cat == "SO" || cat == "CS") 
				categories.push_back(make_pair(cat,val));
			else{
				cout<<"Invalid category!\n";
			}
		}
		void prompt(){
			cout<<"Add a valid MLB hitting category (3 char limit, UPPERCASE), and its point value. Type Q 0 when finished\n";
			cout<<"Example: HR 4\n"; 
			while(1){
				string cat;
				double cat_value;
				while((cout<<"Add a valid MLB hitting category (3 char limit, UPPERCASE), and its point value. Type Q 0 when finished\n")
					&& (!(cin>>cat) || !(cin>>cat_value))){
					cout<<"Invalid input!\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				if (cat == "Q" && cat_value == 0) break;
				else if(cat == "Q" && cat_value != 0){
					cout<<"Invalid quit command! Type Q 0\n";
				}
				else if (cat.length() <= 3){
					add_hit(cat,cat_value);
				}
				else{
					cout<<"Too many letters!\n";
				}
			}
		}
		vector<pair<string,double>> get_cats(){
			return categories;
		}
		void print_all_categories(){
			vector<pair<string,double>> cats = get_cats();
			int count = 0;
			cout<<"                    ";
			for(int i= 0; i< cats.size(); i++){
				if(cats[i].first == "R"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"   "<<cats[i].first;
				}
				if(cats[i].first == "RUN"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "1B"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "2B"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "3B"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "HR"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "RBI"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "SH"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "SB"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "CS"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "BB"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "K"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"   "<<cats[i].first;
				}
				if(cats[i].first == "SO"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "GS"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			cout<<"\n";
		}
};

class Pitcher{
	private:
		vector<pair<string,double>> categories;
	public:
		void add_pitch(string category,double value){
			string cat = category;
			double val = value;
			for (int i= 0; i<categories.size(); i++){
				if (cat == categories[i].first || cat == "W" && categories[i].first == "WIN" || cat == "WIN" && categories[i].first == "W" || cat == "H" && 
				    categories[i].first == "HIT" || cat == "HIT" && categories[i].first == "H" || cat == "SO" && categories[i].first == "K" || cat == "K" && 
					categories[i].first == "SO"){
						cout<< "You've already entered that category!\n";
						return;
				}
			}
			if(cat == "W" || cat == "WIN" || cat == "SV" || cat == "HLD" || cat == "K" || cat == "BB" || cat == "H" || cat == "HIT" || cat == "QS" || cat == "IP" ||
			   cat == "ER" || cat == "CG" || cat == "SHO" || cat == "RW" || cat == "SO") 
				categories.push_back(make_pair(cat,val));
			else {
				cout<<"Invalid category!\n";
			}
		}
		void prompt(){
			cout<<"Add a valid MLB pitching category (3 char limit, UPPERCASE), and its point value. Type Q 0 when finished\n";
			cout<<"Example: IP 0.5\n"; 
			while(1){
				string cat;
				double cat_value;
				while((cout<<"Add a valid MLB pitching category (3 char limit, UPPERCASE), type Q 0 when finished\n")
					&& (!(cin>>cat) || !(cin>>cat_value))){
					cout<<"Invalid input!\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				if (cat == "Q" && cat_value == 0) break;
				else if(cat == "Q" && cat_value != 0){
					cout<<"Invalid quit command! Type Q 0\n";
				}
				else if (cat.length() <= 3){
					add_pitch(cat,cat_value);
				}
				else{
					cout<<"Too many letters!\n";
				}
			}
		}
		vector<pair<string,double>> get_cats(){
			return categories;
		}
		void print_all_categories(){
			vector<pair<string,double>> cats = get_cats();
			int count = 0;
			cout<<"                    ";
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "IP"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i< cats.size(); i++){
				if(cats[i].first == "W"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"   "<<cats[i].first;
				}
				if(cats[i].first == "WIN"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "CG"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "SHO"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "SV"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "H"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"   "<<cats[i].first;
				}
				if(cats[i].first == "HIT"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "ER"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "BB"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "K"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"   "<<cats[i].first;
				}
				if(cats[i].first == "SO"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "HLD"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<" "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "RW"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
				}
			}
			for(int i= 0; i<cats.size(); i++){
				if(cats[i].first == "QS"){
					categories[count].first = cats[i].first;
					categories[count].second = cats[i].second;
					++count;
					cout<<"  "<<cats[i].first;
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
		vector<pair<string,double>> cats;
		int stat_value;
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
				if(cats[i].first == "IP"){
					cout<<"Enter "<<name<<"'s value for "<<cats[i].first<<", to the nearest integer\n";
				}
				else{
					cout<<"Enter "<<name<<"'s value for "<<cats[i].first<<"\n";
				}
				cin>>stat_value;
				statline.push_back(stat_value);
			}
			cout<<"\n";
		}
		vector<int> get_statline(){
			return statline;
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
				else if(statline[i]/10000 == 0){
					cout<<statline[i];
				}
			}
			cout<<"\n";
		}
};

double hitter_total(Player player,Hitter h){
	vector<pair<string,double>> cats = h.get_cats();
	vector<int> statline = player.get_statline();
	double value = 0;
	for(int i= 0; i<cats.size(); i++){
		value += (cats[i].second*statline[i]);
	}
	return value;
}

double pitcher_total(Player player,Pitcher p){ 
	vector<pair<string,double>> cats = p.get_cats();
	vector<int> statline = player.get_statline();
	double value = 0;
	for(int i= 0; i<cats.size(); i++){
		value += (cats[i].second*statline[i]);
	}
	return value;
}

void add_player(Hitter h, Pitcher p){
	while(1){
		string name;
		char hp;
		while((cout<<"Enter name of hitter or pitcher. Type 'Q' to quit\n") && !(cin>>name)){
			cout<<"Invalid input!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		if(name == "Q") return;
		middle:
			while((cout<<"Specify whether this player is a hitter (type 'H') or a pitcher (type 'P'):\n") && !(cin>>hp)){
				cout<<"Invalid input!\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				goto middle;
			}			
			if(hp == 'H'){
				Player hitter(name, h);
				hitter.player_prompt(true);
				hitter.print_player_info(true);
				cout<<name<<"'s total fantasy points: "<<hitter_total(hitter,h)<<"\n";
			}
			else if(hp == 'P'){
				Player pitcher(name, p);
				pitcher.player_prompt(false);
				pitcher.print_player_info(false);
				cout<<name<<"'s total fantasy points: "<<pitcher_total(pitcher,p)<<"\n";
			}
			else{
				cout<<"Invalid input! Type H or P when prompted!\n";
				goto middle;
			}
	}
}

int main(){
	Hitter h;
	h.prompt();
	h.print_all_categories();
	
	Pitcher p;
	p.prompt();
	p.print_all_categories();
	
	add_player(h,p);
	
	return 0;
}