/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGHighlightItemEnrichmentRule;
@class NSDictionary;

@interface PGHighlightItemEnrichment : NSObject {

	id<PGHighlightItemEnrichmentRule> _rule;
	NSDictionary* _contextualKeyAssetByHighlighItemUUID;

}

@property (nonatomic,readonly) id<PGHighlightItemEnrichmentRule> rule;                           //@synthesize rule=_rule - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextualKeyAssetByHighlighItemUUID;              //@synthesize contextualKeyAssetByHighlighItemUUID=_contextualKeyAssetByHighlighItemUUID - In the implementation block
-(id<PGHighlightItemEnrichmentRule>)rule;
-(id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2 ;
-(void)enrichHighlightItemLists:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)contextualKeyAssetByHighlighItemUUID;
@end

