/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/Versions/A/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned long long _pos;
	char _error;
	const char* _bytes;
	NSData* _data;
	unsigned long long _length;

}

@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize pos=_pos - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)offset;
-(char)isAtEnd;
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(char)hasError;
-(char)hasMoreData;
-(void)updateData:(id)arg1 ;
-(char)seekToOffset:(unsigned long long)arg1 ;
-(void)readTag:(unsigned*)arg1 type:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned)arg1 type:(unsigned char)arg2 ;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(unsigned short)readBigEndianFixed16;
-(unsigned)readBigEndianFixed32;
-(unsigned long long)readBigEndianFixed64;
-(id)readProtoBuffer;
-(char)readInt8;
-(long long)readVarInt;
-(double)readDouble;
-(float)readFloat;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readUint32;
-(unsigned long long)readUint64;
-(int)readSint32;
-(long long)readSint64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(int)readSfixed32;
-(long long)readSfixed64;
-(char)readBOOL;
-(id)readString;
-(id)readData;
-(char)mark:(SCD_Struct_PB0*)arg1 ;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(id)readBytes:(unsigned)arg1 ;
-(id)readBigEndianShortThenString;
@end

