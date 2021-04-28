/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VCPHandObservation : NSObject {

	int _handID;
	int _revision;
	NSArray* _keypoints;

}

@property (nonatomic,retain) NSArray * keypoints;              //@synthesize keypoints=_keypoints - In the implementation block
@property (assign,nonatomic) int handID;                       //@synthesize handID=_handID - In the implementation block
@property (assign,nonatomic) int revision;                     //@synthesize revision=_revision - In the implementation block
-(int)revision;
-(void)setRevision:(int)arg1 ;
-(NSArray *)keypoints;
-(void)setKeypoints:(NSArray *)arg1 ;
-(int)handID;
-(void)setHandID:(int)arg1 ;
@end
