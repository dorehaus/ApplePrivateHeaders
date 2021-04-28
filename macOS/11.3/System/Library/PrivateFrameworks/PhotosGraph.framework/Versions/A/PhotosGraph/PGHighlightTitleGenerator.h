/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGEventEnrichment;
@class PHAssetCollection, PHAsset, PGTitleTuple;

@interface PGHighlightTitleGenerator : NSObject {

	char _createVerboseTitle;
	id<PGEventEnrichment> _collection;
	PHAssetCollection* _curatedAssetCollection;
	PHAsset* _keyAsset;
	PGTitleTuple* _titleTuple;

}

@property (nonatomic,retain) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) char createVerboseTitle;                                 //@synthesize createVerboseTitle=_createVerboseTitle - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                               //@synthesize titleTuple=_titleTuple - In the implementation block
+(char)collectionContainsAppleEvent:(id)arg1 ;
+(id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1 ;
+(id)meaningLabelsSortedByPriority;
-(id<PGEventEnrichment>)collection;
-(void)setCollection:(id<PGEventEnrichment>)arg1 ;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(PHAsset *)keyAsset;
-(id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(char)arg4 ;
-(PGTitleTuple *)titleTuple;
-(void)_generateTitleTuples;
-(PHAssetCollection *)curatedAssetCollection;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
-(char)createVerboseTitle;
-(void)setCreateVerboseTitle:(char)arg1 ;
@end

