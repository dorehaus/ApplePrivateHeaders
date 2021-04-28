/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@class NSString, NSSet;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding> {

	NSSet* mInterfaceTypes;

}

@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ethernetIPAddressProvider;
+(id)WiFiIPAddressProvider;
-(id)init;
-(id)initWithInterfaceType:(id)arg1 ;
-(id)initWithInterfaceTypes:(id)arg1 ;
-(id)networkInterfaceProviders;
-(id)IPAddressWithInterfaceProvider:(id)arg1 map:(id)arg2 ;
-(char)isAllowedInterfaceType:(id)arg1 ;
-(NSString *)IPAddress;
@end

