/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	unsigned long long _badgeValue;

}

@property (assign,nonatomic) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)badgeValue;
-(void)setBadgeValue:(unsigned long long)arg1 ;
@end
