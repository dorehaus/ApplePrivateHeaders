/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSString;

@interface IFFileReader : NSObject {

	int fileDescriptor;
	long long currentOffset;
	stat fileStat;
	NSString* filePath;
	char bigEndian;

}
-(unsigned long long)size;
-(void)dealloc;
-(int)fileDescriptor;
-(long long)position;
-(long long)seekTo:(long long)arg1 ;
-(id)intWithFile:(id)arg1 ;
-(void)readDataAsNetworkByteOrder:(char)arg1 ;
-(char)readDataWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 withCompressionType:(int)arg3 fromOffset:(long long)arg4 intoBuffer:(char*)arg5 ;
-(char)mapDataFromOffset:(long long)arg1 withLength:(unsigned long long)arg2 intoData:(id*)arg3 ;
-(char)extractInlineCPIOAtOffset:(long long)arg1 withLength:(unsigned long long)arg2 toPath:(id)arg3 ;
-(unsigned char)read8;
-(unsigned short)read16;
-(unsigned)read32;
-(unsigned long long)read64;
-(id)readStringWithLength:(unsigned long long)arg1 ;
-(char)_readDataAndDeflateWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 intoBuffer:(char*)arg3 ;
-(long long)seek:(long long)arg1 ;
-(unsigned char)read8AtOffset:(long long)arg1 ;
-(unsigned short)read16AtOffset:(long long)arg1 ;
-(unsigned)read32AtOffset:(long long)arg1 ;
-(unsigned long long)read64AtOffset:(long long)arg1 ;
-(id)readStringWithLength:(unsigned long long)arg1 AtOffset:(long long)arg2 ;
-(char)extractDataWithRawLength:(unsigned long long)arg1 andFinalLength:(unsigned long long)arg2 withCompressionType:(int)arg3 fromOffset:(long long)arg4 toFd:(int)arg5 ;
@end
