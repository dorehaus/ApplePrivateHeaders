/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/Versions/A/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTTCallDelegate <NSObject>
@required
-(void)ttyCall:(id)arg1 setVisible:(char)arg2 serviceUpdate:(id)arg3;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
-(void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;

@end
