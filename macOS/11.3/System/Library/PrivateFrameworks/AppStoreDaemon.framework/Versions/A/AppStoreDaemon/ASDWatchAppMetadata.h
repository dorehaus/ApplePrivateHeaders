/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	char _skipIfInstalled;
	NSString* _altDSID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _downloaderID;
	NSNumber* _externalVersionID;
	NSNumber* _itemID;
	NSNumber* _previousExternalVersionID;
	NSString* _previousVariantID;
	NSNumber* _purchaserID;
	NSString* _redownloadParams;

}

@property (assign) char skipIfInstalled;                            //@synthesize skipIfInstalled=_skipIfInstalled - In the implementation block
@property (copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (copy) NSString * appleID;                                //@synthesize appleID=_appleID - In the implementation block
@property (copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSNumber * downloaderID;                           //@synthesize downloaderID=_downloaderID - In the implementation block
@property (copy) NSNumber * externalVersionID;                      //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (copy) NSNumber * previousExternalVersionID;              //@synthesize previousExternalVersionID=_previousExternalVersionID - In the implementation block
@property (copy) NSString * previousVariantID;                      //@synthesize previousVariantID=_previousVariantID - In the implementation block
@property (copy) NSNumber * purchaserID;                            //@synthesize purchaserID=_purchaserID - In the implementation block
@property (copy) NSString * redownloadParams;                       //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(long long)metadataType;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(void)setPurchaserID:(NSNumber *)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(NSNumber *)downloaderID;
-(NSNumber *)purchaserID;
-(NSString *)redownloadParams;
-(NSNumber *)externalVersionID;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(NSNumber *)previousExternalVersionID;
-(void)setPreviousExternalVersionID:(NSNumber *)arg1 ;
-(NSString *)previousVariantID;
-(void)setPreviousVariantID:(NSString *)arg1 ;
-(char)skipIfInstalled;
-(void)setSkipIfInstalled:(char)arg1 ;
@end

