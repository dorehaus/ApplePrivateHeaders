/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	NSMutableArray* mCompletionBlocks;
	char mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end

