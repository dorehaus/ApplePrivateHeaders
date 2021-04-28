/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@class NSString, NSArray;

@interface MRScrapbookLayout : NSObject {

	CGRect rect;
	NSString* frame;
	NSString* mask;
	double zRotation;
	NSArray* subtract;
	double startTime;
	long long slideIndex;
	double aspectRatio;
	char stretch;
	char isText;
	char isBreak;
	NSString* backgroundPaper;
	char twoPart;
	char move;
	CGRect paperRect;
	long long drawCardIndex;
	char skip;
	long long moveIndex;

}

@property (nonatomic,retain) NSString * frame; 
@property (nonatomic,retain) NSString * mask; 
@property (nonatomic,retain) NSString * backgroundPaper; 
@property (nonatomic,retain) NSArray * subtract; 
-(void)dealloc;
-(NSString *)frame;
-(void)setFrame:(NSString *)arg1 ;
-(NSString *)mask;
-(void)setMask:(NSString *)arg1 ;
-(NSArray *)subtract;
-(void)setSubtract:(NSArray *)arg1 ;
-(NSString *)backgroundPaper;
-(void)setBackgroundPaper:(NSString *)arg1 ;
@end
