/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/CNDonationValue.h>

@class NSData;

@interface _CNImageDataDonationValue : CNDonationValue {

	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(id)initWithImageData:(id)arg1 origin:(id)arg2 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

