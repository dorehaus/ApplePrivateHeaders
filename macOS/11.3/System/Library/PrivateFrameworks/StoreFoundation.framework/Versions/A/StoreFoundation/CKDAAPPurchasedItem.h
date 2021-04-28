/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/CKBook.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CKDAAPPurchasedItem : CKBook <NSSecureCoding> {

	NSDictionary* _daapDictionary;

}

@property (copy) NSDictionary * daapDictionary;              //@synthesize daapDictionary=_daapDictionary - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)daapDictionary;
-(void)setDaapDictionary:(NSDictionary *)arg1 ;
@end
