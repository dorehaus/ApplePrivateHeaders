/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding> {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;               //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) char isLeft; 
@property (nonatomic,readonly) char isRight; 
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(char)supportsSecureCoding;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithRight:(id)arg1 ;
+(id)eitherWithBool:(char)arg1 error:(id)arg2 ;
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)firstLeftInLazyChain:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPair *)pair;
-(id)left;
-(id)right;
-(char)isLeft;
-(char)isRight;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(void)setPair:(CNPair *)arg1 ;
@end

