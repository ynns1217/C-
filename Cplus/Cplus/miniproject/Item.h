#ifndef __ITEM_H__
#define __ITEM_H__
#pragma once
#include<iostream>
#include<cstring>
#include<vector>
#include<Windows.h>
#include<random>
#include<cstdlib>



#pragma warning(disable:4996)

using namespace std;

class Software
{
private:
	string Software_Name;           // Software �̸�
	string Software_Num;            // Software ǰ��
	string Software_Searial;        // Software �ø����ȣ
	int proc;                       //�۾� ����
public:
	Software() { };
	Software(string aSoftware_Name, string aSoftware_Num, string aSoftware_Searial, int proc = 1);
	void print_Info() const;
	string& return_software_name();
	string& return_software_serial();
};

class Power
{
private:
	string Power_Name;           // Power �̸�
	string Power_Num;            // Power ǰ��
	string Power_Searial;        // Power �ø����ȣ
	int proc;                    //�۾� ����
public:
	Power() { };
	Power(string aPower_Name, string aPower_Num, string aPower_Searial, int proc = 2);
	void print_Info() const;
	string& return_power_name();
	string& return_power_serial();
};

class Case
{
private:
	string Case_Name;            // Case �̸�
	string Case_Num;             // Case ǰ��
	string Case_Searial;         // Case �ø����ȣ
	int proc;                    //�۾� ����
public:
	Case() { };
	Case(string aCase_Name, string aCase_Num, string aCase_Searial, int proc = 3);
	void print_Info() const;
	string& return_case_name();
	string& return_case_serial();
};

class SSD
{
private:
	string SSD_Name;            // SSD �̸�
	string SSD_Num;             // SSD ǰ��
	string SSD_Searial;         // SSD �ø����ȣ
	int proc;                   //�۾� ����  
public:
	SSD() { };
	SSD(string aSSD_Name, string aSSD_Num, string aSSD_Searial, int proc = 4);
	void print_Info() const;
	string& return_ssd_name();
	string& return_ssd_serial();
	string& return_ssd_num();
};

class HDD
{
private:
	string HDD_Name;            // HDD �̸�
	string HDD_Num;             // HDD ǰ��
	string HDD_Searial;         // HDD �ø����ȣ
	int proc;                   //�۾� ����
public:
	HDD() { };
	HDD(string aHDD_Name, string aHDD_Num, string aHDD_Searial, int proc = 5);
	void print_Info() const;
	string& return_hdd_name();
	string& return_hdd_serial();
};

class Memorry
{
private:
	string Memorry_Name;           // Memorry �̸�
	string Memorry_Num;             // Memorry ǰ��
	string Memorry_Searial;         // Memorry �ø����ȣ
	int proc;                       //�۾� ����
public:
	Memorry() { };
	Memorry(string aMemorry_Name, string aMemorry_Num, string aMemorry_Searial, int proc = 6);
	void print_Info() const;
	string& return_memorry_name();
	string& return_memorry_serial();
};

class MB
{
private:
	string MB_Name;            // MB �̸�
	string MB_Num;             // MB ǰ��
	string MB_Searial;         // MB �ø����ȣ
	int proc;                  //�۾� ����
public:
	MB() { }
	MB(string aMB_Name, string aMB_Num, string aMB_Searial, int proc = 7);
	void print_Info() const;
	string& return_mb_name();
	string& return_mb_serial();
};


class CPU
{
private:
	string CPU_Name;              // CPU �̸�
	string CPU_Num;               // CPU ǰ��
	string CPU_Searial;           // CPU �ø����ȣ
	int proc;                     //�۾� ����
public:
	CPU() { }
	CPU(string aCPU_Name, string aCPU_Num, string aCPU_Searial, int proc = 8);
	void print_Info() const;
	string& return_cpu_name();
	string& return_cpu_serial();

};


class BOM 
{
private:
	string Product_name;
	string Product_Searial;
	CPU* cpu;
	MB* mb;
	Memorry* ram;
	HDD* hdd;
	SSD* ssd;
	Case* pc_case;
	Power* pow;
	Software* software_os;

public:
	BOM();
	BOM(string aProduct_name, string aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os);
	void Print_produt() const;
	string& return_bom_name();
	string& return_bom_serial();
	string& return_software_name();
	string& return_software_serial();
	string& return_power_name();
	string& return_power_serial();
	string& return_case_name();
	string& return_case_serial();
	string& return_ssd_name();
	string& return_ssd_serial();
	string& return_ssd_num();
	string& return_hdd_name();
	string& return_hdd_serial();
	string& return_memorry_name();
	string& return_memorry_serial();
	string& return_mb_name();
	string& return_mb_serial();
	string& return_cpu_name();
	string& return_cpu_serial();
	string& return_Product_Searial();
};

class errlist
{
private:

public:

};

#endif 
