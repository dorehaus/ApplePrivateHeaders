/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(void)setConnectionSeed:(unsigned)arg1 ;
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(unsigned)connectionSeed;
-(NSString *)overscanAdjustment;
@end

