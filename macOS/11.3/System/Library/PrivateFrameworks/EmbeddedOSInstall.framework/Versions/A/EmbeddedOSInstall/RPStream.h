/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@class NSURLSession, NSURLSessionStreamTask, NSInputStream, NSOutputStream, NSString;

@interface RPStream : NSObject <NSURLSessionStreamDelegate> {

	NSURLSession* _session;
	NSURLSessionStreamTask* _task;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	/*function pointer*/void* _cb;
	void* _cbUserContext;

}

@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSURLSessionStreamTask * task;                   //@synthesize task=_task - In the implementation block
@property (retain) NSInputStream * inputStream;                     //@synthesize inputStream=_inputStream - In the implementation block
@property (retain) NSOutputStream * outputStream;                   //@synthesize outputStream=_outputStream - In the implementation block
@property (assign) /*function pointer*/void* cb;                    //@synthesize cb=_cb - In the implementation block
@property (assign) void* cbUserContext;                             //@synthesize cbUserContext=_cbUserContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(NSOutputStream *)outputStream;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSessionStreamTask *)task;
-(void)setTask:(NSURLSessionStreamTask *)arg1 ;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setCb:(/*function pointer*/void*)arg1 ;
-(void)setCbUserContext:(void*)arg1 ;
-(/*function pointer*/void*)cb;
-(void*)cbUserContext;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(id)initWithHost:(id)arg1 port:(id)arg2 cb:(/*function pointer*/void*)arg3 userContext:(void*)arg4 ;
@end

