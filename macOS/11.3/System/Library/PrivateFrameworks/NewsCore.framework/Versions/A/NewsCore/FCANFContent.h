/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, FCAssetHandle;

@interface FCANFContent : NSObject {

	NSString* _identifier;
	NSArray* _fontResourceIDs;
	FCAssetHandle* _mainDocumentAssetHandle;

}

@property (nonatomic,readonly) FCAssetHandle * mainDocumentAssetHandle;              //@synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * fontResourceIDs;                            //@synthesize fontResourceIDs=_fontResourceIDs - In the implementation block
@property (nonatomic,readonly) NSArray * anfDocumentAssetHandles; 
@property (nonatomic,readonly) char isANFDocumentCached; 
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3 ;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)anfDocumentAssetHandles;
-(char)isANFDocumentCached;
-(id)fetchANFDocumentDataProviderWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)fontResourceIDs;
@end

