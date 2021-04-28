/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TTSAsset.framework/Versions/A/TTSAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TTSAsset/TTSAsset.h>

@class TTSAssetType, TTSAssetSource, TTSAssetTechnology, TTSAssetQuality, NSString, NSArray, NSNumber, NSDictionary, NSBundle;

@interface TTSAsset.TTSAssetLegacyAsset : TTSAsset {

	 asset;
	 $__lazy_storage_$_voiceDesc;

}

@property (readonly,nonatomic) TTSAssetType * assetType; 
@property (readonly,nonatomic) TTSAssetSource * assetSource; 
@property (readonly,nonatomic) TTSAssetTechnology * technology; 
@property (readonly,nonatomic) TTSAssetQuality * quality; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long versionNumber; 
@property (readonly,nonatomic) NSString * versionDescription; 
@property (readonly,nonatomic) NSArray * supportedLanguages; 
@property (readonly,nonatomic) long long gender; 
@property (readonly,nonatomic) NSNumber * age; 
@property (readonly,nonatomic) NSDictionary * attributes; 
@property (readonly,nonatomic) NSBundle * bundle; 
@property (readonly,nonatomic) char purgeable; 
-(id)init;
-(NSString *)name;
-(NSString *)identifier;
-(NSDictionary *)attributes;
-(long long)versionNumber;
-(long long)gender;
-(NSBundle *)bundle;
-(void)purge;
-(TTSAssetQuality *)quality;
-(NSNumber *)age;
-(TTSAssetType *)assetType;
-(NSArray *)supportedLanguages;
-(TTSAssetTechnology *)technology;
-(char)purgeable;
-(TTSAssetSource *)assetSource;
-(NSString *)versionDescription;
@end

