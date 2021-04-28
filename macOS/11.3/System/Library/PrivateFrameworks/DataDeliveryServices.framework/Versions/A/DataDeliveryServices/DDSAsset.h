/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSString, MAAsset;

@interface DDSAsset : NSObject {

	NSDictionary* _attributes;
	NSURL* _localURL;
	unsigned long long _assetState;
	NSString* _dataType;
	NSString* _assetType;
	MAAsset* _maAsset;
	NSString* _debuggingID;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) MAAsset * maAsset;                                      //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,retain) NSString * debuggingID;                                 //@synthesize debuggingID=_debuggingID - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                            //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long contentVersion; 
@property (nonatomic,readonly) NSURL * localURL;                                     //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) unsigned long long assetState;                        //@synthesize assetState=_assetState - In the implementation block
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) NSString * dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * installDate; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)asset;
+(id)uniqueIdentifierForMAAsset:(id)arg1 ;
+(id)assetWithMAAsset:(id)arg1 ;
+(id)debuggingIDsForAssets:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)locale;
-(NSString *)uniqueIdentifier;
-(NSString *)dataType;
-(NSDictionary *)attributes;
-(unsigned long long)compatibilityVersion;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)assetType;
-(NSString *)shortName;
-(unsigned long long)contentVersion;
-(NSURL *)localURL;
-(NSString *)assetUUID;
-(NSString *)installDate;
-(void)setMaAsset:(MAAsset *)arg1 ;
-(MAAsset *)maAsset;
-(NSString *)debuggingID;
-(char)isEqualToAsset:(id)arg1 ;
-(void)_mergeAttributes:(id)arg1 ;
-(unsigned long long)assetState;
-(void)setDebuggingID:(NSString *)arg1 ;
@end

