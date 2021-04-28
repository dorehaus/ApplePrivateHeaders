/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject {

	NSUUID* _accessoryUUID;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSUUID * accessoryUUID;              //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) id progressHandler;                    //@synthesize progressHandler=_progressHandler - In the implementation block
-(NSUUID *)accessoryUUID;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

