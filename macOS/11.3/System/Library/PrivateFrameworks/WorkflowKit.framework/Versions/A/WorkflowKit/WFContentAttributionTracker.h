/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFContentAttributionTracker : NSObject {

	NSMutableDictionary* _attributionSets;
	NSObject*<OS_dispatch_queue> _trackingAttributionSetQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * attributionSets;                                 //@synthesize attributionSets=_attributionSets - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> trackingAttributionSetQueue;              //@synthesize trackingAttributionSetQueue=_trackingAttributionSetQueue - In the implementation block
-(id)init;
-(void)addAttributionSet:(id)arg1 forParameter:(id)arg2 ;
-(id)attributionSetForParameter:(id)arg1 ;
-(id)trackedAttributionSet;
-(NSMutableDictionary *)attributionSets;
-(NSObject*<OS_dispatch_queue>)trackingAttributionSetQueue;
@end

