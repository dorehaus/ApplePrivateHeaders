/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFCachePolicy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableArray;

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maximumCount;
	NSMutableSet* _considerationSet;
	NSMutableArray* _orderedConsiderationList;

}
+(id)policyWithMaximumCount:(unsigned long long)arg1 ;
-(id)description;
-(void)didAddCacheEntry:(id)arg1 ;
-(void)didRemoveCacheEntry:(id)arg1 ;
-(id)willAddOrReplaceEntry:(id)arg1 add:(char)arg2 contents:(id)arg3 ;
-(void)didGetCacheEntry:(id)arg1 ;
-(unsigned long long)capacityHint;
-(void)didRemoveAllCacheEntries;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)_buildConsiderationSet:(id)arg1 ;
-(id)_keyToEvict:(id)arg1 ;
@end
