/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/Versions/A/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@protocol _DKKnowledgeSaving;
@class NSMutableArray, NSString;

@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination> {

	NSMutableArray* _matchers;
	id<_DKKnowledgeSaving> _knowledgeStore;

}

@property (nonatomic,readonly) NSMutableArray * matchers;                          //@synthesize matchers=_matchers - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_DKKnowledgeSaving>)knowledgeStore;
-(NSMutableArray *)matchers;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)processEvent:(id)arg1 ;
-(id)_datasetSampleFromEvent:(id)arg1 andMatcher:(id)arg2 ;
-(void)_addCoreDuetDatasetSample:(id)arg1 toDataset:(id)arg2 ;
@end

