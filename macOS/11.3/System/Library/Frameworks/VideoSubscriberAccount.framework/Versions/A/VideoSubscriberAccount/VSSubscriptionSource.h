/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding> {

	long long _kind;
	NSString* _identifier;

}

@property (assign,nonatomic) long long kind;                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(char)supportsSecureCoding;
+(id)subscriptionSourceForWebsiteWithURL:(id)arg1 ;
+(id)currentSource;
+(id)subscriptionSourceForAppWithBundleID:(id)arg1 ;
+(id)subscriptionSourceForWebsiteWithDomainName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
@end
