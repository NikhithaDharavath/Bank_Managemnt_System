#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;string.h&gt;
void Menu();
struct date{
int day,month,year;
};
struct Account{
char name[50],phone[12],acc_num[20],acc_type[10],address[200];
int age;
float amount;
struct date dob;
struct date deposit;
struct date withdraw;
}add,update,check,remov,transaction;

//For BOLD just replace the initial 0 before the ; with a 1. BOLD green would be\033[1;32m
void black () {
printf(&quot;\033[1;30m&quot;); // Escape is: \033
} // Color Code is: [0;30m

void red() {
printf(&quot;\033[1;31m&quot;);
}

void green() {
printf(&quot;\033[1;32m&quot;);
}

void yellow() {
printf(&quot;\033[1;33m&quot;);

}

void blue() {
printf(&quot;\033[1;34m&quot;);
}

void purple() {
printf(&quot;\033[1;35m&quot;);
}

void cyan() {
printf(&quot;\033[1;36m&quot;);
}

void reset () {
printf(&quot;\033[0m&quot;); //Resets the text to defaults
}
void fordelay(int n)
{
int k;
for(int i=0;i&lt;n;i++)k=i;
}

void Exit(){
system(&quot;clear&quot;);
green();
printf(&quot;\n\t\t\tThanks for using Bank System developed by Adhvaitha!!!!....\n&quot;);
fordelay(900000000);
}
void Create_New_account(){

FILE *f=fopen(&quot;account_details.dat&quot;,&quot;a+&quot;);
system(&quot;clear&quot;);
purple();
printf(&quot;\n\t\t\tAdd Customer Account Details\n&quot;);
cyan(); printf(&quot;\n\t\t\tEnter the account number:&quot;); reset();
scanf(&quot;%s&quot;,add.acc_num);
//if(strlen(add.acc_num)==0){red(); printf(&quot;\t\t\tPlease Enter Valid Account Number&quot;);
reset(); goto new_account;}
while(fscanf(f,&quot;%s %d %s %s %s %s %d/%d/%d
%f&quot;,check.name,&amp;check.age,check.phone,check.acc_num,check.acc_type,check.address,&amp;check.dob
.day,&amp;check.dob.month,&amp;check.dob.year,&amp;check.amount)!=EOF){
if(strcmp(check.acc_num,add.acc_num)==0){
printf(&quot;\t\t\tPlease enter New Account Number&quot;);
fordelay(100000000);
Create_New_account();
}
}

cyan(); printf(&quot;\n\t\t\tEnter Customer&#39;s name:&quot;); reset();
scanf(&quot;%s&quot;,add.name);
cyan(); printf(&quot;\n\t\t\tEnter Customer&#39;s age:&quot;); reset();
scanf(&quot;%d&quot;,&amp;add.age);
cyan(); printf(&quot;\n\t\t\tEnter Customer&#39;s Phone number:&quot;); reset();
scanf(&quot;%s&quot;,add.phone);
cyan(); printf(&quot;\n\tType of account:\n\t\t\t#Saving\n\t\t\t#Current\n\t\t\t#Fixed1(for 1
year)\n\t\t\t#Fixed2(for 2 years)\n\t\t\t#Fixed3(for 3 years)\n\n\t\t\tEnter your choice:&quot;); reset();
scanf(&quot;%s&quot;,add.acc_type);
cyan(); printf(&quot;\n\t\t\tEnter Valid address:&quot;); reset();
scanf(&quot;%s&quot;,add.address);
cyan(); printf(&quot;\n\t\t\tEnter Amount:&quot;); reset();
scanf(&quot;%f&quot;,&amp;add.amount);
cyan(); printf(&quot;\n\t\t\tEnter the today&#39;s date (dd/mm/yyyy):&quot;); reset();

scanf(&quot;%d/%d/%d&quot;,&amp;add.dob.day,&amp;add.dob.month,&amp;add.dob.year);

fprintf(f,&quot;%s %d %s %s %s %s %d/%d/%d
%f\n&quot;,add.name,add.age,add.phone,add.acc_num,add.acc_type,add.address,add.dob.day,add.dob.
month,add.dob.year,add.amount);
fclose(f);
green();
printf(&quot;\t\t\tAccount Details Inserted Successfully\n&quot;);
fordelay(100000000);
returning:
blue();
printf(&quot;\n\t\t\tPress 1 for the Menu........\n\t\t\tPress 0 to exit the Menu:&quot;);
int n;
scanf(&quot;%d&quot;,&amp;n);
system(&quot;clear&quot;);
if(n==1){
fordelay(90000000);
Menu();
}
else if(n==0){
blue();
Exit();
fordelay(900000000);
return;
}

else {
red();
printf(&quot;\t\t\tInvalid Option!!!\n&quot;);
fordelay(900000000);
goto returning;
}

if(n==1)
{
green();
printf(&quot;\t\t\tRedirecting to main page&quot;);
fordelay(90000000);
for(i=0;i&lt;19;i++)
{
fordelay(90000000);
printf(&quot;.&quot;);
}
printf(&quot;\n&quot;);
system(&quot;clear&quot;);
main();
}

else if(n==0)
{
purple();
printf(&quot;\t\t\tExisting the page&quot;);
Exit();
fordelay(20000000);
for(i=0;i&lt;19;i++)
{
fordelay(20000000);
printf(&quot;.&quot;);
}
printf(&quot;\n&quot;);
return 0;
}

else {

red();
printf(&quot;\t\t\t!!!!!!!!Invalid!!!!!!!!!!\n&quot;);
fordelay(1000000000);
system(&quot;clear&quot;);
reset();
goto login_try;
}
}
return 0;
}
