/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKContainerID, NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	char _manateeContainer;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKOperationConfiguration* _defaultOperationConfiguration;
	HMFScheduler* _apsRegistrationScheduler;

}

@property (getter=isManateeContainer) char manateeContainer;                            //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (copy) CKOperationConfiguration * defaultOperationConfiguration;              //@synthesize defaultOperationConfiguration=_defaultOperationConfiguration - In the implementation block
@property (copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler;                   //@synthesize apsRegistrationScheduler=_apsRegistrationScheduler - In the implementation block
@property (copy,readonly) CKContainerID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(CKContainerID *)containerID;
-(id)initWithContainerID:(id)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(CKOperationConfiguration *)defaultOperationConfiguration;
-(id)attributeDescriptions;
-(char)isManateeContainer;
-(void)setManateeContainer:(char)arg1 ;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(HMFScheduler *)apsRegistrationScheduler;
-(void)setApsRegistrationScheduler:(HMFScheduler *)arg1 ;
@end

