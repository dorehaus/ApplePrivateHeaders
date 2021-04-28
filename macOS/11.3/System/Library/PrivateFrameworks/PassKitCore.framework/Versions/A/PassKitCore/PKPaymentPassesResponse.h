/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse {

	NSArray* _passURLs;
	NSString* _lastUpdatedTag;
	NSArray* _devicePassSerialNumbers;

}

@property (nonatomic,copy) NSArray * passURLs;                             //@synthesize passURLs=_passURLs - In the implementation block
@property (nonatomic,copy) NSArray * devicePassSerialNumbers;              //@synthesize devicePassSerialNumbers=_devicePassSerialNumbers - In the implementation block
@property (nonatomic,copy) NSString * lastUpdatedTag;                      //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
-(id)initWithData:(id)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(NSString *)lastUpdatedTag;
-(NSArray *)passURLs;
-(NSArray *)devicePassSerialNumbers;
-(void)setPassURLs:(NSArray *)arg1 ;
-(void)setDevicePassSerialNumbers:(NSArray *)arg1 ;
@end

