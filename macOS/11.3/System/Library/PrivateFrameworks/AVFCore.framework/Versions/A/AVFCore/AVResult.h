/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSError;

@interface AVResult : NSObject {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	long long _status;
	NSError* _error;

}

@property (getter=isFailed,readonly) char failed; 
-(void)dealloc;
-(id)init;
-(char)isFailed;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)getStatus:(long long*)arg1 error:(id*)arg2 ;
@end

