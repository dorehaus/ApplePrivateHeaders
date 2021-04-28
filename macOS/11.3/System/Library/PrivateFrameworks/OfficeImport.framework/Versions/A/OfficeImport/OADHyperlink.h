/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface OADHyperlink : NSObject {

	NSURL* mTargetLocation;
	int mTargetMode;
	NSString* mTargetFrame;
	NSString* mAction;
	NSString* mTooltip;
	NSString* mInvalidUrl;
	char mDoEndSound;
	char mIsVisited;
	char mDoAddToHistory;

}

@property (assign,nonatomic) char doEndSound; 
@property (assign,nonatomic) char isVisited; 
@property (assign,nonatomic) char doAddToHistory; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)tooltip;
-(id)targetFrame;
-(void)setTargetFrame:(id)arg1 ;
-(id)targetLocation;
-(int)targetMode;
-(void)setTargetLocation:(id)arg1 ;
-(void)setTargetMode:(int)arg1 ;
-(void)setTooltip:(id)arg1 ;
-(id)invalidUrl;
-(void)setInvalidUrl:(id)arg1 ;
-(char)doEndSound;
-(void)setDoEndSound:(char)arg1 ;
-(char)isVisited;
-(void)setIsVisited:(char)arg1 ;
-(char)doAddToHistory;
-(void)setDoAddToHistory:(char)arg1 ;
@end

