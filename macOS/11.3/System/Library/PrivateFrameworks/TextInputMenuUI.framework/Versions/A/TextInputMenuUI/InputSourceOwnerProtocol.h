/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol InputSourceOwnerProtocol <NSObject>
@required
-(id)bundle;
-(ProcessSerialNumber*)targetApp;
-(void)handleEnabledInputSourcesChange;
-(void)sourceWasChangedTo:(id)arg1;
-(void)setNotificationOverride;
-(id)targetTSMDocument;
-(char)isSecureMode;

@end

