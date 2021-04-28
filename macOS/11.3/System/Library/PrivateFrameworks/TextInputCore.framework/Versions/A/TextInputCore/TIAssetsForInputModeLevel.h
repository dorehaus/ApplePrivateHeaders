/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByAttributes;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(char)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
-(id)assetContentItemsMatching:(id)arg1 ;
-(char)hasAssertions;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(char)purgeAsset:(id)arg1 ;
-(NSString *)inputModeLevel;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForAttributes:(id)arg1 ;
-(void)removeEmptyAssets;
@end

