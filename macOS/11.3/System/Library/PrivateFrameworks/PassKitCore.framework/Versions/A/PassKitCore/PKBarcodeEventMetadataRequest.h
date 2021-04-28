/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSString* _lastUsedBarcodeIdentifier;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;                //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastUsedBarcodeIdentifier;              //@synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)lastUsedBarcodeIdentifier;
-(void)setLastUsedBarcodeIdentifier:(NSString *)arg1 ;
-(id)initWithBarcodeIdentifier:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
-(NSString *)deviceAccountIdentifier;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
@end

