/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationRevokeUpgradeContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _transactionID;
	NSString* _bundleID;
	NSString* _teamID;

}

@property (nonatomic,copy) NSString * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                     //@synthesize teamID=_teamID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)teamID;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)transactionID;
-(void)setTransactionID:(NSString *)arg1 ;
@end
