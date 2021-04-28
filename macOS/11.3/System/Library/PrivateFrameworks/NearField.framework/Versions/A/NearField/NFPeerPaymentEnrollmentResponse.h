/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary;

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {

	NSData* _prePeerPaymentCertificate;
	NSDictionary* _certificate;

}

@property (nonatomic,retain,readonly) NSData * prePeerPaymentCertificate;              //@synthesize prePeerPaymentCertificate=_prePeerPaymentCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * certificate;                      //@synthesize certificate=_certificate - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificate;
-(NSData *)prePeerPaymentCertificate;
@end

