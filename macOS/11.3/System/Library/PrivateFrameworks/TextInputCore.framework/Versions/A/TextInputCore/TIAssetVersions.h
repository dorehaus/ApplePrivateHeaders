/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIAssetAttributes, TIAsset, NSMutableSet;

@interface TIAssetVersions : NSObject {

	TIAssetAttributes* _attributes;
	TIAsset* _currentAsset;
	NSMutableSet* _assets;

}

@property (nonatomic,readonly) NSMutableSet * assets;                       //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) TIAsset * currentAsset;                        //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(char)isEmpty;
-(TIAssetAttributes *)attributes;
-(id)recursiveDescription;
-(id)initWithAttributes:(id)arg1 ;
-(NSMutableSet *)assets;
-(TIAsset *)currentAsset;
-(void)setCurrentAsset:(TIAsset *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(id)purgeableAssets;
-(char)purgeAsset:(id)arg1 ;
@end
