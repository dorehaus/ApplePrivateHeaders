/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RWIDriverSession.h>
#import <libobjc.A.dylib/WDSessionHost.h>

@protocol WDSessionHostDelegate;
@class NSString, RWIDrivable, NSDictionary, NSBundle, NSTimer, RWIApplication, WDProtocolBackendProxy, RWITarget, SimDevice;

@interface WDRemoteSessionHost : NSObject <RWIDriverSession, WDSessionHost> {

	id<WDSessionHostDelegate> _delegate;
	unsigned long long _notificationHandlerID;
	NSString* _sessionIdentifier;
	long long _hostType;
	long long _sessionState;
	NSBundle* _hostApplicationBundle;
	/*^block*/id _bootstrapCompletionHandler;
	NSTimer* _bootstrapTimeout;
	NSString* _expectedApplicationIdentifier;
	RWIApplication* _hostApplication;
	RWIDrivable* _drivable;
	WDProtocolBackendProxy* _backendProxy;
	RWITarget* _hostTarget;
	SimDevice* _hostSimulator;

}

@property (nonatomic,readonly) WDProtocolBackendProxy * backendProxy; 
@property (nonatomic,readonly) RWITarget * hostTarget;                                 //@synthesize hostTarget=_hostTarget - In the implementation block
@property (nonatomic,readonly) SimDevice * hostSimulator;                              //@synthesize hostSimulator=_hostSimulator - In the implementation block
@property (nonatomic,readonly) char supportsFileUploadForLocalPaths; 
@property (nonatomic,copy,readonly) NSString * hostName; 
@property (nonatomic,copy,readonly) NSString * hostVersion; 
@property (nonatomic,copy,readonly) NSString * sessionIdentifier; 
@property (nonatomic,readonly) RWIDrivable * remoteDrivable; 
@property (nonatomic,copy,readonly) NSDictionary * forwardedCapabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long hostType; 
@property (assign,nonatomic,__weak) id<WDSessionHostDelegate> delegate; 
+(id)hostForMachine:(id)arg1 ;
+(id)hostForSimulator:(id)arg1 ;
+(id)hostForDevice:(id)arg1 ;
-(id<WDSessionHostDelegate>)delegate;
-(void)setDelegate:(id<WDSessionHostDelegate>)arg1 ;
-(NSString *)hostName;
-(NSString *)sessionIdentifier;
-(void)sendMessageToFrontend:(id)arg1 ;
-(void)sendMessageToBackend:(id)arg1 ;
-(void)_handleRWINotification:(id)arg1 ;
-(void)_registerForRWINotifications;
-(void)_unregisterForRWINotifications;
-(NSDictionary *)forwardedCapabilities;
-(RWIDrivable *)remoteDrivable;
-(NSString *)hostVersion;
-(long long)hostType;
-(SimDevice *)hostSimulator;
-(RWITarget *)hostTarget;
-(WDProtocolBackendProxy *)backendProxy;
-(char)supportsFileUploadForLocalPaths;
-(void)disconnectSession;
-(id)initWithType:(long long)arg1 target:(id)arg2 simulator:(id)arg3 ;
-(void)_handleApplicationAdded:(id)arg1 ;
-(void)_handleApplicationRemoved:(id)arg1 ;
-(void)_handleDrivableAdded:(id)arg1 ;
-(void)_handleDrivableRemoved:(id)arg1 ;
-(void)_handleDrivableStateChanged:(id)arg1 ;
-(void)_transitionStateTo:(long long)arg1 ;
-(void)findOrLaunchSuitableLocalApplication;
-(void)_bootSimulatorIfNeeded;
-(void)findOrLaunchSuitableRemoteApplication;
-(id)_preferredLocalSafariApplications;
-(void)_bootstrapFailedWithError:(id)arg1 ;
-(void)findOrLaunchLocalApplication:(id)arg1 ;
-(void)_startBootstrapTimeoutForAsyncOperation:(id)arg1 ;
-(void)_waitForApplicationWithIdentifier:(id)arg1 ;
-(char)_bootstrapWithApplicationIfMatching:(id)arg1 ;
-(void)_bootstrapEncounteredTimeout:(id)arg1 ;
-(void)_clearBootstrapTimeout;
-(void)_bootSimulatorInstanceIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_bootSimulatorAppIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_waitForApplicationToBecomeUsable:(id)arg1 ;
-(void)_createDrivableForApplicationIfNeeded;
-(void)_remoteSessionWasTerminated;
-(void)_startPairingWithDrivable:(id)arg1 ;
-(void)_matchingDrivableDidBecomePaired;
-(id)_automationProtocolURL;
-(void)bootstrapSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)canLaunchBrowserWithName:(id)arg1 version:(id)arg2 ;
@end

