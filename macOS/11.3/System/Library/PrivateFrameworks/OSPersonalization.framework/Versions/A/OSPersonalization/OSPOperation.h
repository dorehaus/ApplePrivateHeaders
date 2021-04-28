/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class OSPRequest, NSError;

@interface OSPOperation : NSOperation {

	char _isFinished;
	OSPRequest* _request;
	NSError* _error;

}

@property (retain) OSPRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign) char isFinished;                   //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                   //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(OSPRequest *)request;
-(char)isFinished;
-(void)setIsFinished:(char)arg1 ;
-(void)setRequest:(OSPRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
@end
