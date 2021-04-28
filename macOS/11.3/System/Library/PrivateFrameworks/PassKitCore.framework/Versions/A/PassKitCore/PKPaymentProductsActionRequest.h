/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProductsActionRequest : PKPaymentWebServiceRequest {

	NSString* _action;
	NSString* _productIdentifier;

}

@property (nonatomic,copy) NSString * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end
