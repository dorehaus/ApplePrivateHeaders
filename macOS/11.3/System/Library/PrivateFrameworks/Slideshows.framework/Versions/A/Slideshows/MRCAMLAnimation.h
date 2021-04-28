/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {

	double startTime;
	double duration;
	char removedOnCompletion;
	NSString* keyPath;
	NSArray* keyframes;

}

@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,retain) NSArray * keyframes; 
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSArray *)keyframes;
-(void)setKeyframes:(NSArray *)arg1 ;
@end
