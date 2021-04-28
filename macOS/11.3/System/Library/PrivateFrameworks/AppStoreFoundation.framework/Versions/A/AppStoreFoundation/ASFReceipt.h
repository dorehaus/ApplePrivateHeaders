/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/Versions/A/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreFoundation/AppStoreFoundation-Structs.h>
@class NSMutableArray, NSString, NSData, NSDate, NSNumber, NSArray;

@interface ASFReceipt : NSObject {

	char _verbose;
	NSMutableArray* _mutableIAPs;
	NSString* _path;
	NSString* _bundleID;
	NSData* _bundleIDData;
	NSString* _bundleVersion;
	NSString* _cancellationReason;
	NSDate* _creationDate;
	NSString* _developerID;
	NSString* _downloadID;
	NSString* _frAppVersion;
	NSNumber* _frToolVersion;
	NSDate* _expirationDate;
	NSString* _hwtype;
	NSString* _installerVersionID;
	NSNumber* _itemID;
	NSArray* _iaps;
	NSData* _opaqueDSIDData;
	NSString* _opaqueDSIDString;
	NSString* _organizationDisplayName;
	NSString* _parentalControls;
	NSDate* _purchaseDate;
	NSString* _receiptType;
	NSDate* _renewalDate;
	NSData* _sha1;

}

@property (readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSData * bundleIDData;                           //@synthesize bundleIDData=_bundleIDData - In the implementation block
@property (readonly) NSString * bundleVersion;                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (readonly) NSString * cancellationReason;                   //@synthesize cancellationReason=_cancellationReason - In the implementation block
@property (readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) NSString * developerID;                          //@synthesize developerID=_developerID - In the implementation block
@property (readonly) NSString * downloadID;                           //@synthesize downloadID=_downloadID - In the implementation block
@property (readonly) NSString * frAppVersion;                         //@synthesize frAppVersion=_frAppVersion - In the implementation block
@property (readonly) NSNumber * frToolVersion;                        //@synthesize frToolVersion=_frToolVersion - In the implementation block
@property (readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) NSString * hwtype;                               //@synthesize hwtype=_hwtype - In the implementation block
@property (readonly) NSString * installerVersionID;                   //@synthesize installerVersionID=_installerVersionID - In the implementation block
@property (readonly) char isDSIDless; 
@property (readonly) char isVPPLicensed; 
@property (readonly) char isRevoked; 
@property (readonly) NSNumber * itemID;                               //@synthesize itemID=_itemID - In the implementation block
@property (readonly) NSArray * iaps;                                  //@synthesize iaps=_iaps - In the implementation block
@property (readonly) NSData * opaqueDSIDData;                         //@synthesize opaqueDSIDData=_opaqueDSIDData - In the implementation block
@property (readonly) NSString * opaqueDSIDString;                     //@synthesize opaqueDSIDString=_opaqueDSIDString - In the implementation block
@property (readonly) NSString * organizationDisplayName;              //@synthesize organizationDisplayName=_organizationDisplayName - In the implementation block
@property (readonly) NSString * parentalControls;                     //@synthesize parentalControls=_parentalControls - In the implementation block
@property (readonly) NSDate * purchaseDate;                           //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (readonly) NSString * receiptType;                          //@synthesize receiptType=_receiptType - In the implementation block
@property (readonly) NSDate * renewalDate;                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (readonly) NSData * receiptData; 
@property (readonly) NSString * receiptDataString; 
@property (readonly) NSData * sha1;                                   //@synthesize sha1=_sha1 - In the implementation block
@property (readonly) NSString * path;                                 //@synthesize path=_path - In the implementation block
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
+(id)receiptFromBundleAtURL:(id)arg1 ;
+(id)_receiptURLForBundleURL:(id)arg1 ;
+(id)_receiptURLFromRecordWithBundleURL:(id)arg1 ;
+(id)receiptWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)bundleVersion;
-(NSDate *)expirationDate;
-(char)isRevoked;
-(NSDate *)creationDate;
-(NSString *)cancellationReason;
-(NSDate *)renewalDate;
-(void)_logError:(id)arg1 ;
-(NSData *)receiptData;
-(NSString *)receiptDataString;
-(char)isVPPLicensed;
-(char)isDSIDless;
-(NSString *)receiptType;
-(NSDate *)purchaseDate;
-(NSString *)parentalControls;
-(NSString *)downloadID;
-(NSString *)opaqueDSIDString;
-(NSString *)hwtype;
-(NSString *)developerID;
-(NSString *)installerVersionID;
-(NSNumber *)frToolVersion;
-(NSString *)organizationDisplayName;
-(NSArray *)iaps;
-(char)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout SecCmsMessageStr*)arg2 ;
-(char)_parseReceiptFromMessage:(SecCmsMessageStrRef)arg1 ;
-(SecCmsSignedDataStrRef)_extractSignedDataFromMessage:(SecCmsMessageStrRef)arg1 ;
-(long long)_verifySignatureForSignedData:(SecCmsSignedDataStrRef)arg1 onDate:(id)arg2 ;
-(id)_parseIAPsFromDataRef:(CFDataRef)arg1 ;
-(void)_log:(id)arg1 ;
-(void)_parseTokens:(id)arg1 ;
-(id)_parseIAPTokens:(id)arg1 ;
-(void)_log:(id)arg1 arg:(id)arg2 ;
-(char)_decodeIAPReceiptData:(id)arg1 ;
-(CFArrayRef)_copyCertificatesFromSignedData:(SecCmsSignedDataStrRef)arg1 ;
-(char)_setPoliciesForTrust:(SecTrustRef)arg1 ;
-(NSData *)bundleIDData;
-(NSString *)frAppVersion;
-(NSData *)opaqueDSIDData;
-(NSData *)sha1;
@end

