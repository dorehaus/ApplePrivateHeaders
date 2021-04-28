/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountPolicy.framework/Versions/A/AccountPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountPolicy/AccountPolicy-Structs.h>
#import <AccountPolicy/APPolicy.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface APPolicyPasswordHistory : APPolicy <NSCopying, NSSecureCoding> {

	NSNumber* _numberOfHistoryItems;

}

@property (copy) NSNumber * numberOfHistoryItems;              //@synthesize numberOfHistoryItems=_numberOfHistoryItems - In the implementation block
+(id)policyWithNumberOfHistoryItems:(id)arg1 ;
+(id)policyWithIdentifier:(id)arg1 andNumberOfHistoryItems:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 andNumberOfHistoryItems:(id)arg2 ;
-(void)setNumberOfHistoryItems:(NSNumber *)arg1 ;
-(id)initWithNumberOfHistoryItems:(id)arg1 ;
-(id)_contentDescriptionsForNumItems:(id)arg1 ;
-(id)_parametersForNumItems:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)numberOfHistoryItems;
@end
