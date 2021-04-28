/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSURL, USKNode;

@interface USKScene : USKObject {

	TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>* _usdStage;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) USKNode * rootNode; 
+(id)newSceneWithURL:(id)arg1 error:(id*)arg2 ;
+(id)newSceneWithURL:(id)arg1 ;
-(TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)usdStage;
-(id)initWithUsdStage:(TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 fileURL:(id)arg2 ;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3 ;
-(void)addSubLayerWithPath:(id)arg1 offset:(id)arg2 ;
-(char)exportToURL:(id)arg1 ;
-(void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1 ;
-(id)propertyAtPath:(id)arg1 ;
-(void)addSubLayerWithPath:(id)arg1 ;
-(id)subLayerPaths;
-(id)subLayerOffsets;
-(char)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(void)dumpUSDA;
-(void)dealloc;
-(id)init;
-(USKNode *)rootNode;
-(void)save;
-(id)metadata;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 ;
-(void)saveAndCreateUSDZPackageWithURL:(id)arg1 ;
-(char)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(char)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(id)objectAtPath:(id)arg1 ;
-(id)nodeAtPath:(id)arg1 ;
-(id)metadataWithKey:(id)arg1 ;
-(id)initSceneFromURL:(id)arg1 error:(id*)arg2 ;
-(id)loadedNodeIterator;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)nodeIterator;
-(id)initSceneFromURL:(id)arg1 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
@end

