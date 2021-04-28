/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMDHome, NSObject, HMFMessageDispatcher, HMDApplicationData, NSDictionary, NSSet;

@interface HMDRoom : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSString* _name;
	NSUUID* _uuid;
	NSUUID* _spiClientIdentifier;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDApplicationData* _appData;

}

@property (copy,readonly) NSString * urlString; 
@property (copy,readonly) NSDictionary * assistantObject; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSUUID * spiClientIdentifier;                                       //@synthesize spiClientIdentifier=_spiClientIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
+(id)logCategory;
+(char)hasMessageReceiverChildren;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(id)privateDescription;
-(void)setHome:(HMDHome *)arg1 ;
-(NSString *)urlString;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(HMDApplicationData *)appData;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSUUID *)spiClientIdentifier;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(NSDictionary *)assistantObject;
-(NSString *)serializedIdentifier;
-(void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2 ;
@end

