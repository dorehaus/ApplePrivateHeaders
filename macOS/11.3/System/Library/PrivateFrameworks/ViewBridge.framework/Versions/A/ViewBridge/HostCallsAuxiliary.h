/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HostCallsAuxiliary <HostOrServiceCallsAuxiliary>
@required
-(void)remoteViewKeyTestWindowResignedKey;
-(void)remoteViewKeyTestWindowBecameKeyWhileFirstResponder:(char)arg1 inActiveApp:(char)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg3;
-(void)remoteViewResignedFirstResponderInService:(id)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg4 inFavorOfAccessoryView:(char)arg5;
-(void)potentialCommandEquivalentHitRemoteView:(id)arg1 reply:(/*^block*/id)arg2;
-(void)remoteViewBecameFirstResponderForWindowWithKey:(char)arg1 inActiveApp:(char)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg3;
-(void)remoteViewBecameAssociatedWithWindow:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)joinPair:(id)arg1 serviceViewControllerIdentifier:(id)arg2 frameInScreenCoords:(CGRect)arg3 hostWindowKind:(unsigned char)arg4 hostWindowBase:(unsigned char)arg5 reply:(/*^block*/id)arg6;
-(void)updateFrameInScreenCoords:(CGRect)arg1;
-(void)killViewService:(/*^block*/id)arg1;

@end
