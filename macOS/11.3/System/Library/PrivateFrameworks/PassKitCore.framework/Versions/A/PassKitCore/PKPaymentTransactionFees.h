/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	NSSet* _fees;

}

@property (nonatomic,retain) NSSet * fees;              //@synthesize fees=_fees - In the implementation block
+(char)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)_feesSetFromJsonString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2 ;
-(id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(NSSet *)fees;
-(id)_feeItemsFromRecord:(id)arg1 ;
-(id)initWithFeeItems:(id)arg1 ;
-(char)isEqualToFees:(id)arg1 ;
-(void)setFees:(NSSet *)arg1 ;
@end

