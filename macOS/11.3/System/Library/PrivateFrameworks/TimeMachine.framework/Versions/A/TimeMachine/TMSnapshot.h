/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMAPFSSnapshotProtocol.h>

@class NSURL, NSString;

@interface TMSnapshot : NSObject <TMAPFSSnapshotProtocol> {

	int _flags;
	NSURL* _liveVolumeMountPoint;
	NSString* _snapshotName;
	unsigned long long _xid;
	unsigned long long _fileID;

}

@property (copy,readonly) NSURL * liveVolumeMountPoint;              //@synthesize liveVolumeMountPoint=_liveVolumeMountPoint - In the implementation block
@property (readonly) unsigned long long xid;                         //@synthesize xid=_xid - In the implementation block
@property (readonly) unsigned long long fileID;                      //@synthesize fileID=_fileID - In the implementation block
@property (copy,readonly) NSString * snapshotName;                   //@synthesize snapshotName=_snapshotName - In the implementation block
@property (readonly) int flags;                                      //@synthesize flags=_flags - In the implementation block
+(id)snapshotsForLiveVolumeMountPoint:(id)arg1 error:(id*)arg2 ;
-(int)flags;
-(char)delete:(id*)arg1 ;
-(unsigned long long)fileID;
-(unsigned long long)xid;
-(NSURL *)liveVolumeMountPoint;
-(id)initWithLiveVolumeMountPoint:(id)arg1 name:(id)arg2 xid:(unsigned long long)arg3 fileID:(unsigned long long)arg4 flags:(int)arg5 ;
-(NSString *)snapshotName;
-(char)mountAtURL:(id)arg1 error:(id*)arg2 ;
-(char)waitForDeletionUntil:(id)arg1 error:(id*)arg2 ;
-(char)makeDataless:(id*)arg1 ;
@end
