/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BundleData, NSDictionary;

@interface AKELData : NSObject {

	BundleData* _bundle;
	NSDictionary* _signatureExceptionData;
	NSDictionary* _timestampExceptionData;

}
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(char)isKextAllowedWithoutSecureTimestamp:(id)arg1 ;
-(id)findLegacyKextBundleID:(id)arg1 ;
-(char)isLegacyKextAllowed:(id)arg1 ;
-(char)reloadIfNecessary;
-(void)loadFromBundleData:(id)arg1 ;
@end
