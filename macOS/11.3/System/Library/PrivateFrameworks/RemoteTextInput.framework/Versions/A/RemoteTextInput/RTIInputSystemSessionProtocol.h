/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/Versions/A/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTIInputSystemSessionProtocol <NSObject>
@optional
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(char)arg2 withReason:(id)arg3;

@required
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1;

@end
