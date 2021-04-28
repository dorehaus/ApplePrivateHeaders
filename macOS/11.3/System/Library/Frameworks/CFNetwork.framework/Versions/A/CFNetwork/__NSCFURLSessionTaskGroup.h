/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@class NSURLSessionConfiguration, NSURLSession, NSString;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {

	NSURLSessionConfiguration* _groupConfiguration_ivar;
	NSURLSession* _groupSession_ivar;

}

@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSession *)_groupSession;
-(NSURLSessionConfiguration *)_groupConfiguration;
@end

