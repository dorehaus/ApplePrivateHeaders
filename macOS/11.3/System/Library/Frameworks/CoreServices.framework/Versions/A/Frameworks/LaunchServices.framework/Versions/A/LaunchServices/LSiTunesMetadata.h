/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface LSiTunesMetadata : NSObject <NSSecureCoding> {

	char _deviceBasedVPP;
	char _purchasedRedownload;
	char _gameCenterEnabled;
	char _gameCenterEverEnabled;
	unsigned long long _storeItemIdentifier;
	NSString* _artistName;
	NSString* _itemName;
	unsigned long long _versionIdentifier;
	unsigned long long _betaVersionIdentifier;
	unsigned long long _storeFront;
	NSString* _storeCohort;
	NSString* _variantID;
	NSString* _genre;
	unsigned long long _genreIdentifier;
	NSArray* _subgenres;
	unsigned long long _ratingRank;
	NSString* _ratingLabel;
	NSString* _sourceApp;

}

@property (nonatomic,readonly) unsigned long long storeItemIdentifier;                                  //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                                   //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                                     //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) unsigned long long versionIdentifier;                                    //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long betaVersionIdentifier;                                //@synthesize betaVersionIdentifier=_betaVersionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long storeFront;                                           //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSString * storeCohort;                                                  //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,readonly) NSString * variantID;                                                    //@synthesize variantID=_variantID - In the implementation block
@property (getter=isDeviceBasedVPP,nonatomic,readonly) char deviceBasedVPP;                             //@synthesize deviceBasedVPP=_deviceBasedVPP - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                                        //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) unsigned long long genreIdentifier;                                      //@synthesize genreIdentifier=_genreIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * subgenres;                                                     //@synthesize subgenres=_subgenres - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingRank;                                           //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSString * ratingLabel;                                                  //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) NSString * sourceApp;                                                    //@synthesize sourceApp=_sourceApp - In the implementation block
@property (getter=isPurchasedRedownload,nonatomic,readonly) char purchasedRedownload;                   //@synthesize purchasedRedownload=_purchasedRedownload - In the implementation block
@property (getter=isGameCenterEnabled,nonatomic,readonly) char gameCenterEnabled;                       //@synthesize gameCenterEnabled=_gameCenterEnabled - In the implementation block
@property (getter=wasGameCenterEverEnabled,nonatomic,readonly) char gameCenterEverEnabled;              //@synthesize gameCenterEverEnabled=_gameCenterEverEnabled - In the implementation block
+(id)new;
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemName;
-(NSString *)ratingLabel;
-(unsigned long long)ratingRank;
-(NSString *)genre;
-(NSArray *)subgenres;
-(unsigned long long)storeFront;
-(char)isDeviceBasedVPP;
-(char)isGameCenterEnabled;
-(id)_initWithContext:(LSContext*)arg1 bundleData:(const LSBundleData*)arg2 ;
-(unsigned long long)storeItemIdentifier;
-(NSString *)artistName;
-(unsigned long long)versionIdentifier;
-(unsigned long long)betaVersionIdentifier;
-(NSString *)storeCohort;
-(NSString *)variantID;
-(unsigned long long)genreIdentifier;
-(NSString *)sourceApp;
-(char)isPurchasedRedownload;
-(char)wasGameCenterEverEnabled;
@end

