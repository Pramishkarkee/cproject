#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;



class student
{
    public:
    int idno,cod,dsa,edc,isd,math;

    char name[20],arr[30];
	char COD[5], DSA[5], maths[5],ISD[5],EDC[5],id[5];
	float per;
	char c,grade;
	void calculate();

	void getdata();
	void showdata();
	void show_tabular();
	int getIDNum() ;
	//void check();
	void takeid();
	void names();
	void takecodmark();
	void takedsamark();
	void takeisdmark();
	void takeedcmark();
	void takemathmark();
};




void student::names()
{
   char inbuf[100]="";
   int input = 0;
    int tend = 0;
  //  char c;
    setcolor(7);
    setfillstyle(11, BLACK);
   //bar(0, 0, 1600, 900);
    settextstyle(9, HORIZ_DIR, 2);
   int escc=0;
   char ch;
   do{

	outtextxy(10,40,"Enter student's Name  : ");
    line(350,60,600,60);
    outtextxy(350,40,inbuf);
   ch=getch();
    switch(ch)
    {
        case 8:
        if(input)
        {
            input--;
            inbuf[input]='\0';
            setfillstyle(11,WHITE);
        }
        break;
        case 13:
        tend=1;
        break;
        case 27:
        tend=1;
        escc=1;
        break;
        default:
        if (input < 100 - 1 && ch >= ' ' && ch <= '~')
         {
                inbuf[input] = ch;
                input++;
          }
    }
   }while(!tend);
   for(int i=0;i<input;i++){
    name[i]=inbuf[i];
   }
   }
   void student::takeid()
{
    // cleardevice();
     char inputbufid[30]="";
     int input_posid = 0;
     int the_endid = 0;
     setcolor(7);
     setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
     settextstyle(9, HORIZ_DIR, 2);
     int escclickedid=0;
     do {
        outtextxy(10, 70, "Enter student id           :");

        line(350, 90, 600, 90);
         outtextxy(350, 70, inputbufid);
        id[0] = getch();
//        idno=atoi(id);
        switch (id[0]) {
        case 8: // backspace
            if (input_posid)
                {
                input_posid--;
                inputbufid[input_posid]='\0';
                setfillstyle(11, WHITE);
              //  bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endid = 1;
            break;
        case 27:  //Escape
            escclickedid=1;
            the_endid = 1;
//            goto backk ;
            break;

        default:
            if (input_posid < 10 && id[0] >= ' ' && id[0] <= '~')
             {
                inputbufid[input_posid] = id[0];
                input_posid++;

            }
        }
    } while (!the_endid);
    for(int i=0; i<=input_posid ;i++)
    {
        id[i]=inputbufid[i];
    }
    char arr[6];
     idno=atoi(id);
    sprintf(arr,"id:%d",idno);
    outtextxy(600,40,arr);
}
   void student::takecodmark()
   {
       char inputbufcod[30]="";
     int input_poscod = 0;
    int the_endcod = 0;
  //  char c;
    setcolor(7);
    setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
    settextstyle(3, HORIZ_DIR, 2);
    int escclickedcod=0;
    do {
        outtextxy(10, 100, "Enter cod mark           :");

        line(350, 120, 600, 120);
         outtextxy(350, 100, inputbufcod);
     //   outtextxy(400, 500, "Press ESC to continue without saving");
        COD[0] = getch();
        switch (COD[0]) {
        case 8: // backspace
            if (input_poscod)
                {
                input_poscod--;
                inputbufcod[input_poscod]='\0';
                setfillstyle(11, WHITE);
                //bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endcod = 1;
            break;
        case 27:  //Escape
            escclickedcod=1;
            the_endcod = 1;
//            goto backk ;
            break;

        default:
            if (input_poscod < 100 - 1 && COD[0] >=' ' && COD[0] <= '~') {
                inputbufcod[input_poscod] = COD[0];
                input_poscod++;

            }
        }
    } while (!the_endcod);
    for(int i=0;i<=input_poscod;i++)
    {
        COD[i]=inputbufcod[i];
    }
    char arr[5];
    cod=atoi(COD);
    sprintf(arr,"COD:%d",cod);
    outtextxy(600,100,arr);
   }
   void student::takedsamark()
   {
        char inputbufdsa[30]="";
     int input_posdsa = 0;
    int the_enddsa = 0;
    setcolor(7);
    setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
    settextstyle(9, HORIZ_DIR, 2);
    int escclickeddsa=0;
    do {
        outtextxy(10, 130, "Enter DSA mark         :");

        line(350, 150, 600, 150);
         outtextxy(350, 130, inputbufdsa);
     //   outtextxy(400, 500, "Press ESC to continue without saving");
        DSA[0] = getch();
        switch (DSA[0]) {
        case 8: // backspace
            if (input_posdsa)
                {
                input_posdsa--;
                inputbufdsa[input_posdsa]='\0';
                setfillstyle(11, WHITE);
                //bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_enddsa = 1;
            break;
        case 27:  //Escape
            escclickeddsa=1;
            the_enddsa = 1;
//            goto backk ;
            break;

        default:
            if (input_posdsa < 100 - 1 && DSA[0] >= ' ' && DSA[0] <= '~')
             {
                inputbufdsa[input_posdsa] = DSA[0];
                input_posdsa++;

            }
        }
    } while (!the_enddsa);
    for(int i=0;i<=input_posdsa;i++)
    {
        DSA[i]=inputbufdsa[i];
    }
    dsa=atoi(DSA);
    char arr[10];
    sprintf(arr,"DSA %d",dsa);
    outtextxy(600,130,arr);
   }
   void student::takeisdmark()
   {
        char inputbufisd[30]="";
     int input_posisd = 0;
    int the_endisd = 0;
    setcolor(7);
    setfillstyle(11, BLACK);
   
    settextstyle(9, HORIZ_DIR, 2);
    int escclickedisd=0;
    do {
        outtextxy(10, 160, "Enter ISD mark           :");

        line(350, 180, 600, 180);
         outtextxy(350, 160, inputbufisd);
     
        ISD[0]= getch();
        switch (ISD[0]) {
        case 8: // backspace
            if (input_posisd)
                {
                input_posisd--;
                inputbufisd[input_posisd]='\0';
                setfillstyle(11, WHITE);
                bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endisd = 1;
            break;
        case 27:  //Escape
            escclickedisd=1;
            the_endisd = 1;
//            goto backk ;
            break;

        default:
            if (input_posisd < 10 && ISD[0] >= ' ' && ISD[0] <= '~')
             {
                inputbufisd[input_posisd] = ISD[0];
                input_posisd++;

            }
        }
    } while (!the_endisd);
    for(int i=0;i<=input_posisd;i++)
    {
        ISD[i]=inputbufisd[i];
    }
    char arr[10];
    isd=atoi(ISD);
    sprintf(arr,"isd %d",isd);
    outtextxy(600,160,arr);
   }
   void student::takeedcmark()
   {
        char inputbufedc[30]="";
     int input_posedc = 0;
    int the_endedc = 0;
    setcolor(7);
    setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
    settextstyle(9, HORIZ_DIR, 2);
    int escclickededc=0;
    do {
        outtextxy(10, 190, "Enter EDC mark         :");

        line(350, 210, 600, 210);
         outtextxy(350, 190, inputbufedc);
     
        EDC[0] = getch();
        switch (EDC[0]) {
        case 8: // backspace
            if (input_posedc)
                {
                input_posedc--;
                inputbufedc[input_posedc]='\0';
                setfillstyle(11, WHITE);
              //  bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endedc = 1;
            break;
        case 27:  //Escape
            escclickededc=1;
            the_endedc = 1;

            break;

        default:
            if (input_posedc < 10 && EDC[0] >= ' ' && EDC[0] <= '~')
             {
                inputbufedc[input_posedc] = EDC[0];
                input_posedc++;

            }
        }
    } while (!the_endedc);
    for(int i=0;i<=input_posedc;i++)
    {
        EDC[i]=inputbufedc[i];
    }
    edc=atoi(EDC);
   }
   void student::takemathmark()
   {
        char inputbufmath[30]="";
     int input_posmath = 0;
    int the_endmath = 0;
    setcolor(7);
    setfillstyle(11, BLACK);
   
    settextstyle(9, HORIZ_DIR, 2);
    int escclickedmath=0;
    do {
        outtextxy(10, 220, "enter math mark         :");

        line(350, 240, 600, 240);
         outtextxy(350, 220, inputbufmath);
     
        maths[0] = getch();
        switch (maths[0]) {
        case 8: // backspace
            if (input_posmath)
                {
                input_posmath--;
                inputbufmath[input_posmath]='\0';
                setfillstyle(11, WHITE);
               

               }
            break;
        case 13: // enter return
            the_endmath = 1;
            break;
        case 27:  //Escape
            escclickedmath=1;
            the_endmath = 1;
//            goto backk ;
            break;

        default:
            if (input_posmath < 10 && maths[0] >= ' ' && maths[0]<= '~')
             {
                inputbufmath[input_posmath] = maths[0];
                input_posmath++;

            }
        }
    } while (!the_endmath);
    for(int i=0;i<=input_posmath;i++)
    {
        maths[i]=inputbufmath[i];
    }
    math=atoi(maths);
   // getch();
   }
   void student::getdata()
   {

//    check();
  //  takeid();
    names();
    takeid();
    takecodmark();
    takedsamark();
    takeisdmark();
    takeedcmark();
    takemathmark();

}
void student::calculate()
{
	per=(cod+dsa+math+isd+edc)/5.0;
	if(per>=90)
		grade='A+';
	else if(per>=80)
		grade='A';
	else if(per>=75)
		grade='A-';
	else if(per>=70)
		grade='B+';
	else if(per>=65)
		grade='B';
	else if(per>=60)
		grade='B-';
	else if(per>=55)
		grade='C+';
	else if(per>=50)
		grade='C';
	else
		grade='F';

   char strper[10]="";

    sprintf(strper,"percentage=%d",per);
	outtextxy(10,220,strper);
	char strgrd[10]="";
	sprintf(strgrd,"Letter Grade: %s",grade);
	outtextxy(10,250,strgrd);
}


void student::showdata()
{
   
   
    cleardevice();
    
     char arr[50];
	 sprintf(arr,"id: %d",idno);
	outtextxy(10,10,arr);
	
	char narr[10]="";
	sprintf(narr,"name: %s",name);
	outtextxy(10,40,narr);
	char strcod[10]="";
	sprintf(strcod,"cod: %d",cod);
	outtextxy(10,70,strcod);
	char strdsa[10];
	sprintf(strdsa,"DSA: %d",dsa);
	outtextxy(10,100,strdsa);
	char stredc[10];
	sprintf(stredc,"EDC: %d",edc);
	outtextxy(10,130,stredc);
	char strisd[10];
	sprintf(strisd,"ISD: %d",isd);
	outtextxy(10,160,strisd);
	char strmath[10];
	sprintf(strmath,"math:%d",math);
	outtextxy(10,190,strmath);
	

	getch();
}

void student::show_tabular()
{
	
	cleardevice();
	 settextstyle(9,HORIZ_DIR,2);
     char arr[50];
	 sprintf(arr," %d",idno);
	outtextxy(220,220,arr);
	
	char narr[20]="";
	sprintf(narr," %s",name);
	outtextxy(320,220,narr);
	char strcod[10]="";
	sprintf(strcod," %d",cod);
	outtextxy(720,220,strcod);
	char strdsa[10];
	sprintf(strdsa," %d",dsa);
	outtextxy(820,220,strdsa);
	char stredc[10];
	sprintf(stredc," %d",edc);
	outtextxy(920,220,stredc);
	char strisd[10];
	sprintf(strisd," %d",isd);
	outtextxy(1020,220,strisd);
	char strmath[10];
	sprintf(strmath," %d",math);
	outtextxy(1120,220,strmath);

	settextstyle(9,HORIZ_DIR,5);
    outtextxy(400,10,"student marksheet database");
    rectangle(200,100,1200,500);
    settextstyle(9,HORIZ_DIR,3);
    outtextxy(220,120,"id");
    line(300,100,300,500);
    outtextxy(320,120,"name");
    outtextxy(720,120,"DSA");
    outtextxy(820,120,"COD");
    outtextxy(920,120,"ISD");
    outtextxy(1020,120,"EDC");
    outtextxy(1120,120,"math");
    line(700,100,700,500);
    line(800,100,800,500);
    line(900,100,900,500);
    line(1000,100,1000,500);
    line(1100,100,1100,500);
    line(200,200,1200,200);
    line(200,300,1200,300);
    line(200,400,1200,400);
  

    getch();

}

int  student::getIDNum()
{
	return idno;
}





void display_all()
{
	student st;
	ifstream inFile;
//	system("cls");
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		
		    st.showdata();
		outtextxy(10,610,"====================================");
	}
	inFile.close();
	getch();

	
}



void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
	    outtextxy(10,10,"File could not be open !! Press any Key...");


		cin.ignore();
		cin.get();
		getch();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.getIDNum()==n)
		{

		    for(int i=0;i<20;i++)
		    {
		    st.name[i]='/0';
		    }
	  		 st.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
	outtextxy(200,300,"record not exist");
		
		getch();
	
}


void modify_student(int n)
{
	bool found=false;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		outtextxy(10,10,"File could not be open !! Press any Key...");
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.getIDNum()==n)
		{
			st.showdata();
			outtextxy(10,220,"Please Enter The New Details of student");
			st.getdata();
		    	int pos=(-1)*static_cast<int>(sizeof(st));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&st), sizeof(student));
		    	outtextxy(10,440,"Record Updated");
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		outtextxy(10,30," Record Not Found ");

	getch();
}



void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
	    outtextxy(10,20,"File could not be open !! Press any Key...");
		
		getch();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.getIDNum()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	//cout<<"\n\n\tRecord Deleted ..";
	outtextxy(10,100,"Record Deleted ..");
	
	getch();
}


void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		outtextxy(10,10,"File could not be open !! Press any Key...");
		
		getch();
		return;
	}
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.show_tabular();
	}
	inFile.close();
	getch();
}






void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	cleardevice();
	st.getdata();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();

    
	outtextxy(10,250,"Student record Has Been Created");
	outtextxy(10,280,"press any key to continue");
	
	getch();


int main()
{
    initwindow(2000,1000,"");



	char ch,num[10];
	int no;

	char inputbufch[2]="";
	
	settextstyle(9,HORIZ_DIR,8);

setcolor(9);

outtextxy(50,130,"student managment system");

settextstyle(9,HORIZ_DIR,1);
ellipse(1200,600,0,360,50,30);
outtextxy(1170,590,"start");
getch();
outtextxy(565,400,"loading");
for(int i=0;i<150;i++)
{
bar(650+i,400,655+i,420);
delay(20);


}
	do{


	    cleardevice();
	system("cls");
	rectangle(80,30,700,600);
	settextstyle(3,HORIZ_DIR,2);
	rectangle(90,60,500,100);
	outtextxy(100,70,"1.enter the student dtl");
	delay(100);
	rectangle(90,120,500,160);
	outtextxy(100,130,"2.display all student record");
	delay (100);
	rectangle(90,180,500,220);
	outtextxy(100,190,"3.search student record");
	delay(100);
	rectangle(90,240,500,280);
	outtextxy(100,250,"4.modify student record");
	delay(100);
    rectangle(90,300,500,340);
	outtextxy(100,310,"5.delete student record");
	rectangle(90,360,300,400);
	outtextxy(100,370,"6.display class reasult");
	rectangle(90,420,500,460);
	outtextxy(100,430,"7.exit");



     int input_posch = 0;
    int the_endch = 0;
 
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 3);
    int escclickedch=0;
    do {
        outtextxy(100, 500, "Please Enter Your Choice (1-7):");

       // line(570, 520, 630, 520);
         outtextxy(570, 500, inputbufch);
     //   outtextxy(400, 500, "Press ESC to continue without saving");
        ch = getch();
        switch (ch) {
        case 8: // backspace
            if (input_posch)
                {
                input_posch--;
                inputbufch[input_posch]='\0';
                setfillstyle(11, WHITE);
               // bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endch = 1;
            break;
        case 27:  //Escape
            escclickedch=1;
            the_endch = 1;
//            goto backk ;
            break;

        default:
            if (input_posch < 2 - 1 && ch >=' ' && ch <= '~') {
                inputbufch[input_posch] = ch;
                input_posch++;

            }
        }
    } while (!the_endch);//*/


	system("cls");

	switch(inputbufch[0])
	{
	case '1':	{
	    write_student();
	break;
	}
	case '2':	display_all(); break;
	case '3':
	cleardevice();
	{
	outtextxy(10,10,"Please Enter Student's ID number");
	char inputbufnum[30]="";
     int input_posnum = 0;
     int the_endnum = 0;
     setcolor(RED);
     setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
     settextstyle(3, HORIZ_DIR, 3);
     int escclickednum=0;
     do {
        outtextxy(10, 70, "Enter student id           :");

        line(350, 90, 600, 90);
         outtextxy(350, 70, inputbufnum);
        num[0] = getch();
//        idno=atoi(id);
        switch (num[0]) {
        case 8: // backspace
            if (input_posnum)
                {
                input_posnum--;
                inputbufnum[input_posnum]='\0';
                setfillstyle(11, WHITE);
              //  bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endnum = 1;
            break;
        case 27:  //Escape
            escclickednum=1;
            the_endnum = 1;
//            goto backk ;
            break;

        default:
            if (input_posnum < 10 && num[0] >= ' ' && num[0] <= '~')
             {
                inputbufnum[input_posnum] = num[0];
                input_posnum++;

            }
        }
    } while (!the_endnum);
    for(int i=0; i<=input_posnum ;i++)
    {
        num[i]=inputbufnum[i];
    }
    char arr[6];
     no=atoi(num);

	        // cin>>num;
				display_sp(no);
    }
     break;
	case '4':
	{
	    cleardevice();
	    outtextxy(10,10,"Please Enter Student's ID number");
	char inputbufnum[30]="";
     int input_posnum = 0;
     int the_endnum = 0;
     setcolor(RED);
     setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
     settextstyle(3, HORIZ_DIR, 3);
     int escclickednum=0;
     do {
        outtextxy(10, 70, "Enter student id           :");

        line(350, 90, 600, 90);
         outtextxy(350, 70, inputbufnum);
        num[0] = getch();
//        idno=atoi(id);
        switch (num[0]) {
        case 8: // backspace
            if (input_posnum)
                {
                input_posnum--;
                inputbufnum[input_posnum]='\0';
                setfillstyle(11, WHITE);
              //  bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endnum = 1;
            break;
        case 27:  //Escape
            escclickednum=1;
            the_endnum = 1;
//            goto backk ;
            break;

        default:
            if (input_posnum < 10 && num[0] >= ' ' && num[0] <= '~')
             {
                inputbufnum[input_posnum] = num[0];
                input_posnum++;

            }
        }
    } while (!the_endnum);
    for(int i=0; i<=input_posnum ;i++)
    {
        num[i]=inputbufnum[i];
    }
    char arr[6];
     no=atoi(num);
     modify_student(no);break;
	}	//cout<<"\n\n\tPlease Enter Student's ID number: "; cin>>no;
		//	modify_student(no);break;
	case '5':
	{
	     cleardevice();
	    outtextxy(10,10,"Please Enter Student's ID number");
	char inputbufnum[30]="";
     int input_posnum = 0;
     int the_endnum = 0;
     setcolor(RED);
     setfillstyle(11, BLACK);
   // bar(0, 0, 1600, 900);
     settextstyle(3, HORIZ_DIR, 3);
     int escclickednum=0;
     do {
        outtextxy(10, 70, "Enter student id           :");

        line(350, 90, 600, 90);
         outtextxy(350, 70, inputbufnum);
        num[0] = getch();
//        idno=atoi(id);
        switch (num[0]) {
        case 8: // backspace
            if (input_posnum)
                {
                input_posnum--;
                inputbufnum[input_posnum]='\0';
                setfillstyle(11, WHITE);
              //  bar(0, 0, 1600, 900);

               }
            break;
        case 13: // enter return
            the_endnum = 1;
            break;
        case 27:  //Escape
            escclickednum=1;
            the_endnum = 1;
//            goto backk ;
            break;

        default:
            if (input_posnum < 10 && num[0] >= ' ' && num[0] <= '~')
             {
                inputbufnum[input_posnum] = num[0];
                input_posnum++;

            }
        }
    } while (!the_endnum);
    for(int i=0; i<=input_posnum ;i++)
    {
        num[i]=inputbufnum[i];
    }
    char arr[6];
     no=atoi(num);
     delete_student(no);break;
	}

	//cout<<"\n\n\tPlease Enter Student's ID number: "; cin>>no;
		//	delete_student(no);break;
	case '6' :	class_result(); break;
	case '7':	exit(0);;
	default:	cout<<"\a";

    }
	}while(inputbufch[0]!='7');




	return 0;
}
