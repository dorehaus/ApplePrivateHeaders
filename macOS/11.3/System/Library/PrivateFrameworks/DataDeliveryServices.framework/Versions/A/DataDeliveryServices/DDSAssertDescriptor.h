/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _assertionIdentifier;
	DDSAssetPolicy* _policy;

}

@property (nonatomic,retain) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,retain) DDSAssetPolicy * policy;                     //@synthesize policy=_policy - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DDSAssetPolicy *)policy;
-(void)setPolicy:(DDSAssetPolicy *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)assertionIdentifier;
-(id)initWithPolicy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(char)isEqualToDescriptor:(id)arg1 ;
-(void)setAssertionIdentifier:(NSString *)arg1 ;
@end

