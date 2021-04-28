/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommerceCore/CommerceCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject <NSCoding> {

	NSData* mReceiptData;
	CMSDecoderRef mDecoder;
	NSString* mReceiptPath;
	NSString* mBundleID;
	NSString* mBundleVersion;
	NSString* mParentalControls;
	NSString* mDownloadID;
	NSString* mAdamID;
	NSDate* mPurchaseDate;
	NSString* mPurchaseDateString;
	NSString* mOpaqueDSIDString;
	NSString* mHWType;
	NSDate* mReceiptCreationDate;
	NSString* mDeveloperID;
	NSString* mInstallerVersionID;
	NSString* mReceiptType;
	NSNumber* mFRToolVersion;
	NSString* mExpirationDateString;
	NSDate* mExpirationDate;
	NSString* mRenewalDateString;
	NSDate* mRenewalDate;
	NSString* mOraganizationDisplayName;
	NSString* mCancellationReason;
	char mHashIsValid;
	char _createdFromCoder;

}

@property (readonly) NSString * receiptType; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * parentalControls; 
@property (readonly) NSDate * purchaseDate; 
@property (readonly) NSString * purchaseDateString; 
@property (readonly) NSString * opaqueDSIDString; 
@property (readonly) NSString * hwtype; 
@property (readonly) NSDate * receiptCreationDate; 
@property (readonly) NSString * developerID; 
@property (readonly) NSString * downloadID; 
@property (readonly) NSString * adamID; 
@property (readonly) NSString * installerVersionID; 
@property (readonly) NSNumber * frToolVersion; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) NSDate * renewalDate; 
@property (readonly) NSString * organizationDisplayName; 
@property (readonly) NSString * cancellationReason; 
@property (readonly) char isVPPLicensed; 
@property (readonly) char isRevoked; 
@property (readonly) char isDSIDless; 
@property (readonly) NSData * receiptData; 
@property (readonly) NSString * receiptDataString; 
@property (readonly) NSString * dsid; 
@property (readonly) char isProductionReceipt; 
+(id)_installReceiptWithParameters:(id)arg1 ;
+(id)receiptPathForBundleAtPath:(id)arg1 ;
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
+(id)installReceiptString:(id)arg1 inBundleAtPath:(id)arg2 ;
+(id)installReceiptData:(id)arg1 inBundleAtPath:(id)arg2 ;
+(id)receiptFromBundleAtURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(NSDate *)expirationDate;
-(char)isRevoked;
-(NSString *)dsid;
-(char)_load;
-(NSString *)adamID;
-(NSString *)cancellationReason;
-(NSDate *)renewalDate;
-(NSDate *)receiptCreationDate;
-(char)_checkWWDRIssuerForTrust:(SecTrustRef)arg1 ;
-(long long)_verifySignatureCheckRevocation:(char)arg1 checkExpiration:(char)arg2 useCurrentDate:(char)arg3 ;
-(char)validateAndCheckGUIDSeparately:(char*)arg1 ;
-(NSData *)receiptData;
-(long long)checkSignature;
-(long long)checkSignatureSkipRevocation;
-(long long)checkSignatureAgainstCurrentDate;
-(char)validateAndCheckGUIDSepately:(char*)arg1 ;
-(NSString *)receiptDataString;
-(char)isProductionReceipt;
-(char)isVPPLicensed;
-(char)isDSIDless;
-(NSString *)receiptType;
-(NSDate *)purchaseDate;
-(NSString *)purchaseDateString;
-(NSString *)parentalControls;
-(NSString *)downloadID;
-(NSString *)opaqueDSIDString;
-(NSString *)hwtype;
-(NSString *)developerID;
-(NSString *)installerVersionID;
-(NSNumber *)frToolVersion;
-(NSString *)organizationDisplayName;
@end

