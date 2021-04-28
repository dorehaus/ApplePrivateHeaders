/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MCTaskHandler, NSError, NSString;

@interface MCTaskHandlerOperation : NSOperation {

	char _succeeded;
	MCTaskHandler* _handler;
	NSError* _error;
	NSString* _logPrefix;

}

@property (retain) MCTaskHandler * handler;              //@synthesize handler=_handler - In the implementation block
@property (assign) char succeeded;                       //@synthesize succeeded=_succeeded - In the implementation block
@property (retain) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (copy) NSString * logPrefix;                   //@synthesize logPrefix=_logPrefix - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(MCTaskHandler *)handler;
-(void)setHandler:(MCTaskHandler *)arg1 ;
-(char)succeeded;
-(void)setSucceeded:(char)arg1 ;
-(NSString *)logPrefix;
-(void)setLogPrefix:(NSString *)arg1 ;
@end

