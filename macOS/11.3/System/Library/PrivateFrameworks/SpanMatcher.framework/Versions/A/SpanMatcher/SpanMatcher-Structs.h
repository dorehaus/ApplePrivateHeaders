/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpanMatcher.framework/Versions/A/SpanMatcher
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct cdb {
	int cdb_fd;
	unsigned cdb_fsize;
	unsigned cdb_dend;
	char* cdb_mem;
	unsigned cdb_vpos;
	unsigned cdb_vlen;
	unsigned cdb_kpos;
	unsigned cdb_klen;
} cdb;

typedef struct cdb_make {
	int cdb_fd;
	unsigned cdb_dpos;
	unsigned cdb_rcnt;
	unsigned char cdb_buf[4096];
	char* cdb_bpos;
	cdb_rl cdb_rec[256];
} cdb_make;

typedef struct cdb_find {
	cdb cdb_cdbp;
	unsigned cdb_hval;
	char* cdb_htp;
	char* cdb_htab;
	char* cdb_htend;
	unsigned cdb_httodo;
	void cdb_key;
	unsigned cdb_klen;
} cdb_find;
