/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCServerBag : NSObject {

	opaque_pthread_cond_t isLoadedCondition;
	opaque_pthread_mutex_t isLoadedMutex;
	char isLoaded;
	id observer;

}
+(id)sharedInstance;
+(void)pullStoreBagKeys;
+(char)verifyRequiredKeys:(id*)arg1 ;
+(void)clearBagWithRefreshIntervalInSeconds:(int)arg1 ;
+(char)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(char)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

