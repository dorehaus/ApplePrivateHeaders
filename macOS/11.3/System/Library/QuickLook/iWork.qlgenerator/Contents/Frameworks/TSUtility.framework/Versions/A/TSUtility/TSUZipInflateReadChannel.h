/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	unsigned long long _remainingUncompressedSize;
	unsigned _CRC;
	char _validateCRC;
	z_stream_s* _stream;
	unsigned long long _outBufferSize;
	char* _outBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)prepareBuffer;
-(char)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned*)arg3 isDone:(char)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned)arg3 validateCRC:(char)arg4 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
@end

