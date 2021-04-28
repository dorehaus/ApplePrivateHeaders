/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@interface PFTimedPerfCheck : NSObject {

	char _isSessionCompleted;
	os_unfair_lock_s _sessionCompletedLock;
	pc_sessionRef _pc_session;
	double _initialProcessMemoryPeak;
	double _initialProcessMemoryCurrent;

}
+(id)start;
-(void)dealloc;
-(id)init;
-(id)stop;
-(void)setup;
-(id)endSessionAndReturnPerfCheckExtraInformation;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg1 ;
@end
