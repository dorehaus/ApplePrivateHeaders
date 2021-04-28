/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMControllable.h>
#import <libobjc.A.dylib/HMMediaDestinationInternal.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>
#import <libobjc.A.dylib/HMApplicationData.h>
#import <libobjc.A.dylib/HMMediaDestination.h>
#import <libobjc.A.dylib/HMMediaObject.h>

@protocol HMMediaSystemDelegate;
@class NSArray, NSString, NSUUID, HMHome, HMApplicationData, HMMediaSession, HMAccessorySettings, HMFUnfairLock, HMSymptomsHandler, _HMContext, HMMutableArray, HMMediaDestination, HMAccessoryCategory;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject> {

	HMFUnfairLock* _lock;
	char _compatible;
	NSString* _name;
	NSString* _configuredName;
	NSUUID* _uniqueIdentifier;
	HMAccessorySettings* _settings;
	id<HMMediaSystemDelegate> _delegate;
	HMApplicationData* _applicationData;
	HMHome* _home;
	HMSymptomsHandler* _symptomsHandler;
	_HMContext* _context;
	NSUUID* _uuid;
	HMMutableArray* _componentsArray;
	HMMediaDestination* _audioDestination;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;                                //@synthesize componentsArray=_componentsArray - In the implementation block
@property (nonatomic,retain) HMApplicationData * applicationData;                             //@synthesize applicationData=_applicationData - In the implementation block
@property (retain) HMMediaDestination * audioDestination;                                     //@synthesize audioDestination=_audioDestination - In the implementation block
@property (__weak) id<HMMediaSystemDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * configuredName;                                     //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isCompatible,nonatomic,readonly) char compatible;                           //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) HMAccessoryCategory * category; 
@property (nonatomic,readonly) HMSymptomsHandler * symptomsHandler;                           //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (getter=isControllable,readonly) char controllable; 
@property (copy,readonly) NSArray * audioDestinationMediaProfiles; 
@property (copy,readonly) NSString * audioDestinationParentIdentifier; 
@property (copy,readonly) NSUUID * audioDestinationGroupIdentifier; 
@property (copy,readonly) NSString * audioDestinationIdentifier; 
@property (copy,readonly) NSString * audioDestinationName; 
@property (readonly) long long audioDestinationType; 
@property (readonly) char supportsAudioDestination; 
@property (readonly) char supportsAudioGroup; 
@property (__weak,readonly) HMHome * containerHome; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings;                                          //@synthesize settings=_settings - In the implementation block
+(char)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMMediaSystemDelegate>)delegate;
-(void)setDelegate:(id<HMMediaSystemDelegate>)arg1 ;
-(NSUUID *)uuid;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessoryCategory *)category;
-(NSArray *)components;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(HMHome *)home;
-(HMAccessorySettings *)settings;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(HMApplicationData *)applicationData;
-(void)setHome:(HMHome *)arg1 ;
-(HMMediaDestination *)audioDestination;
-(void)setAudioDestination:(HMMediaDestination *)arg1 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_unconfigure;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(NSString *)audioDestinationIdentifier;
-(NSString *)audioDestinationName;
-(long long)audioDestinationType;
-(char)supportsAudioDestination;
-(char)supportsAudioGroup;
-(void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)audioDestinationMediaProfiles;
-(NSString *)audioDestinationParentIdentifier;
-(NSUUID *)audioDestinationGroupIdentifier;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 ;
-(HMMediaSession *)mediaSession;
-(char)isControllable;
-(id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(char)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8 ;
-(HMSymptomsHandler *)symptomsHandler;
-(HMMutableArray *)componentsArray;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(void)_handleSystemUpdatedNotification:(id)arg1 ;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyDelegateOfUpdatedSettings:(id)arg1 ;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(char)arg3 ;
-(void)notifyDelegateOfUpdatedComponents:(id)arg1 ;
-(void)notifyDelegateOfUpdatedName:(id)arg1 ;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)notifyDelegateOfUpdatedConfiguredName:(id)arg1 ;
-(void)notifyDelegateOfUpdatedApplicationData:(id)arg1 ;
-(void)notifyDelegateOfUpdatedAudioDestination;
-(void)notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(HMHome *)containerHome;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAccessoryReference;
-(char)isCompatible;
-(void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
@end

