/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchAds/ADAppRepresentation.h>
#import <libobjc.A.dylib/APOdmlRankable.h>

@class ADOdmlResponseV2, NSString, ADDataObject;

@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable> {

	ADOdmlResponseV2* _odmlResponse;
	ADDataObject* _adData;
	NSString* _instanceID;

}

@property (nonatomic,retain) ADDataObject * adData;                          //@synthesize adData=_adData - In the implementation block
@property (nonatomic,retain) NSString * instanceID;                          //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,readonly) ADOdmlResponseV2 * odmlResponse;              //@synthesize odmlResponse=_odmlResponse - In the implementation block
@property (nonatomic,readonly) NSString * adamID; 
-(void)setInstanceID:(NSString *)arg1 ;
-(NSString *)instanceID;
-(id)initWithAdamID:(id)arg1 assetInfo:(id)arg2 adData:(id)arg3 instanceID:(id)arg4 ;
-(ADDataObject *)adData;
-(ADOdmlResponseV2 *)odmlResponse;
-(id)initWithAdamID:(id)arg1 assetInfo:(id)arg2 adData:(id)arg3 ;
-(void)setAdData:(ADDataObject *)arg1 ;
@end
