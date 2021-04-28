/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NSPByteParser : NSObject <NSCopying> {

	NSData* _data;
	const char* _bytes;
	const char* _cursor;
	unsigned long long _offset;

}

@property (readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) const char* bytes;                    //@synthesize bytes=_bytes - In the implementation block
@property (assign) const char* cursor;                     //@synthesize cursor=_cursor - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)bytes;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)offset;
-(const char*)cursor;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setCursor:(const char*)arg1 ;
-(id)parseDomainName;
-(unsigned short)parse16Bits:(char*)arg1 ;
-(unsigned)parse32Bits:(char*)arg1 ;
-(id)parseAddressWithFamily:(unsigned char)arg1 ;
-(const char*)parseBytes:(unsigned long long)arg1 ;
-(unsigned char)parse8Bits:(char*)arg1 ;
-(char)advanceBy:(unsigned long long)arg1 andCopyTo:(void*)arg2 ;
@end

