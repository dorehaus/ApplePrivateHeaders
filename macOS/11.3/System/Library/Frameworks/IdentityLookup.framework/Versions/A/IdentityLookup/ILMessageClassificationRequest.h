/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/Versions/A/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _messageCommunications;

}

@property (nonatomic,copy,readonly) NSArray * messageCommunications;              //@synthesize messageCommunications=_messageCommunications - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToRequest:(id)arg1 ;
-(NSArray *)messageCommunications;
-(id)initWithMessageCommunications:(id)arg1 ;
@end

