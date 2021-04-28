/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <IASUtilities/IASOutputStream.h>

@interface IASLZMAOutputStream : IASOutputStream {

	char _endOfFile;
	char _closed;
	int _compressionLevel;
	unsigned _writeBufferCapacity;
	long long _integrityCheck;
	SCD_Struct_IA13* _stream;
	char* _writeBuffer;
	SCD_Struct_IA14* _filters;
	SCD_Struct_IA15* _options;

}

@property (assign,nonatomic) SCD_Struct_IA13* stream;                   //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) char endOfFile;                            //@synthesize endOfFile=_endOfFile - In the implementation block
@property (assign,nonatomic) char closed;                               //@synthesize closed=_closed - In the implementation block
@property (assign,nonatomic) char* writeBuffer;                         //@synthesize writeBuffer=_writeBuffer - In the implementation block
@property (assign,nonatomic) unsigned writeBufferCapacity;              //@synthesize writeBufferCapacity=_writeBufferCapacity - In the implementation block
@property (assign,nonatomic) SCD_Struct_IA14* filters;                  //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) SCD_Struct_IA15* options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) int compressionLevel;                      //@synthesize compressionLevel=_compressionLevel - In the implementation block
@property (assign,nonatomic) long long integrityCheck;                  //@synthesize integrityCheck=_integrityCheck - In the implementation block
-(void)setEndOfFile:(char)arg1 ;
-(void)setWriteBufferCapacity:(unsigned)arg1 ;
-(unsigned)writeBufferCapacity;
-(id)currentLZMAErrorWithReturnValue:(int)arg1 ;
-(void)setIntegrityCheck:(long long)arg1 ;
-(long long)integrityCheck;
-(id)init;
-(unsigned long long)streamStatus;
-(char)hasSpaceAvailable;
-(void)open;
-(void)close;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)setOptions:(SCD_Struct_IA15*)arg1 ;
-(SCD_Struct_IA15*)options;
-(SCD_Struct_IA13*)stream;
-(char)closed;
-(void)setFilters:(SCD_Struct_IA14*)arg1 ;
-(SCD_Struct_IA14*)filters;
-(void)setStream:(SCD_Struct_IA13*)arg1 ;
-(void)setClosed:(char)arg1 ;
-(char*)writeBuffer;
-(void)setWriteBuffer:(char*)arg1 ;
-(void)setCompressionLevel:(int)arg1 ;
-(int)compressionLevel;
-(char)endOfFile;
@end
