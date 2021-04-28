/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {

	ISPurchaseReceipt* _purchaseReceipt;
	char _isValid;

}

@property (readonly) char isValid;                         //@synthesize isValid=_isValid - In the implementation block
@property (readonly) char isVPPLicensed; 
@property (readonly) char isRevoked; 
@property (readonly) NSDate * expirationDate; 
+(id)receiptPathForProxy:(id)arg1 ;
+(void)getReceiptPathWithCompletionBlock:(/*^block*/id)arg1 ;
+(int)vppStateFlagsWithProxy:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(char)isValid;
-(NSDate *)expirationDate;
-(char)isRevoked;
-(char)isVPPLicensed;
-(char)receiptExpired;
-(id)initWithContainerPath:(id)arg1 ;
@end

