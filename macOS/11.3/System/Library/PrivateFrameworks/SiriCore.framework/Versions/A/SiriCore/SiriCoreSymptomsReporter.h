/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreSymptomsReporter : NSObject
+(id)sharedInstance;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(char)arg6 triggerForIDSIdentifiers:(id)arg7 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(char)arg6 triggerForIDSIdentifiers:(id)arg7 withPcap:(char)arg8 ;
-(id)_processNameForPid:(int)arg1 ;
-(void)_getTypeForError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(char)arg5 withPcap:(char)arg6 ;
-(id)_subtypeContextStringFromContext:(id)arg1 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(char)arg5 triggerForIDSIdentifiers:(id)arg6 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(char)arg5 ;
@end

