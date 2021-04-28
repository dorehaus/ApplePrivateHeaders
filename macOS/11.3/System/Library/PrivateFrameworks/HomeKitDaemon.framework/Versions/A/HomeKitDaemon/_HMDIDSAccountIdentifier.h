/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier {

	NSString* _identifierString;

}

@property (copy,readonly) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(char)supportsSecureCoding;
+(id)namespace;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)senderCorrelationIdentifier;
-(NSString *)identifierString;
-(char)isAuthenticated;
-(id)initWithIdentifierString:(id)arg1 ;
@end

