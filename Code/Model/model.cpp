#include "model.h"
using namespace std;

inline float after_tax(float salary)
{
    // 梯度工资收税
    float tax;
    if(salary<36000)
        tax=salary*0.03f;
    else if(salary<144000)
        tax=(salary-36000)*0.1f+2520;
    else if(salary<300000)
        tax=(salary-144000)*0.2f+16920;
    else if(salary<420000)
        tax=(salary-144000)*0.25f+31920;
    else if(salary<660000)
        tax=(salary-144000)*0.3f+52920;
    else if(salary<960000)
        tax=(salary-144000)*0.35f+85920;
    else tax=(salary-960000)*0.45f+181920;
    return salary-tax;

}
float worker::get_net_salary_total(){
    return after_tax(wage+overtime+bonus);
}
float management::get_net_salary_total(){
    return after_tax(wage+bonus+motivation);
}
float tech::get_net_salary_total(){
    return after_tax(wage+bonus+skill+project_budget);

}
float sales::get_net_salary_total(){
    return  after_tax(wage+bonus+sales_compensation);
}

employee::employee(QSqlRecord &record)
    :id(record.value("id").toString()),sex(static_cast<char>(record.value("sex").toInt())),name(record.value("name").toString()),dept(record.value("department").toString()),phone(record.value("phone_number").toString()),wage(record.value("salary").toFloat()){

}
void management::print_salary_detail(QTableWidget &display){
    QString tmp[]={"基准工资","绩效工资","激励工资","税后总工资"};
    float w[]={wage,bonus,motivation,taxed=get_net_salary_total()};
    for(int j=0;j<4;j++){
        if(auto p=display.item(j,0))p->setData(0,tmp[j]);
            else display.setItem(j,0,new QTableWidgetItem(tmp[j]));
        if(auto p=display.item(j,1))p->setData(0,w[j]);
            else display.setItem(j,1,new QTableWidgetItem(QString::number(w[j],'f',2)));
    }
}
void tech::print_salary_detail(QTableWidget &display){
    QString tmp[]={"基准工资","绩效工资","技术工资","项目工资","税后总工资"};
    float w[]={wage,bonus,skill,project_budget,taxed=get_net_salary_total()};
    for(int j=0;j<5;j++){
        if(auto p=display.item(j,0))p->setData(0,tmp[j]);
            else display.setItem(j,0,new QTableWidgetItem(tmp[j]));
        if(auto p=display.item(j,1))p->setData(0,w[j]);
            else display.setItem(j,1,new QTableWidgetItem(QString::number(w[j],'f',2)));
    }

}
void sales::print_salary_detail(QTableWidget &display){
    QString tmp[]={"基准工资","绩效工资","销售提成","税后总工资"};
    float w[]={wage,bonus,sales_compensation,taxed=get_net_salary_total()};
    for(int j=0;j<4;j++){
        if(auto p=display.item(j,0))p->setData(0,tmp[j]);
            else display.setItem(j,0,new QTableWidgetItem(tmp[j]));
        if(auto p=display.item(j,1))p->setData(0,w[j]);
            else display.setItem(j,1,new QTableWidgetItem(QString::number(w[j],'f',2)));
    }
}
void worker::print_salary_detail(QTableWidget &display){
    QString tmp[]={"基准工资","绩效工资","加班工资","税后总工资"};
    float w[]={wage,bonus,overtime,taxed=get_net_salary_total()};
    for(int j=0;j<4;j++){
        if(auto p=display.item(j,0))p->setData(0,tmp[j]);
            else display.setItem(j,0,new QTableWidgetItem(tmp[j]));
        if(auto p=display.item(j,1))p->setData(0,w[j]);
            else display.setItem(j,1,new QTableWidgetItem(QString::number(w[j],'f',2)));
    }
}

management::management(QSqlRecord &record):employee(record),motivation(5000.0f){}
tech::tech(QSqlRecord &record):employee(record),skill(5000.0f),project_budget(5000.0f){}
sales::sales(QSqlRecord &record):employee(record),sales_compensation(5000.0f){}
worker::worker(QSqlRecord &record):employee(record),overtime(0){}

