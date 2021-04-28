/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSString, NSHashTable, NSData, NSURL, NSArray;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {

	NSString* _bundleIdentifier;
	char _independent;
	id<HMFLocking> _lock;
	NSHashTable* _processes;
	HMDApplicationInfo* _companionApplicationInfo;

}

@property (getter=isIndependent,readonly) char independent;                                //@synthesize independent=_independent - In the implementation block
@property (readonly) HMDApplicationInfo * companionApplicationInfo;                        //@synthesize companionApplicationInfo=_companionApplicationInfo - In the implementation block
@property (copy,readonly) NSData * vendorIdentifier; 
@property (getter=isInstalled,readonly) char installed; 
@property (getter=isEntitledForAPIAccess,readonly) char entitledForAPIAccess; 
@property (getter=isEntitledForSPIAccess,readonly) char entitledForSPIAccess; 
@property (copy,readonly) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSURL * bundleURL; 
@property (readonly) HMDApplicationInfo * hostApplicationInfo; 
@property (copy,readonly) NSArray * processes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationInfoForBundleIdentifier:(id)arg1 ;
+(id)logCategory;
+(id)privateVendorIdentifier;
+(id)applicationInfoForBundleURL:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSURL *)bundleURL;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(char)isInstalled;
-(id)shortDescription;
-(NSArray *)processes;
-(NSData *)vendorIdentifier;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)addProcess:(id)arg1 ;
-(char)isEntitledForSPIAccess;
-(char)isEntitledForAPIAccess;
-(void)removeProcess:(id)arg1 ;
-(HMDApplicationInfo *)hostApplicationInfo;
-(id)clientIdentifierSalt:(id*)arg1 ;
-(char)isIndependent;
-(HMDApplicationInfo *)companionApplicationInfo;
@end
