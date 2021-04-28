/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/Versions/A/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> {
	Database __value_;
} compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>>;

typedef struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> {
	Database __begin_;
	Database __end_;
	compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> __end_cap_;
} vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>>;

typedef struct DatabaseStatus {
	vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> m_databases;
} DatabaseStatus;

typedef struct _long {
	unsigned long long __cap_;
	unsigned long long __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[23];
} short;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> {
	DatabaseUpdaterStatus __value_;
} compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>>;

typedef struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> {
	DatabaseUpdaterStatus __begin_;
	DatabaseUpdaterStatus __end_;
	compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> __end_cap_;
} vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>>;

typedef struct _compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> {
	Connection __value_;
} compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>>;

typedef struct vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> {
	Connection __begin_;
	Connection __end_;
	compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> __end_cap_;
} vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>>;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>;

typedef struct vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> __begin_;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> __end_;
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> __end_cap_;
} vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

typedef struct ServiceStatus {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> m_name;
	int m_pid;
	vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>> m_activeTransactions;
	vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> m_connections;
	vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> m_databaseUpdatersStatuses;
} ServiceStatus;

typedef struct DatabaseUpdaterStatus {
	int state;
	int provider;
} DatabaseUpdaterStatus;

typedef struct shared_ptr<SafeBrowsing::LookupContext> {
	LookupContext __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SafeBrowsing::LookupContext>;

typedef struct _NSZone* NSZoneRef;

typedef struct OptionSet<Backend::LookupResult::Type> {
	unsigned m_storage;
} OptionSet<Backend::LookupResult::Type>;

typedef struct LookupResult {
	OptionSet<Backend::LookupResult::Type> type;
	int provider;
} LookupResult;

