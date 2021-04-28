/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString;


@protocol INCreateTimerIntentExport <NSObject,JSExport>
@property (copy) INSpeakableString * label; 
@property (assign) double duration; 
@property (assign) long long type; 
@required
-(id)init;
-(void)setType:(long long)arg1;
-(long long)type;
-(INSpeakableString *)label;
-(void)setLabel:(id)arg1;
-(double)duration;
-(void)setDuration:(double)arg1;

@end

