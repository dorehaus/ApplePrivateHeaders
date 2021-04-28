/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <IASUtilities/IASInputStream.h>

@interface IASLZMAInputStream : IASInputStream {

	char _endOfFile;
	char _closed;
	SCD_Struct_IA13* _stream;
	char* _buffer;
	unsigned long long _bufferCapacity;

}

@property (assign,nonatomic) SCD_Struct_IA13* stream;                        //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) char* buffer;                                   //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long bufferCapacity;              //@synthesize bufferCapacity=_bufferCapacity - In the implementation block
@property (assign,nonatomic) char endOfFile;                                 //@synthesize endOfFile=_endOfFile - In the implementation block
@property (assign,nonatomic) char closed;                                    //@synthesize closed=_closed - In the implementation block
+(void)initialize;
-(long long)seekingCapability;
-(char)forwardSeekingStreamRequiresReads;
-(void)setEndOfFile:(char)arg1 ;
-(id)currentLZMAErrorWithReturnValue:(int)arg1 ;
-(void)dealloc;
-(unsigned long long)streamStatus;
-(char)hasBytesAvailable;
-(void)open;
-(void)close;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(char)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(char*)buffer;
-(SCD_Struct_IA13*)stream;
-(char)closed;
-(void)setStream:(SCD_Struct_IA13*)arg1 ;
-(void)setClosed:(char)arg1 ;
-(void)setBuffer:(char*)arg1 ;
-(char)endOfFile;
-(unsigned long long)bufferCapacity;
-(void)setBufferCapacity:(unsigned long long)arg1 ;
@end
