/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommerceCore/CommerceCore-Structs.h>
@interface EncryptedBuffer : NSObject {

	unsigned _magic;
	unsigned char _key[16];
	unsigned long long _size;
	unsigned long long _pageSize;
	unsigned _pageCount;
	unsigned _firstPageInBuffer;
	char* _pageEncryptBits;
	char* _pageTempBuffer;
	long long _logicalSize;
	char* _baseAddress;
	/*function pointer*/void* _ivProc;
	void* _ivProcRefcon;
	_sFILE* _file;
	unsigned long long _fileSize;
	char _cacheDirty;
	unsigned _cachedPageCount;
	unsigned short _options;

}

@property (assign) unsigned short options;              //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(void)setOptions:(unsigned short)arg1 ;
-(unsigned short)options;
-(id)initWithSize:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 key:(const char*)arg3 options:(unsigned short)arg4 ;
-(unsigned long long)_writeCurrentCacheBlock;
-(unsigned long long)_decryptRange:(NSRange)arg1 ;
-(unsigned long long)_cachePage:(unsigned)arg1 ;
-(id)initWithFileAtURL:(id)arg1 pageSize:(unsigned long long)arg2 key:(const char*)arg3 options:(unsigned short)arg4 ;
-(void)setIVProc:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)decrypt;
@end

