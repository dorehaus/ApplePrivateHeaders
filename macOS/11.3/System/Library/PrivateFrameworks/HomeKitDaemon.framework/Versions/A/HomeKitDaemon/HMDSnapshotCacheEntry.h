/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDSnapshotFile, NSString, HMFTimer;

@interface HMDSnapshotCacheEntry : HMFObject {

	HMDSnapshotFile* _snapshotFile;
	NSString* _proactiveSessionID;
	HMFTimer* _timer;
	/*^block*/id _snapshotRequestCompletion;

}

@property (nonatomic,readonly) HMDSnapshotFile * snapshotFile;              //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,readonly) NSString * proactiveSessionID;               //@synthesize proactiveSessionID=_proactiveSessionID - In the implementation block
@property (nonatomic,readonly) HMFTimer * timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id snapshotRequestCompletion;                    //@synthesize snapshotRequestCompletion=_snapshotRequestCompletion - In the implementation block
-(id)description;
-(HMFTimer *)timer;
-(HMDSnapshotFile *)snapshotFile;
-(NSString *)proactiveSessionID;
-(id)initWithProactiveSessionID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3 ;
-(id)snapshotRequestCompletion;
-(void)setSnapshotRequestCompletion:(id)arg1 ;
@end

