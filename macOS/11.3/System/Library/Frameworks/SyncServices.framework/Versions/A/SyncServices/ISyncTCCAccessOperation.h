/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface ISyncTCCAccessOperation : NSOperation {

	char _isExecuting;
	char _isFinished;
	char _accessGranted;

}

@property (readonly) char accessGranted;              //@synthesize accessGranted=_accessGranted - In the implementation block
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(char)accessGranted;
-(void)finish:(char)arg1 ;
@end
