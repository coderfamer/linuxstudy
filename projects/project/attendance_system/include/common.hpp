#ifndef _COMMON_H
#define _COMMON_H

#include <iostream>
#include <string>

using std::string;

typedef enum 
{
	SUCCESS = 0,
	SYS_ERR_RANGE,
	SYS_ERR_USER,
	SYS_ERR_PWD,
	SYS_ERR_CHOICE,
	SYS_ERR_ID
} SYS_ERROR_CODE;	

//sqlite3 get user info
typedef struct 
{
	string user;
	string csl_user;
	string name;
	string pwd;
	string sex;
	int age ;
	string classes;
	string department;	
} user_item;


typedef struct 
{
	string user;
	string course_name;
	string course_id;
	string tch_user;
	string tch_id;
} course_item;

typedef struct 
{
	string user_stu;
	string user_tch;
	string user_csl;
	string stu_name;
	string tch_name;
	string course_id;
	string course_name;
	string afd_reason;
	int afd_num;
	int afd_count;
} attendance_item;

#endif
