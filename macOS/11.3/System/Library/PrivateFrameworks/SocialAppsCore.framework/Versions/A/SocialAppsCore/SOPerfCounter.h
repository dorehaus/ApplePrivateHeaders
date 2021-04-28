/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface SOPerfCounter : NSObject {

	char _isActive;
	double _lastStartTime;
	NSMutableArray* _times;
	NSString* _name;
	double _longestTime;
	double _timeTally;

}

@property (assign,nonatomic) double lastStartTime;                //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * times;              //@synthesize times=_times - In the implementation block
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char isActive;                       //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) double longestTime;                  //@synthesize longestTime=_longestTime - In the implementation block
@property (assign,nonatomic) double timeTally;                    //@synthesize timeTally=_timeTally - In the implementation block
+(id)formatList:(id)arg1 ;
+(id)formatTimeList:(id)arg1 ;
+(id)allTimings;
+(id)activeTimings;
+(id)counterForName:(id)arg1 ;
+(void)beginTimingForSignpost:(id)arg1 ;
+(void)finishTimingForSignpost:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)isActive;
-(void)start;
-(void)stop;
-(void)setIsActive:(char)arg1 ;
-(NSMutableArray *)times;
-(double)timeTally;
-(double)longestTime;
-(void)setLastStartTime:(double)arg1 ;
-(double)lastStartTime;
-(void)setTimeTally:(double)arg1 ;
-(void)setLongestTime:(double)arg1 ;
-(void)setTimes:(NSMutableArray *)arg1 ;
@end

