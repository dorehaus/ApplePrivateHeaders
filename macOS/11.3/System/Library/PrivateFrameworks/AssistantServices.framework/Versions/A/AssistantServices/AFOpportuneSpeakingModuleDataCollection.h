/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _speakableMap;

}
+(id)sharedCollector;
-(id)init;
-(void)_deleteSpeakablesOlderThan:(id)arg1 ;
-(void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5 ;
-(void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2 ;
@end

