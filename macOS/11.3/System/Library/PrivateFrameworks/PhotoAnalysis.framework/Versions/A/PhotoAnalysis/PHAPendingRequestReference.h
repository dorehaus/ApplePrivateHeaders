/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAGraphServiceWorker, NSString;

@interface PHAPendingRequestReference : NSObject {

	PHAGraphServiceWorker* _worker;
	NSString* _label;

}

@property (__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (retain) NSString * label;                            //@synthesize label=_label - In the implementation block
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(PHAGraphServiceWorker *)worker;
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
@end
