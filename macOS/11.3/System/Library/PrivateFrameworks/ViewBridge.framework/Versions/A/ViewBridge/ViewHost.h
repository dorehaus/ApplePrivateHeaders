/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/HostOrService.h>
#import <libobjc.A.dylib/HostCallsAuxiliary.h>

@class NSString;

@interface ViewHost : HostOrService <HostCallsAuxiliary> {

	unsigned _seed;
	CGRect _frameInScreenCoords;
	NSString* _rendezvousWindowIdentifier;
	unsigned char _hostWindowKind;
	unsigned char _hostWindowBase;
	unsigned _hostAppIsActive : 1;
	unsigned _keyTestWindowIsKey : 1;
	unsigned _remoteViewIsFirstResponder : 1;
	unsigned _wantsAggressiveKeyboardFocusTheftCancellation : 1;
	unsigned _mostRecentlyResignedFirstResponderInFavorOfAccessoryView : 1;
	unsigned _mayAttemptCommandEquivalentAtWill : 2;
	NSString* _serviceViewControllerIdentifier;

}

@property (readonly) char mayAttemptCommandEquivalentAtWill; 
@property (readonly) char hostAppIsActive; 
@property (readonly) char keyTestWindowIsKey; 
@property (readonly) char remoteViewIsFirstResponder; 
@property (readonly) char wantsAggressiveKeyboardFocusTheftCancellation; 
@property (readonly) char mostRecentlyResignedFirstResponderInFavorOfAccessoryView; 
@property (readonly) unsigned char hostWindowKind;                                               //@synthesize hostWindowKind=_hostWindowKind - In the implementation block
@property (readonly) unsigned char hostWindowBase;                                               //@synthesize hostWindowBase=_hostWindowBase - In the implementation block
@property (readonly) unsigned seed; 
@property (assign) CGRect frameInScreenCoords;                                                   //@synthesize frameInScreenCoords=_frameInScreenCoords - In the implementation block
@property (copy) NSString * serviceViewControllerIdentifier;                                     //@synthesize serviceViewControllerIdentifier=_serviceViewControllerIdentifier - In the implementation block
+(id)ultimateAncestorOfWindow:(unsigned)arg1 inDictionaryOfHostsAndServices:(id)arg2 consideringEachViewHost:(/*^block*/id)arg3 ;
+(id)ultimateAncestorOfWindow:(unsigned)arg1 inDictionaryOfHostsAndServices:(id)arg2 ;
+(id)ultimateAncestor:(id)arg1 forApp:(SCD_Struct_NS5)arg2 ;
-(NSString *)serviceViewControllerIdentifier;
-(void)setServiceViewControllerIdentifier:(NSString *)arg1 ;
-(void)remoteViewKeyTestWindowResignedKey;
-(void)remoteViewKeyTestWindowBecameKeyWhileFirstResponder:(char)arg1 inActiveApp:(char)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg3 ;
-(void)remoteViewResignedFirstResponderInService:(id)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg4 inFavorOfAccessoryView:(char)arg5 ;
-(void)potentialCommandEquivalentHitRemoteView:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)remoteViewBecameFirstResponderForWindowWithKey:(char)arg1 inActiveApp:(char)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg3 ;
-(void)remoteViewBecameAssociatedWithWindow:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)joinPair:(id)arg1 serviceViewControllerIdentifier:(id)arg2 frameInScreenCoords:(CGRect)arg3 hostWindowKind:(unsigned char)arg4 hostWindowBase:(unsigned char)arg5 reply:(/*^block*/id)arg6 ;
-(void)updateFrameInScreenCoords:(CGRect)arg1 ;
-(void)killViewService:(/*^block*/id)arg1 ;
-(CGRect)frameInScreenCoords;
-(char)wantsAggressiveKeyboardFocusTheftCancellation;
-(LSASNRef)ultimateHostAppSerialNumber;
-(char)keyTestWindowIsKey;
-(char)remoteViewIsFirstResponder;
-(char)mostRecentlyResignedFirstResponderInFavorOfAccessoryView;
-(char)hostAppIsActive;
-(void)setFrameInScreenCoords:(CGRect)arg1 ;
-(void)bumpSeed;
-(char)mayAttemptCommandEquivalentAtWill;
-(void)potentialCommandEquivalentHitServiceApp:(CGEventRef)arg1 from:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)forwardEventToAccessoryView:(CGEventRef)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned char)hostWindowKind;
-(unsigned char)hostWindowBase;
-(void)dealloc;
-(void)invalidate:(id)arg1 ;
-(unsigned)seed;
@end

