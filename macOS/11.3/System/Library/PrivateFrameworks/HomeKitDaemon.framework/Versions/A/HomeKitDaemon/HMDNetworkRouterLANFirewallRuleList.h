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

@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _multicastBridgingRules;
	NSMutableArray* _staticPortRules;
	NSMutableArray* _dynamicPortRules;
	NSMutableArray* _staticICMPRules;

}

@property (nonatomic,retain) NSMutableArray * multicastBridgingRules;              //@synthesize multicastBridgingRules=_multicastBridgingRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticPortRules;                     //@synthesize staticPortRules=_staticPortRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * dynamicPortRules;                    //@synthesize dynamicPortRules=_dynamicPortRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticICMPRules;                     //@synthesize staticICMPRules=_staticICMPRules - In the implementation block
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
-(NSMutableArray *)dynamicPortRules;
-(void)setDynamicPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)multicastBridgingRules;
-(void)setMulticastBridgingRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)staticPortRules;
-(void)setStaticPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)staticICMPRules;
-(void)setStaticICMPRules:(NSMutableArray *)arg1 ;
-(id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4 ;
@end

