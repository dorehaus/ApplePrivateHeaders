/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_ID2;

typedef struct cfs_client_s* cfs_client_sRef;

typedef struct {
	unsigned char field1[16];
	unsigned char field2[16];
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned short field11;
	unsigned short field12;
	unsigned field13;
	unsigned field14;
	unsigned short field15;
	unsigned char field16[2];
} SCD_Struct_ID4;

typedef struct channel* channelRef;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct {
	char field1;
	unsigned short field2;
	unsigned char field3;
	unsigned short field4;
	unsigned char field5;
} SCD_Struct_ID7;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_ID8;

typedef struct {
	unsigned field1;
	unsigned long long field2;
	unsigned short field3;
	unsigned char field4;
	char field5;
	unsigned short field6[12];
	unsigned char field7;
	unsigned short field8;
	SCD_Struct_ID8 field9;
	double field10;
	unsigned long long field11;
} SCD_Struct_ID9;

typedef struct {
	char* field1;
	char* field2;
	char* field3;
	char* field4;
	BOOL field5;
} SCD_Struct_ID10;

typedef struct {
	char* field1;
	unsigned short field2;
	int field3;
	unsigned short field4[12];
	long long field5;
	unsigned char field6;
	unsigned short field7;
	unsigned char field8;
	char field9;
	char field10;
	unsigned short field11;
	SCD_Struct_ID8 field12;
	char field13;
	unsigned field14;
} SCD_Struct_ID11;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	char field6;
	char field7;
	char field8;
	char field9;
	char field10;
	char field11;
	unsigned field12;
	sockaddr_storage field13;
	sockaddr_storage field14;
	unsigned short field15;
	unsigned char field16;
	int field17;
	SCD_Struct_ID11 field18[8];
	char field19;
	char field20;
	int field21;
	double field22;
	unsigned long long field23;
	unsigned char field24[0];
} SCD_Struct_ID12;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

