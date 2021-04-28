/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUReadChannel.h>
#import <TSUtility/TSUStreamWriteChannel.h>
#import <TSUtility/TSURandomWriteChannel.h>

@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject, NSString;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_io> _channel;
	char _isClosed;

}

@property (nonatomic,readonly) char isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isValid;
-(void)close;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5 cleanupHandler:(/*^block*/id)arg6 ;
-(id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(/*^block*/id)arg4 ;
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomReadingWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForRandomReadingWritingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(/*^block*/id)arg3 ;
@end
