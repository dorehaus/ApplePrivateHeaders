/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/Versions/A/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface _SWCTrackingDomainInfo : NSObject <NSSecureCoding> {

	NSString* _domain;
	NSDictionary* _JSONObject;

}

@property (readonly) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * ownerName; 
@property (readonly) NSString * ownerDisplayName; 
@property (readonly) unsigned long long source; 
+(id)new;
+(char)supportsSecureCoding;
+(id)_queue;
+(id)_trackingDomainInfoWithDomains:(id)arg1 ;
+(id)_trackingDomainInfoWithDomain:(id)arg1 JSONObject:(id)arg2 ;
+(id)lastDatabaseUpdate;
+(id)trackingDomainInfoWithDomains:(id)arg1 ;
+(void)_getTrackingDomainInfoWithDomains:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)source;
-(NSString *)ownerName;
-(id)_initWithDomain:(id)arg1 JSONObject:(id)arg2 ;
-(NSString *)ownerDisplayName;
@end
