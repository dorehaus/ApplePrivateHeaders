/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic,readonly) unsigned long long decisionDepth; 
@property (nonatomic,readonly) double decisionAge; 
@property (nonatomic,readonly) double decisionThreshold; 
@property (nonatomic,readonly) unsigned long long maxPersistenceDepth; 
@property (nonatomic,readonly) double maxPersistenceAge; 
+(id)defaultRules;
-(unsigned long long)decisionDepth;
-(double)decisionAge;
-(double)decisionThreshold;
-(double)weightForEvent:(id)arg1 ;
-(unsigned long long)maxPersistenceDepth;
-(double)maxPersistenceAge;
@end
