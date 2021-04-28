/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUUtilities : NSObject
+(char)systemIsAPFS;
+(char)systemIsMemberOfReadOnlySystemGroup;
+(unsigned)uidFromCurrentAuditToken;
+(id)trimBugFixFromVersion:(id)arg1 ;
+(id)daemonTempDirectoryAppendedWithPath:(id)arg1 ;
+(id)daemonCacheDirectoryAppendedWithPath:(id)arg1 ;
+(char)removeRosetta;
+(id)trimMinorFromVersion:(id)arg1 ;
+(long long)compareVersion:(id)arg1 againstVersion:(id)arg2 ;
+(id)usernameForCurrentAuditTokenWithOutUID:(unsigned*)arg1 ;
+(char)currentUserIsOnConsole;
+(unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)arg1 ;
@end

