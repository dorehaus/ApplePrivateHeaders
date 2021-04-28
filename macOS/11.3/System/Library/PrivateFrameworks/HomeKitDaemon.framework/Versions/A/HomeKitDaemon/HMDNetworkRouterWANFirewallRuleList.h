/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _portRules;
	NSMutableArray* _icmpRules;

}

@property (nonatomic,retain) NSMutableArray * portRules;              //@synthesize portRules=_portRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * icmpRules;              //@synthesize icmpRules=_icmpRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)portRules;
-(void)setPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icmpRules;
-(void)setIcmpRules:(NSMutableArray *)arg1 ;
-(id)initWithPortRules:(id)arg1 icmpRules:(id)arg2 ;
@end

