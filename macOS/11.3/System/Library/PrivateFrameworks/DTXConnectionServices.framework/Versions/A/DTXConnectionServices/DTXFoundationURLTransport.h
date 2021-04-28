/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DTXConnectionServices.framework/Versions/A/DTXConnectionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DTXConnectionServices/DTXTransport.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSURLSessionDataTask, NSString;

@interface DTXFoundationURLTransport : DTXTransport <NSURLSessionDelegate> {

	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)schemes;
-(void)disconnect;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)initWithRemoteAddress:(id)arg1 ;
-(void)_shutDownSession;
-(unsigned)supportedDirections;
-(unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
@end

