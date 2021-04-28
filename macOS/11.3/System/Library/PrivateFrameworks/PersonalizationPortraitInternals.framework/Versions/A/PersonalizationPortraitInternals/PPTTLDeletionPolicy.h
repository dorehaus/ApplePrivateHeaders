/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PPLocalNamedEntityStore, PPLocalTopicStore, PPLocalLocationStore;

@interface PPTTLDeletionPolicy : NSObject {

	NSArray* _rules;
	PPLocalNamedEntityStore* _namedEntityStore;
	PPLocalTopicStore* _topicStore;
	PPLocalLocationStore* _locationStore;

}
+(id)defaultPolicy;
-(id)description;
-(id)init;
-(id)initWithRules:(id)arg1 namedEntityStore:(id)arg2 topicStore:(id)arg3 locationStore:(id)arg4 ;
-(char)applyPolicyWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(char)_deleteAllNamedEntitiesExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(char)_deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
-(char)_deleteAllTopicsExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(char)_deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
-(char)_deleteAllLocationsExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(char)_deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
@end

